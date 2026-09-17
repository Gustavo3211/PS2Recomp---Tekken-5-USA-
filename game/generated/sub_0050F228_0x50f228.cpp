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

// Function: sub_0050F228
// Address: 0x50f228 - 0x50f6f0
void sub_0050F228_0x50f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F228_0x50f228");
#endif

    switch (ctx->pc) {
        case 0x50f248u: goto label_50f248;
        case 0x50f298u: goto label_50f298;
        case 0x50f3c0u: goto label_50f3c0;
        case 0x50f3d8u: goto label_50f3d8;
        case 0x50f4f8u: goto label_50f4f8;
        case 0x50f510u: goto label_50f510;
        case 0x50f548u: goto label_50f548;
        case 0x50f560u: goto label_50f560;
        case 0x50f660u: goto label_50f660;
        default: break;
    }

    ctx->pc = 0x50f228u;

    // 0x50f228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50f228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50f22c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50f230: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50f230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50f234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50f238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50f23c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50f240: 0xc124620  jal         func_491880
    ctx->pc = 0x50F240u;
    SET_GPR_U32(ctx, 31, 0x50F248u);
    ctx->pc = 0x50F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F240u;
    // 0x50f244: 0x3c130090  lui         $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x50F240u, 0x50F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F248u;
label_50f248:
    // 0x50f248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x50f248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50f24c: 0x2663f080  addiu       $v1, $s3, -0xF80
    ctx->pc = 0x50f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f250: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x50f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x50f254: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x50f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x50f258: 0x9442e800  lhu         $v0, -0x1800($v0)
    ctx->pc = 0x50f258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961152)));
    // 0x50f25c: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x50f25cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f260: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x50f260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x50f264: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x50f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x50f268: 0x8484e802  lh          $a0, -0x17FE($a0)
    ctx->pc = 0x50f268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294961154)));
    // 0x50f26c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x50F26Cu;
    {
        const bool branch_taken_0x50f26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x50f26c) {
            ctx->pc = 0x50F270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50F26Cu;
            // 0x50f270: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50F288u;
            goto label_50f288;
        }
    }
    ctx->pc = 0x50F274u;
    // 0x50f274: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50f274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50f278: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x50f278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x50f27c: 0xa420e806  sh          $zero, -0x17FA($at)
    ctx->pc = 0x50f27cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 0));
    // 0x50f280: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x50F280u;
    {
        const bool branch_taken_0x50f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F280u;
        // 0x50f284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f280) {
            ctx->pc = 0x50F6D8u;
            goto label_50f6d8;
        }
    }
    ctx->pc = 0x50F288u;
label_50f288:
    // 0x50f288: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x50f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x50f28c: 0x106200e7  beq         $v1, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x50F28Cu;
    {
        const bool branch_taken_0x50f28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x50F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F28Cu;
        // 0x50f290: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f28c) {
            ctx->pc = 0x50F62Cu;
            goto label_50f62c;
        }
    }
    ctx->pc = 0x50F294u;
    // 0x50f294: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x50f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_50f298:
    // 0x50f298: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x50f298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x50f29c: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x50F29Cu;
    {
        const bool branch_taken_0x50f29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F29Cu;
        // 0x50f2a0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f29c) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F2A4u;
    // 0x50f2a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x50f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x50f2a8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x50f2ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50f2b0: 0x8c63d3c0  lw          $v1, -0x2C40($v1)
    ctx->pc = 0x50f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955968)));
    // 0x50f2b4: 0x600008  jr          $v1
    ctx->pc = 0x50F2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x50F2C0u: goto label_50f2c0;
            case 0x50F3A8u: goto label_50f3a8;
            case 0x50F3B8u: goto label_50f3b8;
            case 0x50F410u: goto label_50f410;
            case 0x50F458u: goto label_50f458;
            case 0x50F4F0u: goto label_50f4f0;
            case 0x50F540u: goto label_50f540;
            case 0x50F590u: goto label_50f590;
            case 0x50F5A0u: goto label_50f5a0;
            case 0x50F5B0u: goto label_50f5b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F2B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x50F2BCu;
    // 0x50f2bc: 0x0  nop
    ctx->pc = 0x50f2bcu;
    // NOP
label_50f2c0:
    // 0x50f2c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f2c4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f2c8: 0x2665f080  addiu       $a1, $s3, -0xF80
    ctx->pc = 0x50f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f2cc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50f2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50f2d0: 0xa4a24cc0  sh          $v0, 0x4CC0($a1)
    ctx->pc = 0x50f2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19648), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f2d4: 0x24a64cc8  addiu       $a2, $a1, 0x4CC8
    ctx->pc = 0x50f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 19656));
    // 0x50f2d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f2dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f2e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50f2e4: 0xa4a24cc2  sh          $v0, 0x4CC2($a1)
    ctx->pc = 0x50f2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19650), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f2e8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50f2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x50f2ec: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x50f2ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f2f0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f2f4: 0xa4a44cc4  sh          $a0, 0x4CC4($a1)
    ctx->pc = 0x50f2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19652), (uint16_t)GPR_U32(ctx, 4));
    // 0x50f2f8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f2f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f2fc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f300: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50f300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50f304: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50f304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50f308: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f30c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50f310: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f314: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50f314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f318: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f31c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50f31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50f320: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f324: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50f324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50f328: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f32c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f330: 0xa4a24ccc  sh          $v0, 0x4CCC($a1)
    ctx->pc = 0x50f330u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19660), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f334: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f338: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f33c: 0xa4a34cce  sh          $v1, 0x4CCE($a1)
    ctx->pc = 0x50f33cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19662), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f340: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f344: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f348: 0xa4a24cd0  sh          $v0, 0x4CD0($a1)
    ctx->pc = 0x50f348u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19664), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f34c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f34cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f350: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f354: 0xa4a34cd2  sh          $v1, 0x4CD2($a1)
    ctx->pc = 0x50f354u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19666), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f358: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f35c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f360: 0xa4a24cd4  sh          $v0, 0x4CD4($a1)
    ctx->pc = 0x50f360u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19668), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f364: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f368: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f36c: 0xa4a34cd6  sh          $v1, 0x4CD6($a1)
    ctx->pc = 0x50f36cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19670), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f370: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f374: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f378: 0xa4a24cd8  sh          $v0, 0x4CD8($a1)
    ctx->pc = 0x50f378u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19672), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f37c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f380: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f384: 0xa4a34cda  sh          $v1, 0x4CDA($a1)
    ctx->pc = 0x50f384u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19674), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f388: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x50f388u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f38c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f390: 0xa4a44cdc  sh          $a0, 0x4CDC($a1)
    ctx->pc = 0x50f390u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19676), (uint16_t)GPR_U32(ctx, 4));
    // 0x50f394: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f398: 0xa4a24cde  sh          $v0, 0x4CDE($a1)
    ctx->pc = 0x50f398u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 19678), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f39c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x50f39cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50f3a0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x50F3A0u;
    {
        const bool branch_taken_0x50f3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F3A0u;
        // 0x50f3a4: 0xa4a34ce0  sh          $v1, 0x4CE0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 19680), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f3a0) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F3A8u;
label_50f3a8:
    // 0x50f3a8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f3a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f3ac: 0x2662f080  addiu       $v0, $s3, -0xF80
    ctx->pc = 0x50f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f3b0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x50F3B0u;
    {
        const bool branch_taken_0x50f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F3B0u;
        // 0x50f3b4: 0xa4430078  sh          $v1, 0x78($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f3b0) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F3B8u;
label_50f3b8:
    // 0x50f3b8: 0xc144ab4  jal         func_512AD0
    ctx->pc = 0x50F3B8u;
    SET_GPR_U32(ctx, 31, 0x50F3C0u);
    ctx->pc = 0x512AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AD0u, 0x50F3B8u, 0x50F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F3C0u;
label_50f3c0:
    // 0x50f3c0: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x50f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x50f3c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50f3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50f3c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x50f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50f3cc: 0x18400092  blez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x50F3CCu;
    {
        const bool branch_taken_0x50f3cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x50F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F3CCu;
        // 0x50f3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f3cc) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F3D4u;
    // 0x50f3d4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x50f3d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_50f3d8:
    // 0x50f3d8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x50f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x50f3dc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x50f3dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f3e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x50f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x50f3e4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x50f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x50f3e8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x50f3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x50f3ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50f3f0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x50f3f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50f3f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x50f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50f3f8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x50f3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x50f3fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x50F3FCu;
    {
        const bool branch_taken_0x50f3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F3FCu;
        // 0x50f400: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f3fc) {
            ctx->pc = 0x50F3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f3d8;
        }
    }
    ctx->pc = 0x50F404u;
    // 0x50f404: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x50F404u;
    {
        const bool branch_taken_0x50f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F404u;
        // 0x50f408: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f404) {
            ctx->pc = 0x50F61Cu;
            goto label_50f61c;
        }
    }
    ctx->pc = 0x50F40Cu;
    // 0x50f40c: 0x0  nop
    ctx->pc = 0x50f40cu;
    // NOP
label_50f410:
    // 0x50f410: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f414: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f418: 0x2665f080  addiu       $a1, $s3, -0xF80
    ctx->pc = 0x50f418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f41c: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x50f41cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f420: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f420u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f424: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f428: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x50f428u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f42c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f42cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f430: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f434: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x50f434u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f438: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x50f438u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f43c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f440: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x50f440u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x50f444: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f448: 0xa4a20016  sh          $v0, 0x16($a1)
    ctx->pc = 0x50f448u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f44c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x50f44cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50f450: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x50F450u;
    {
        const bool branch_taken_0x50f450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F450u;
        // 0x50f454: 0xa4a30018  sh          $v1, 0x18($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f450) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F458u;
label_50f458:
    // 0x50f458: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f45c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f460: 0x2664f080  addiu       $a0, $s3, -0xF80
    ctx->pc = 0x50f460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f464: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50f464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50f468: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x50f468u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f46c: 0x2485001c  addiu       $a1, $a0, 0x1C
    ctx->pc = 0x50f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x50f470: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f474: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f478: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x50f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50f47c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50f480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50f480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50f484: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x50f484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x50f488: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f48c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50f490: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50f490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50f494: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50f494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f498: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f49c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50f4a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50f4a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50f4a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f4a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f4ac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f4b0: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x50f4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f4b4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f4b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f4b8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f4bc: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x50f4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f4c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f4c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f4c4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f4c8: 0xa4820024  sh          $v0, 0x24($a0)
    ctx->pc = 0x50f4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f4cc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f4ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f4d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f4d4: 0xa4830026  sh          $v1, 0x26($a0)
    ctx->pc = 0x50f4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f4d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f4dc: 0xa4820028  sh          $v0, 0x28($a0)
    ctx->pc = 0x50f4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f4e0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x50f4e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50f4e4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x50F4E4u;
    {
        const bool branch_taken_0x50f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F4E4u;
        // 0x50f4e8: 0xa483002a  sh          $v1, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f4e4) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F4ECu;
    // 0x50f4ec: 0x0  nop
    ctx->pc = 0x50f4ecu;
    // NOP
label_50f4f0:
    // 0x50f4f0: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x50F4F0u;
    SET_GPR_U32(ctx, 31, 0x50F4F8u);
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x50F4F0u, 0x50F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F4F8u;
label_50f4f8:
    // 0x50f4f8: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x50f4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x50f4fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50f500: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x50f500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50f504: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x50F504u;
    {
        const bool branch_taken_0x50f504 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x50F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F504u;
        // 0x50f508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f504) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F50Cu;
    // 0x50f50c: 0x0  nop
    ctx->pc = 0x50f50cu;
    // NOP
label_50f510:
    // 0x50f510: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f514: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f518: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x50f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x50f51c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x50f51cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f520: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50f520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50f524: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x50f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50f528: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x50f528u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50f52c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x50f52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x50f530: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x50F530u;
    {
        const bool branch_taken_0x50f530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F530u;
        // 0x50f534: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f530) {
            ctx->pc = 0x50F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f510;
        }
    }
    ctx->pc = 0x50F538u;
    // 0x50f538: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x50F538u;
    {
        const bool branch_taken_0x50f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F538u;
        // 0x50f53c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f538) {
            ctx->pc = 0x50F61Cu;
            goto label_50f61c;
        }
    }
    ctx->pc = 0x50F540u;
label_50f540:
    // 0x50f540: 0xc144ab8  jal         func_512AE0
    ctx->pc = 0x50F540u;
    SET_GPR_U32(ctx, 31, 0x50F548u);
    ctx->pc = 0x512AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AE0u, 0x50F540u, 0x50F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F548u;
label_50f548:
    // 0x50f548: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x50f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x50f54c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x50f54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50f550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x50f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50f554: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x50F554u;
    {
        const bool branch_taken_0x50f554 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x50F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F554u;
        // 0x50f558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f554) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F55Cu;
    // 0x50f55c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x50f55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_50f560:
    // 0x50f560: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f564: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f568: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x50f568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x50f56c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x50f56cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f570: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50f570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50f574: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50f578: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x50f578u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50f57c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x50f57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x50f580: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x50F580u;
    {
        const bool branch_taken_0x50f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F580u;
        // 0x50f584: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f580) {
            ctx->pc = 0x50F560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f560;
        }
    }
    ctx->pc = 0x50F588u;
    // 0x50f588: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x50F588u;
    {
        const bool branch_taken_0x50f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F588u;
        // 0x50f58c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f588) {
            ctx->pc = 0x50F61Cu;
            goto label_50f61c;
        }
    }
    ctx->pc = 0x50F590u;
label_50f590:
    // 0x50f590: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f594: 0x2662f080  addiu       $v0, $s3, -0xF80
    ctx->pc = 0x50f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f598: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x50F598u;
    {
        const bool branch_taken_0x50f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F598u;
        // 0x50f59c: 0xa4434dfc  sh          $v1, 0x4DFC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 19964), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f598) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F5A0u;
label_50f5a0:
    // 0x50f5a0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f5a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5a4: 0x2662f080  addiu       $v0, $s3, -0xF80
    ctx->pc = 0x50f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f5a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x50F5A8u;
    {
        const bool branch_taken_0x50f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F5A8u;
        // 0x50f5ac: 0xa4434e46  sh          $v1, 0x4E46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 20038), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f5a8) {
            ctx->pc = 0x50F618u;
            goto label_50f618;
        }
    }
    ctx->pc = 0x50F5B0u;
label_50f5b0:
    // 0x50f5b0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f5b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5b4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f5b8: 0x2664f080  addiu       $a0, $s3, -0xF80
    ctx->pc = 0x50f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f5bc: 0xa4834e30  sh          $v1, 0x4E30($a0)
    ctx->pc = 0x50f5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20016), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f5c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f5c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5c4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f5c8: 0xa4824e32  sh          $v0, 0x4E32($a0)
    ctx->pc = 0x50f5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20018), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f5cc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f5ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f5d4: 0xa4834e34  sh          $v1, 0x4E34($a0)
    ctx->pc = 0x50f5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20020), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f5d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f5d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f5e0: 0xa4824e36  sh          $v0, 0x4E36($a0)
    ctx->pc = 0x50f5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20022), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f5e4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f5e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5e8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f5ec: 0xa4834e38  sh          $v1, 0x4E38($a0)
    ctx->pc = 0x50f5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20024), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f5f0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f5f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f5f4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f5f8: 0xa4824e3a  sh          $v0, 0x4E3A($a0)
    ctx->pc = 0x50f5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20026), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f5fc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x50f5fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f600: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x50f600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x50f604: 0xa4834e3c  sh          $v1, 0x4E3C($a0)
    ctx->pc = 0x50f604u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20028), (uint16_t)GPR_U32(ctx, 3));
    // 0x50f608: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50f608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50f60c: 0xa4824e3e  sh          $v0, 0x4E3E($a0)
    ctx->pc = 0x50f60cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20030), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f610: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x50f610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50f614: 0xa4834e40  sh          $v1, 0x4E40($a0)
    ctx->pc = 0x50f614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20032), (uint16_t)GPR_U32(ctx, 3));
label_50f618:
    // 0x50f618: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x50f618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_50f61c:
    // 0x50f61c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x50f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x50f620: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50f624: 0x1443ff1c  bne         $v0, $v1, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x50F624u;
    {
        const bool branch_taken_0x50f624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F624u;
        // 0x50f628: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f624) {
            ctx->pc = 0x50F298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f298;
        }
    }
    ctx->pc = 0x50F62Cu;
label_50f62c:
    // 0x50f62c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x50f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x50f630: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x50f630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x50f634: 0x8cc69400  lw          $a2, -0x6C00($a2)
    ctx->pc = 0x50f634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939648)));
    // 0x50f638: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x50F638u;
    {
        const bool branch_taken_0x50f638 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x50F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F638u;
        // 0x50f63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f638) {
            ctx->pc = 0x50F650u;
            goto label_50f650;
        }
    }
    ctx->pc = 0x50F640u;
    // 0x50f640: 0x2662f080  addiu       $v0, $s3, -0xF80
    ctx->pc = 0x50f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963328));
    // 0x50f644: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x50F644u;
    {
        const bool branch_taken_0x50f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F644u;
        // 0x50f648: 0xac4648c0  sw          $a2, 0x48C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18624), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f644) {
            ctx->pc = 0x50F6ACu;
            goto label_50f6ac;
        }
    }
    ctx->pc = 0x50F64Cu;
    // 0x50f64c: 0x0  nop
    ctx->pc = 0x50f64cu;
    // NOP
label_50f650:
    // 0x50f650: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50f650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50f654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x50f654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50f658: 0x2447f080  addiu       $a3, $v0, -0xF80
    ctx->pc = 0x50f658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50f65c: 0x34089400  ori         $t0, $zero, 0x9400
    ctx->pc = 0x50f65cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_50f660:
    // 0x50f660: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x50f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x50f664: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x50f664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x50f668: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x50f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x50f66c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50f670: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x50f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50f674: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x50f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x50f678: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x50f678u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x50f67c: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x50f67cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x50f680: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x50F680u;
    {
        const bool branch_taken_0x50f680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F680u;
        // 0x50f684: 0xac4448c0  sw          $a0, 0x48C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18624), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f680) {
            ctx->pc = 0x50F6ACu;
            goto label_50f6ac;
        }
    }
    ctx->pc = 0x50F688u;
    // 0x50f688: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x50f688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x50f68c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x50f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x50f690: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x50f690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x50f694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x50f698: 0x8c639400  lw          $v1, -0x6C00($v1)
    ctx->pc = 0x50f698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939648)));
    // 0x50f69c: 0x461fff0  bgez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x50F69Cu;
    {
        const bool branch_taken_0x50f69c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F69Cu;
        // 0x50f6a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50f69c) {
            ctx->pc = 0x50F660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50f660;
        }
    }
    ctx->pc = 0x50F6A4u;
    // 0x50f6a4: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x50f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x50f6a8: 0xac4348c0  sw          $v1, 0x48C0($v0)
    ctx->pc = 0x50f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18624), GPR_U32(ctx, 3));
label_50f6ac:
    // 0x50f6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50f6b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50f6b4: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x50f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x50f6b8: 0xa420e806  sh          $zero, -0x17FA($at)
    ctx->pc = 0x50f6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 0));
    // 0x50f6bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50f6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50f6c0: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x50f6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x50f6c4: 0xa422e804  sh          $v0, -0x17FC($at)
    ctx->pc = 0x50f6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961156), (uint16_t)GPR_U32(ctx, 2));
    // 0x50f6c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x50f6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x50f6cc: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x50f6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x50f6d0: 0xa420e802  sh          $zero, -0x17FE($at)
    ctx->pc = 0x50f6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961154), (uint16_t)GPR_U32(ctx, 0));
    // 0x50f6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50f6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50f6d8:
    // 0x50f6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50f6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50f6dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50f6dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50f6e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50f6e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50f6e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50f6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x50F6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F6E8u;
        // 0x50f6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F6F0u;
}
