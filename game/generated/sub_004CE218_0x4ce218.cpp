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

// Function: sub_004CE218
// Address: 0x4ce218 - 0x4ce330
void sub_004CE218_0x4ce218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE218_0x4ce218");
#endif

    switch (ctx->pc) {
        case 0x4ce234u: goto label_4ce234;
        case 0x4ce250u: goto label_4ce250;
        default: break;
    }

    ctx->pc = 0x4ce218u;

    // 0x4ce218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ce218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ce21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ce220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ce224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ce228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ce228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ce22c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4CE22Cu;
    SET_GPR_U32(ctx, 31, 0x4CE234u);
    ctx->pc = 0x4CE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE22Cu;
    // 0x4ce230: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4CE22Cu, 0x4CE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE234u;
label_4ce234:
    // 0x4ce234: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ce234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ce238: 0xac620fa8  sw          $v0, 0xFA8($v1)
    ctx->pc = 0x4ce238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0FA8u, _value); } while (0);
    // 0x4ce23c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ce23cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce240: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4CE240u;
    {
        const bool branch_taken_0x4ce240 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE240u;
        // 0x4ce244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce240) {
            ctx->pc = 0x4CE26Cu;
            goto label_4ce26c;
        }
    }
    ctx->pc = 0x4CE248u;
    // 0x4ce248: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4CE248u;
    SET_GPR_U32(ctx, 31, 0x4CE250u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CE248u, 0x4CE250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE250u;
label_4ce250:
    // 0x4ce250: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ce250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ce254: 0x9603015e  lhu         $v1, 0x15E($s0)
    ctx->pc = 0x4ce254u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x4ce258: 0xa60201b6  sh          $v0, 0x1B6($s0)
    ctx->pc = 0x4ce258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce25c: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4ce25cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce260: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ce260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce264: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ce264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ce268: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ce268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ce26c:
    // 0x4ce26c: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x4ce26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x4ce270: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ce270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ce274: 0x244b0fa4  addiu       $t3, $v0, 0xFA4
    ctx->pc = 0x4ce274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4004));
    // 0x4ce278: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4ce278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F0FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0FA4u, _value); } while (0);
    // 0x4ce27c: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4ce27cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4ce280: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CE280u;
    {
        const bool branch_taken_0x4ce280 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4CE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE280u;
        // 0x4ce284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce280) {
            ctx->pc = 0x4CE2A0u;
            goto label_4ce2a0;
        }
    }
    ctx->pc = 0x4CE288u;
    // 0x4ce288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce28c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ce28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ce290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ce294: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4CE294u;
    ctx->pc = 0x4CE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE294u;
    // 0x4ce298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CE29Cu;
    // 0x4ce29c: 0x0  nop
    ctx->pc = 0x4ce29cu;
    // NOP
label_4ce2a0:
    // 0x4ce2a0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4ce2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ce2a4: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4ce2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4ce2a8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ce2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ce2ac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ce2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce2b0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4ce2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4ce2b4: 0x26080014  addiu       $t0, $s0, 0x14
    ctx->pc = 0x4ce2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4ce2b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ce2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ce2bc: 0x26090018  addiu       $t1, $s0, 0x18
    ctx->pc = 0x4ce2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4ce2c0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4ce2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4ce2c4: 0x260a0120  addiu       $t2, $s0, 0x120
    ctx->pc = 0x4ce2c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4ce2c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ce2c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce2cc: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4ce2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ce2d0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ce2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ce2d4: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4ce2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4ce2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ce2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ce2dc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ce2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ce2e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ce2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ce2e4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ce2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ce2e8: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4ce2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ce2ec: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4ce2ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ce2f0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x4ce2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4ce2f4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ce2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ce2f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ce2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ce2fc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4ce2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4ce300: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4ce300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ce304: 0x94430118  lhu         $v1, 0x118($v0)
    ctx->pc = 0x4ce304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x4ce308: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4ce308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce30c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4ce30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ce310: 0x9443011c  lhu         $v1, 0x11C($v0)
    ctx->pc = 0x4ce310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x4ce314: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4ce314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce31c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4ce31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ce320: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x4ce320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x4ce324: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4ce324u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce328: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4CE328u;
    ctx->pc = 0x4CE32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE328u;
    // 0x4ce32c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4CE330u;
}
