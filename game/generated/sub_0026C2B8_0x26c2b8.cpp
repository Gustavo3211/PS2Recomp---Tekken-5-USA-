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

// Function: sub_0026C2B8
// Address: 0x26c2b8 - 0x26c380
void sub_0026C2B8_0x26c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C2B8_0x26c2b8");
#endif

    switch (ctx->pc) {
        case 0x26c2fcu: goto label_26c2fc;
        case 0x26c34cu: goto label_26c34c;
        default: break;
    }

    ctx->pc = 0x26c2b8u;

    // 0x26c2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c2c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c2cc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x26c2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c2d0: 0x94c20044  lhu         $v0, 0x44($a2)
    ctx->pc = 0x26c2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x26c2d4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x26C2D4u;
    {
        const bool branch_taken_0x26c2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2D4u;
        // 0x26c2d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2d4) {
            ctx->pc = 0x26C364u;
            goto label_26c364;
        }
    }
    ctx->pc = 0x26C2DCu;
    // 0x26c2dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x26c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26c2e0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c2e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c2e8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x26C2E8u;
    {
        const bool branch_taken_0x26c2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c2e8) {
            ctx->pc = 0x26C2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C2E8u;
            // 0x26c2ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C368u;
            goto label_26c368;
        }
    }
    ctx->pc = 0x26C2F0u;
    // 0x26c2f0: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26c2f4: 0xc09faac  jal         func_27EAB0
    ctx->pc = 0x26C2F4u;
    SET_GPR_U32(ctx, 31, 0x26C2FCu);
    ctx->pc = 0x26C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2F4u;
    // 0x26c2f8: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EAB0u, 0x26C2F4u, 0x26C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2FCu;
label_26c2fc:
    // 0x26c2fc: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c300: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x26C300u;
    {
        const bool branch_taken_0x26c300 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C300u;
        // 0x26c304: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c300) {
            ctx->pc = 0x26C364u;
            goto label_26c364;
        }
    }
    ctx->pc = 0x26C308u;
    // 0x26c308: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c30c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c310: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c314: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26C314u;
    {
        const bool branch_taken_0x26c314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C314u;
        // 0x26c318: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c314) {
            ctx->pc = 0x26C368u;
            goto label_26c368;
        }
    }
    ctx->pc = 0x26C31Cu;
    // 0x26c31c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x26c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c320: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26c320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26c324: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c328: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C328u;
    {
        const bool branch_taken_0x26c328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C328u;
        // 0x26c32c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c328) {
            ctx->pc = 0x26C368u;
            goto label_26c368;
        }
    }
    ctx->pc = 0x26C330u;
    // 0x26c330: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x26c330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26c334: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26C334u;
    {
        const bool branch_taken_0x26c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C334u;
        // 0x26c338: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c334) {
            ctx->pc = 0x26C368u;
            goto label_26c368;
        }
    }
    ctx->pc = 0x26C33Cu;
    // 0x26c33c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c344: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C344u;
    SET_GPR_U32(ctx, 31, 0x26C34Cu);
    ctx->pc = 0x26C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C344u;
    // 0x26c348: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C344u, 0x26C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C34Cu;
label_26c34c:
    // 0x26c34c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C34Cu;
    {
        const bool branch_taken_0x26c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C34Cu;
        // 0x26c350: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c34c) {
            ctx->pc = 0x26C368u;
            goto label_26c368;
        }
    }
    ctx->pc = 0x26C354u;
    // 0x26c354: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26c354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26c358: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x26c358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c35c: 0x30423fe0  andi        $v0, $v0, 0x3FE0
    ctx->pc = 0x26c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16352);
    // 0x26c360: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x26c360u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c364:
    // 0x26c364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26c364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c368:
    // 0x26c368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c36c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c374: 0x3e00008  jr          $ra
    ctx->pc = 0x26C374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C374u;
        // 0x26c378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C37Cu;
    // 0x26c37c: 0x0  nop
    ctx->pc = 0x26c37cu;
    // NOP
    ctx->pc = 0x26c380u;
}
