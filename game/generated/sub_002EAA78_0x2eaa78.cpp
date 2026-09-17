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

// Function: sub_002EAA78
// Address: 0x2eaa78 - 0x2eab18
void sub_002EAA78_0x2eaa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAA78_0x2eaa78");
#endif

    switch (ctx->pc) {
        case 0x2eaa98u: goto label_2eaa98;
        case 0x2eaab0u: goto label_2eaab0;
        case 0x2eaac4u: goto label_2eaac4;
        case 0x2eab00u: goto label_2eab00;
        default: break;
    }

    ctx->pc = 0x2eaa78u;

    // 0x2eaa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eaa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eaa7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2eaa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2eaa80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eaa80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eaa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2eaa88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eaa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eaa8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eaa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eaa90: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EAA90u;
    SET_GPR_U32(ctx, 31, 0x2EAA98u);
    ctx->pc = 0x2EAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAA90u;
    // 0x2eaa94: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EAA90u, 0x2EAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAA98u;
label_2eaa98:
    // 0x2eaa98: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eaa9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eaa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaaa0: 0x2463fa50  addiu       $v1, $v1, -0x5B0
    ctx->pc = 0x2eaaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965840));
    // 0x2eaaa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eaaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaaa8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EAAA8u;
    SET_GPR_U32(ctx, 31, 0x2EAAB0u);
    ctx->pc = 0x2EAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAA8u;
    // 0x2eaaac: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EAAA8u, 0x2EAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAB0u;
label_2eaab0:
    // 0x2eaab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eaab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaab4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2eaab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eaab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaabc: 0xc0ba6f2  jal         func_2E9BC8
    ctx->pc = 0x2EAABCu;
    SET_GPR_U32(ctx, 31, 0x2EAAC4u);
    ctx->pc = 0x2EAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAABCu;
    // 0x2eaac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9BC8u, 0x2EAABCu, 0x2EAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAAC4u;
label_2eaac4:
    // 0x2eaac4: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2eaac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2eaac8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2eaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2eaacc: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2eaaccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2eaad0: 0x246306c8  addiu       $v1, $v1, 0x6C8
    ctx->pc = 0x2eaad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1736));
    // 0x2eaad4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2eaad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2eaad8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2eaad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2eaadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EAADCu;
    {
        const bool branch_taken_0x2eaadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAADCu;
        // 0x2eaae0: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaadc) {
            ctx->pc = 0x2EAB00u;
            goto label_2eab00;
        }
    }
    ctx->pc = 0x2EAAE4u;
    // 0x2eaae4: 0x0  nop
    ctx->pc = 0x2eaae4u;
    // NOP
    // 0x2eaae8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2eaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2eaaec: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2eaaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2eaaf0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2eaaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2eaaf4: 0x248405ac  addiu       $a0, $a0, 0x5AC
    ctx->pc = 0x2eaaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1452));
    // 0x2eaaf8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EAAF8u;
    SET_GPR_U32(ctx, 31, 0x2EAB00u);
    ctx->pc = 0x2EAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAAF8u;
    // 0x2eaafc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EAAF8u, 0x2EAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB00u;
label_2eab00:
    // 0x2eab00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eab00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eab04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2eab04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eab08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2eab08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eab0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2eab0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eab10: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB10u;
        // 0x2eab14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAB18u;
}
