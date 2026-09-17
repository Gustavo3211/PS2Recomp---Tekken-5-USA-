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

// Function: sub_0023CF68
// Address: 0x23cf68 - 0x23cff8
void sub_0023CF68_0x23cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CF68_0x23cf68");
#endif

    switch (ctx->pc) {
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfbcu: goto label_23cfbc;
        case 0x23cfd0u: goto label_23cfd0;
        default: break;
    }

    ctx->pc = 0x23cf68u;

    // 0x23cf68: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23cf6c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cf6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cf70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23cf74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cf78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23cf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cf84: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x23cf84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x23cf88: 0x2610f398  addiu       $s0, $s0, -0xC68
    ctx->pc = 0x23cf88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964120));
    // 0x23cf8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23cf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23cf90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23cf94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cf98: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x23CF98u;
    {
        const bool branch_taken_0x23cf98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF98u;
        // 0x23cf9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf98) {
            ctx->pc = 0x23CFD8u;
            goto label_23cfd8;
        }
    }
    ctx->pc = 0x23CFA0u;
    // 0x23cfa0: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x23CFA0u;
    SET_GPR_U32(ctx, 31, 0x23CFA8u);
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x23CFA0u, 0x23CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFA8u;
label_23cfa8:
    // 0x23cfa8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cfac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x23cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23cfb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23cfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfb4: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x23CFB4u;
    SET_GPR_U32(ctx, 31, 0x23CFBCu);
    ctx->pc = 0x23CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFB4u;
    // 0x23cfb8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x23CFB4u, 0x23CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFBCu;
label_23cfbc:
    // 0x23cfbc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23cfc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23cfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfc4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23cfc8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x23CFC8u;
    SET_GPR_U32(ctx, 31, 0x23CFD0u);
    ctx->pc = 0x23CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFC8u;
    // 0x23cfcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x23CFC8u, 0x23CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFD0u;
label_23cfd0:
    // 0x23cfd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23CFD0u;
    {
        const bool branch_taken_0x23cfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFD0u;
        // 0x23cfd4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfd0) {
            ctx->pc = 0x23CFE4u;
            goto label_23cfe4;
        }
    }
    ctx->pc = 0x23CFD8u;
label_23cfd8:
    // 0x23cfd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x23cfdc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23cfe0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_23cfe4:
    // 0x23cfe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cfe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cfec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23cfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cff0: 0x3e00008  jr          $ra
    ctx->pc = 0x23CFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFF0u;
        // 0x23cff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CFF8u;
}
