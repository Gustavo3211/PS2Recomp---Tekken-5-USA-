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

// Function: sub_0035F280
// Address: 0x35f280 - 0x35f380
void sub_0035F280_0x35f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F280_0x35f280");
#endif

    switch (ctx->pc) {
        case 0x35f2b4u: goto label_35f2b4;
        case 0x35f2d4u: goto label_35f2d4;
        case 0x35f2e0u: goto label_35f2e0;
        case 0x35f2e8u: goto label_35f2e8;
        case 0x35f300u: goto label_35f300;
        case 0x35f330u: goto label_35f330;
        case 0x35f348u: goto label_35f348;
        case 0x35f360u: goto label_35f360;
        default: break;
    }

    ctx->pc = 0x35f280u;

    // 0x35f280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35f284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f28c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35f28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35f294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f29c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2a0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F2A0u;
    {
        const bool branch_taken_0x35f2a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2A0u;
        // 0x35f2a4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2a0) {
            ctx->pc = 0x35F2C0u;
            goto label_35f2c0;
        }
    }
    ctx->pc = 0x35F2A8u;
    // 0x35f2a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f2ac: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F2ACu;
    SET_GPR_U32(ctx, 31, 0x35F2B4u);
    ctx->pc = 0x35F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2ACu;
    // 0x35f2b0: 0x24846388  addiu       $a0, $a0, 0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F2ACu, 0x35F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2B4u;
label_35f2b4:
    // 0x35f2b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f2b8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x35F2B8u;
    {
        const bool branch_taken_0x35f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2B8u;
        // 0x35f2bc: 0x34420025  ori         $v0, $v0, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2b8) {
            ctx->pc = 0x35F368u;
            goto label_35f368;
        }
    }
    ctx->pc = 0x35F2C0u;
label_35f2c0:
    // 0x35f2c0: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x35F2C0u;
    {
        const bool branch_taken_0x35f2c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2C0u;
        // 0x35f2c4: 0x3c02001d  lui         $v0, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2c0) {
            ctx->pc = 0x35F2F0u;
            goto label_35f2f0;
        }
    }
    ctx->pc = 0x35F2C8u;
    // 0x35f2c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f2cc: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F2CCu;
    SET_GPR_U32(ctx, 31, 0x35F2D4u);
    ctx->pc = 0x35F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2CCu;
    // 0x35f2d0: 0x248463c0  addiu       $a0, $a0, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F2CCu, 0x35F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2D4u;
label_35f2d4:
    // 0x35f2d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f2d8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x35F2D8u;
    {
        const bool branch_taken_0x35f2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2D8u;
        // 0x35f2dc: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2d8) {
            ctx->pc = 0x35F368u;
            goto label_35f368;
        }
    }
    ctx->pc = 0x35F2E0u;
label_35f2e0:
    // 0x35f2e0: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35F2E0u;
    SET_GPR_U32(ctx, 31, 0x35F2E8u);
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35F2E0u, 0x35F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2E8u;
label_35f2e8:
    // 0x35f2e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35F2E8u;
    {
        const bool branch_taken_0x35f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2E8u;
        // 0x35f2ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2e8) {
            ctx->pc = 0x35F334u;
            goto label_35f334;
        }
    }
    ctx->pc = 0x35F2F0u;
label_35f2f0:
    // 0x35f2f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2f4: 0x24432c68  addiu       $v1, $v0, 0x2C68
    ctx->pc = 0x35f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x35f2f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35F2F8u;
    {
        const bool branch_taken_0x35f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2F8u;
        // 0x35f2fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2f8) {
            ctx->pc = 0x35F304u;
            goto label_35f304;
        }
    }
    ctx->pc = 0x35F300u;
label_35f300:
    // 0x35f300: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35f304:
    // 0x35f304: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x35f304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f308: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35F308u;
    {
        const bool branch_taken_0x35f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f308) {
            ctx->pc = 0x35F334u;
            goto label_35f334;
        }
    }
    ctx->pc = 0x35F310u;
    // 0x35f310: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f314: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35F314u;
    {
        const bool branch_taken_0x35f314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x35F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F314u;
        // 0x35f318: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f314) {
            ctx->pc = 0x35F300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f300;
        }
    }
    ctx->pc = 0x35F31Cu;
    // 0x35f31c: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x35F31Cu;
    {
        const bool branch_taken_0x35f31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F31Cu;
        // 0x35f320: 0x3090ffff  andi        $s0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f31c) {
            ctx->pc = 0x35F2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f2e0;
        }
    }
    ctx->pc = 0x35F324u;
    // 0x35f324: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35f328: 0xc0d7860  jal         func_35E180
    ctx->pc = 0x35F328u;
    SET_GPR_U32(ctx, 31, 0x35F330u);
    ctx->pc = 0x35F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F328u;
    // 0x35f32c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E180u, 0x35F328u, 0x35F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F330u;
label_35f330:
    // 0x35f330: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35f330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f334:
    // 0x35f334: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F334u;
    {
        const bool branch_taken_0x35f334 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F334u;
        // 0x35f338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f334) {
            ctx->pc = 0x35F358u;
            goto label_35f358;
        }
    }
    ctx->pc = 0x35F33Cu;
    // 0x35f33c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35f340: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35F340u;
    SET_GPR_U32(ctx, 31, 0x35F348u);
    ctx->pc = 0x35F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F340u;
    // 0x35f344: 0x24846438  addiu       $a0, $a0, 0x6438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35F340u, 0x35F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F348u;
label_35f348:
    // 0x35f348: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f34c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35F34Cu;
    {
        const bool branch_taken_0x35f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F34Cu;
        // 0x35f350: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f34c) {
            ctx->pc = 0x35F368u;
            goto label_35f368;
        }
    }
    ctx->pc = 0x35F354u;
    // 0x35f354: 0x0  nop
    ctx->pc = 0x35f354u;
    // NOP
label_35f358:
    // 0x35f358: 0xc0d7872  jal         func_35E1C8
    ctx->pc = 0x35F358u;
    SET_GPR_U32(ctx, 31, 0x35F360u);
    ctx->pc = 0x35F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F358u;
    // 0x35f35c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E1C8u, 0x35F358u, 0x35F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F360u;
label_35f360:
    // 0x35f360: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35F360u;
    {
        const bool branch_taken_0x35f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f360) {
            ctx->pc = 0x35F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F360u;
            // 0x35f364: 0xa6500000  sh          $s0, 0x0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F368u;
            goto label_35f368;
        }
    }
    ctx->pc = 0x35F368u;
label_35f368:
    // 0x35f368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f36c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f370: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f374: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f378: 0x3e00008  jr          $ra
    ctx->pc = 0x35F378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F378u;
        // 0x35f37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F380u;
}
