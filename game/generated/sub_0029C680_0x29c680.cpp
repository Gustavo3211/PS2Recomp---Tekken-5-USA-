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

// Function: sub_0029C680
// Address: 0x29c680 - 0x29c780
void sub_0029C680_0x29c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C680_0x29c680");
#endif

    switch (ctx->pc) {
        case 0x29c6b0u: goto label_29c6b0;
        case 0x29c6ccu: goto label_29c6cc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c700u: goto label_29c700;
        case 0x29c714u: goto label_29c714;
        case 0x29c728u: goto label_29c728;
        case 0x29c738u: goto label_29c738;
        case 0x29c754u: goto label_29c754;
        case 0x29c75cu: goto label_29c75c;
        default: break;
    }

    ctx->pc = 0x29c680u;

    // 0x29c680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29c684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29c688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c68c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29c690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c698: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29c69c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29c6a0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x29c6a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29c6a4: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x29c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x29c6a8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x29c6a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29c6ac: 0x8c5000d0  lw          $s0, 0xD0($v0)
    ctx->pc = 0x29c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
label_29c6b0:
    // 0x29c6b0: 0x1a00001f  blez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29C6B0u;
    {
        const bool branch_taken_0x29c6b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6B0u;
        // 0x29c6b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6b0) {
            ctx->pc = 0x29C730u;
            goto label_29c730;
        }
    }
    ctx->pc = 0x29C6B8u;
    // 0x29c6b8: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x29c6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29c6bc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29C6BCu;
    {
        const bool branch_taken_0x29c6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c6bc) {
            ctx->pc = 0x29C730u;
            goto label_29c730;
        }
    }
    ctx->pc = 0x29C6C4u;
    // 0x29c6c4: 0xc0a74ce  jal         func_29D338
    ctx->pc = 0x29C6C4u;
    SET_GPR_U32(ctx, 31, 0x29C6CCu);
    ctx->pc = 0x29C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6C4u;
    // 0x29c6c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D338u, 0x29C6C4u, 0x29C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6CCu;
label_29c6cc:
    // 0x29c6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6d8: 0xc0a721c  jal         func_29C870
    ctx->pc = 0x29C6D8u;
    SET_GPR_U32(ctx, 31, 0x29C6E0u);
    ctx->pc = 0x29C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6D8u;
    // 0x29c6dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C870u, 0x29C6D8u, 0x29C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6E0u;
label_29c6e0:
    // 0x29c6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6e8: 0xc0a72b6  jal         func_29CAD8
    ctx->pc = 0x29C6E8u;
    SET_GPR_U32(ctx, 31, 0x29C6F0u);
    ctx->pc = 0x29C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6E8u;
    // 0x29c6ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CAD8u, 0x29C6E8u, 0x29C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6F0u;
label_29c6f0:
    // 0x29c6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6f8: 0xc0a7386  jal         func_29CE18
    ctx->pc = 0x29C6F8u;
    SET_GPR_U32(ctx, 31, 0x29C700u);
    ctx->pc = 0x29C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6F8u;
    // 0x29c6fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE18u, 0x29C6F8u, 0x29C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C700u;
label_29c700:
    // 0x29c700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c704: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c708: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c70c: 0xc0a7326  jal         func_29CC98
    ctx->pc = 0x29C70Cu;
    SET_GPR_U32(ctx, 31, 0x29C714u);
    ctx->pc = 0x29C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C70Cu;
    // 0x29c710: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC98u, 0x29C70Cu, 0x29C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C714u;
label_29c714:
    // 0x29c714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c71c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c720: 0xc0a73cc  jal         func_29CF30
    ctx->pc = 0x29C720u;
    SET_GPR_U32(ctx, 31, 0x29C728u);
    ctx->pc = 0x29C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C720u;
    // 0x29c724: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CF30u, 0x29C720u, 0x29C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C728u;
label_29c728:
    // 0x29c728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C728u;
    {
        const bool branch_taken_0x29c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C728u;
        // 0x29c72c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c728) {
            ctx->pc = 0x29C73Cu;
            goto label_29c73c;
        }
    }
    ctx->pc = 0x29C730u;
label_29c730:
    // 0x29c730: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29C730u;
    SET_GPR_U32(ctx, 31, 0x29C738u);
    ctx->pc = 0x29C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C730u;
    // 0x29c734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29C730u, 0x29C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C738u;
label_29c738:
    // 0x29c738: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29c738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29c73c:
    // 0x29c73c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x29c73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29c740: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x29C740u;
    {
        const bool branch_taken_0x29c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C740u;
        // 0x29c744: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c740) {
            ctx->pc = 0x29C6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c6b0;
        }
    }
    ctx->pc = 0x29C748u;
    // 0x29c748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c74c: 0xc0a7436  jal         func_29D0D8
    ctx->pc = 0x29C74Cu;
    SET_GPR_U32(ctx, 31, 0x29C754u);
    ctx->pc = 0x29C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C74Cu;
    // 0x29c750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0D8u, 0x29C74Cu, 0x29C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C754u;
label_29c754:
    // 0x29c754: 0xc0a74b6  jal         func_29D2D8
    ctx->pc = 0x29C754u;
    SET_GPR_U32(ctx, 31, 0x29C75Cu);
    ctx->pc = 0x29C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C754u;
    // 0x29c758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2D8u, 0x29C754u, 0x29C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C75Cu;
label_29c75c:
    // 0x29c75c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c768: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29c768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29c76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29c76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c770: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x29c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c774: 0x3e00008  jr          $ra
    ctx->pc = 0x29C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C774u;
        // 0x29c778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C77Cu;
    // 0x29c77c: 0x0  nop
    ctx->pc = 0x29c77cu;
    // NOP
    ctx->pc = 0x29c780u;
}
