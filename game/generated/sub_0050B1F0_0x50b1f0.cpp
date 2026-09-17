#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050B1F0
// Address: 0x50b1f0 - 0x50b408
void sub_0050B1F0_0x50b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B1F0_0x50b1f0");
#endif

    switch (ctx->pc) {
        case 0x50b23cu: goto label_50b23c;
        case 0x50b320u: goto label_50b320;
        case 0x50b370u: goto label_50b370;
        default: break;
    }

    ctx->pc = 0x50b1f0u;

    // 0x50b1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50b1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50b1f4: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50b1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50b1fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50b1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50b200: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x50b200u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x50b204: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50b208: 0x2452f080  addiu       $s2, $v0, -0xF80
    ctx->pc = 0x50b208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50b20c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50b20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50b210: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x50b210u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x50b214: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50b218: 0x2670c624  addiu       $s0, $s3, -0x39DC
    ctx->pc = 0x50b218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952484));
    // 0x50b21c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x50b220: 0x96434e0c  lhu         $v1, 0x4E0C($s2)
    ctx->pc = 0x50b220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x903E8Cu));
    // 0x50b224: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50b224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC624u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC624u, _value); } while (0);
    // 0x50b228: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50b228u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC624u));
    // 0x50b22c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x50b230: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x50b230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x50b234: 0xc124620  jal         func_491880
    ctx->pc = 0x50B234u;
    SET_GPR_U32(ctx, 31, 0x50B23Cu);
    ctx->pc = 0x50B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B234u;
    // 0x50b238: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50B234u, 0x50B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B23Cu;
label_50b23c:
    // 0x50b23c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b240: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x50b240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x50b244: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x50b244u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50b248: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x50b248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x50b24c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x50b24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x50b250: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b254: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x50b254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x50b258: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x50b258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50b25c: 0x2506c610  addiu       $a2, $t0, -0x39F0
    ctx->pc = 0x50b25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952464));
    // 0x50b260: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x50b260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50b264: 0xace5c608  sw          $a1, -0x39F8($a3)
    ctx->pc = 0x50b264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC608u, _value); } while (0);
    // 0x50b268: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x50b268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b26c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50b274: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b278: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50b278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50b27c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b280: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x50b280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x50b284: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50b288: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b28c: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x50B28Cu;
    {
        const bool branch_taken_0x50b28c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x50B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B28Cu;
        // 0x50b290: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b28c) {
            ctx->pc = 0x50B2B0u;
            goto label_50b2b0;
        }
    }
    ctx->pc = 0x50B294u;
    // 0x50b294: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50b298: 0x8e454df8  lw          $a1, 0x4DF8($s2)
    ctx->pc = 0x50b298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 19960)));
    // 0x50b29c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x50b29cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x50b2a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b2a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x50b2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50b2a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x50B2A8u;
    {
        const bool branch_taken_0x50b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B2A8u;
        // 0x50b2ac: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b2a8) {
            ctx->pc = 0x50B2B8u;
            goto label_50b2b8;
        }
    }
    ctx->pc = 0x50B2B0u;
label_50b2b0:
    // 0x50b2b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50b2b4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x50b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_50b2b8:
    // 0x50b2b8: 0x24e7c608  addiu       $a3, $a3, -0x39F8
    ctx->pc = 0x50b2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952456));
    // 0x50b2bc: 0x2504c610  addiu       $a0, $t0, -0x39F0
    ctx->pc = 0x50b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952464));
    // 0x50b2c0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x50b2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x50b2c4: 0x2670c624  addiu       $s0, $s3, -0x39DC
    ctx->pc = 0x50b2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952484));
    // 0x50b2c8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x50b2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b2cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x50b2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50b2d0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x50b2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50b2d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50b2d8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x50b2d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b2dc: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x50b2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b2e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b2e4: 0x10460040  beq         $v0, $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x50B2E4u;
    {
        const bool branch_taken_0x50b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x50B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B2E4u;
        // 0x50b2e8: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b2e4) {
            ctx->pc = 0x50B3E8u;
            goto label_50b3e8;
        }
    }
    ctx->pc = 0x50B2ECu;
    // 0x50b2ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x50b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x50b2f0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50b2f4: 0x2454c604  addiu       $s4, $v0, -0x39FC
    ctx->pc = 0x50b2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952452));
    // 0x50b2f8: 0x2484c628  addiu       $a0, $a0, -0x39D8
    ctx->pc = 0x50b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952488));
    // 0x50b2fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50b300: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50b300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b304: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x50b304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b308: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x50b308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50b30c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x50b30cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x50b310: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b314: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b318: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x50b318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x50b31c: 0x0  nop
    ctx->pc = 0x50b31cu;
    // NOP
label_50b320:
    // 0x50b320: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x50b320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50b324: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b328: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50b328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b32c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x50b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50b330: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x50b330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x50b334: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x50b334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x50b338: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b33c: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x50b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50b340: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50b344: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b348: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50b348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50b34c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b350: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50b350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50b354: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x50b354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x50b358: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50b35c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b360: 0x4600021  bltz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x50B360u;
    {
        const bool branch_taken_0x50b360 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B360u;
        // 0x50b364: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b360) {
            ctx->pc = 0x50B3E8u;
            goto label_50b3e8;
        }
    }
    ctx->pc = 0x50B368u;
    // 0x50b368: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50B368u;
    SET_GPR_U32(ctx, 31, 0x50B370u);
    ctx->pc = 0x50B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B368u;
    // 0x50b36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50B368u, 0x50B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B370u;
label_50b370:
    // 0x50b370: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50b370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b374: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x50b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50b378: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b37c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x50b37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50b380: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50b380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50b384: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b388: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x50b388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x50b38c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x50b38cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b390: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50b390u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b394: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b398: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50b39c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x50b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50b3a0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50b3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50b3a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b3a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b3ac: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x50b3acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x50b3b0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50b3b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50b3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50b3b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50b3b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b3bc: 0x30421e1e  andi        $v0, $v0, 0x1E1E
    ctx->pc = 0x50b3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7710);
    // 0x50b3c0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50b3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50b3c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50b3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50b3c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50b3cc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50b3ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50b3d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50b3d4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50b3d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50b3d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50b3dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x50b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x50b3e0: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x50B3E0u;
    {
        const bool branch_taken_0x50b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B3E0u;
        // 0x50b3e4: 0xa4a40000  sh          $a0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50b3e0) {
            ctx->pc = 0x50B320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50b320;
        }
    }
    ctx->pc = 0x50B3E8u;
label_50b3e8:
    // 0x50b3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50b3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b3ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50b3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50b3f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50b3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50b3f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50b3f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50b3f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50b3f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50b3fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50b3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50b400: 0x3e00008  jr          $ra
    ctx->pc = 0x50B400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B400u;
        // 0x50b404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B408u;
}
