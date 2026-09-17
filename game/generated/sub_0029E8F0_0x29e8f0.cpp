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

// Function: sub_0029E8F0
// Address: 0x29e8f0 - 0x29e9b8
void sub_0029E8F0_0x29e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E8F0_0x29e8f0");
#endif

    switch (ctx->pc) {
        case 0x29e958u: goto label_29e958;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e974u: goto label_29e974;
        case 0x29e988u: goto label_29e988;
        case 0x29e998u: goto label_29e998;
        case 0x29e9a0u: goto label_29e9a0;
        default: break;
    }

    ctx->pc = 0x29e8f0u;

    // 0x29e8f0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x29e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x29e8f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29e8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29e8f8: 0x8c6383c0  lw          $v1, -0x7C40($v1)
    ctx->pc = 0x29e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x29e8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e904: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x29e904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x29e908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29e90c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29E90Cu;
    {
        const bool branch_taken_0x29e90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E90Cu;
        // 0x29e910: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e90c) {
            ctx->pc = 0x29E9A0u;
            goto label_29e9a0;
        }
    }
    ctx->pc = 0x29E914u;
    // 0x29e914: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29e914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29e918: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x29e918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x29e91c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e920: 0x8c63c6f0  lw          $v1, -0x3910($v1)
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952688)));
    // 0x29e924: 0x600008  jr          $v1
    ctx->pc = 0x29E924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29E930u: goto label_29e930;
            case 0x29E938u: goto label_29e938;
            case 0x29E940u: goto label_29e940;
            case 0x29E9A0u: goto label_29e9a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E924u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E92Cu;
    // 0x29e92c: 0x0  nop
    ctx->pc = 0x29e92cu;
    // NOP
label_29e930:
    // 0x29e930: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29E930u;
    {
        const bool branch_taken_0x29e930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E930u;
        // 0x29e934: 0x24110038  addiu       $s1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e930) {
            ctx->pc = 0x29E944u;
            goto label_29e944;
        }
    }
    ctx->pc = 0x29E938u;
label_29e938:
    // 0x29e938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29E938u;
    {
        const bool branch_taken_0x29e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E938u;
        // 0x29e93c: 0x24110039  addiu       $s1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e938) {
            ctx->pc = 0x29E944u;
            goto label_29e944;
        }
    }
    ctx->pc = 0x29E940u;
label_29e940:
    // 0x29e940: 0x24110037  addiu       $s1, $zero, 0x37
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_29e944:
    // 0x29e944: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x29e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x29e948: 0x52220016  beql        $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29E948u;
    {
        const bool branch_taken_0x29e948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x29e948) {
            ctx->pc = 0x29E94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E948u;
            // 0x29e94c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E9A4u;
            goto label_29e9a4;
        }
    }
    ctx->pc = 0x29E950u;
    // 0x29e950: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x29E950u;
    SET_GPR_U32(ctx, 31, 0x29E958u);
    ctx->pc = 0x29E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E950u;
    // 0x29e954: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x29E950u, 0x29E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E958u;
label_29e958:
    // 0x29e958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29e958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e960: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29e960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e964: 0xc089636  jal         func_2258D8
    ctx->pc = 0x29E964u;
    SET_GPR_U32(ctx, 31, 0x29E96Cu);
    ctx->pc = 0x29E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E964u;
    // 0x29e968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x29E964u, 0x29E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E96Cu;
label_29e96c:
    // 0x29e96c: 0xc0a7a36  jal         func_29E8D8
    ctx->pc = 0x29E96Cu;
    SET_GPR_U32(ctx, 31, 0x29E974u);
    ctx->pc = 0x29E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8D8u, 0x29E96Cu, 0x29E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E974u;
label_29e974:
    // 0x29e974: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x29E974u;
    {
        const bool branch_taken_0x29e974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e974) {
            ctx->pc = 0x29E978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E974u;
            // 0x29e978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E9A4u;
            goto label_29e9a4;
        }
    }
    ctx->pc = 0x29E97Cu;
    // 0x29e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e980: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x29E980u;
    SET_GPR_U32(ctx, 31, 0x29E988u);
    ctx->pc = 0x29E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E980u;
    // 0x29e984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x29E980u, 0x29E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E988u;
label_29e988:
    // 0x29e988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29e988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29e98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e990: 0xc0a7a7a  jal         func_29E9E8
    ctx->pc = 0x29E990u;
    SET_GPR_U32(ctx, 31, 0x29E998u);
    ctx->pc = 0x29E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E990u;
    // 0x29e994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E8u, 0x29E990u, 0x29E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E998u;
label_29e998:
    // 0x29e998: 0xc0a7a34  jal         func_29E8D0
    ctx->pc = 0x29E998u;
    SET_GPR_U32(ctx, 31, 0x29E9A0u);
    ctx->pc = 0x29E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E998u;
    // 0x29e99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E8D0u, 0x29E998u, 0x29E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9A0u;
label_29e9a0:
    // 0x29e9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e9a4:
    // 0x29e9a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29e9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x29E9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9ACu;
        // 0x29e9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E9B4u;
    // 0x29e9b4: 0x0  nop
    ctx->pc = 0x29e9b4u;
    // NOP
    ctx->pc = 0x29e9b8u;
}
