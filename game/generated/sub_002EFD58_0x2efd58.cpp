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

// Function: sub_002EFD58
// Address: 0x2efd58 - 0x2efe10
void sub_002EFD58_0x2efd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFD58_0x2efd58");
#endif

    switch (ctx->pc) {
        case 0x2efde4u: goto label_2efde4;
        case 0x2efdf4u: goto label_2efdf4;
        case 0x2efdfcu: goto label_2efdfc;
        default: break;
    }

    ctx->pc = 0x2efd58u;

    // 0x2efd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2efd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efd64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2efd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2efd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2efd6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2efd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2efd70: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFD70u;
    {
        const bool branch_taken_0x2efd70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD70u;
        // 0x2efd74: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd70) {
            ctx->pc = 0x2EFD7Cu;
            goto label_2efd7c;
        }
    }
    ctx->pc = 0x2EFD78u;
    // 0x2efd78: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2efd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2efd7c:
    // 0x2efd7c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2efd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2efd80: 0x260500b8  addiu       $a1, $s0, 0xB8
    ctx->pc = 0x2efd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x2efd84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2efd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2efd88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFD88u;
    {
        const bool branch_taken_0x2efd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD88u;
        // 0x2efd8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd88) {
            ctx->pc = 0x2EFDA0u;
            goto label_2efda0;
        }
    }
    ctx->pc = 0x2EFD90u;
    // 0x2efd90: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2efd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2efd94: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2efd98: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFD98u;
    {
        const bool branch_taken_0x2efd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2efd98) {
            ctx->pc = 0x2EFDACu;
            goto label_2efdac;
        }
    }
    ctx->pc = 0x2EFDA0u;
label_2efda0:
    // 0x2efda0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efda0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2efda4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2efda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efda8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efda8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efdac:
    // 0x2efdac: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EFDACu;
    {
        const bool branch_taken_0x2efdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efdac) {
            ctx->pc = 0x2EFDF4u;
            goto label_2efdf4;
        }
    }
    ctx->pc = 0x2EFDB4u;
    // 0x2efdb4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2efdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2efdb8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFDB8u;
    {
        const bool branch_taken_0x2efdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efdb8) {
            ctx->pc = 0x2EFDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFDB8u;
            // 0x2efdbc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFDD4u;
            goto label_2efdd4;
        }
    }
    ctx->pc = 0x2EFDC0u;
    // 0x2efdc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2efdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2efdc4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2efdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2efdc8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFDC8u;
    {
        const bool branch_taken_0x2efdc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDC8u;
        // 0x2efdcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efdc8) {
            ctx->pc = 0x2EFDDCu;
            goto label_2efddc;
        }
    }
    ctx->pc = 0x2EFDD0u;
    // 0x2efdd0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2efdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2efdd4:
    // 0x2efdd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2efdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efdd8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2efdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2efddc:
    // 0x2efddc: 0xc0bc0ac  jal         func_2F02B0
    ctx->pc = 0x2EFDDCu;
    SET_GPR_U32(ctx, 31, 0x2EFDE4u);
    ctx->pc = 0x2EFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDDCu;
    // 0x2efde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F02B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F02B0u, 0x2EFDDCu, 0x2EFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDE4u;
label_2efde4:
    // 0x2efde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2efde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efde8: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2efde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2efdec: 0xc0bb7aa  jal         func_2EDEA8
    ctx->pc = 0x2EFDECu;
    SET_GPR_U32(ctx, 31, 0x2EFDF4u);
    ctx->pc = 0x2EFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDECu;
    // 0x2efdf0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDEA8u, 0x2EFDECu, 0x2EFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDF4u;
label_2efdf4:
    // 0x2efdf4: 0xc0bbe28  jal         func_2EF8A0
    ctx->pc = 0x2EFDF4u;
    SET_GPR_U32(ctx, 31, 0x2EFDFCu);
    ctx->pc = 0x2EFDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDF4u;
    // 0x2efdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF8A0u, 0x2EFDF4u, 0x2EFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDFCu;
label_2efdfc:
    // 0x2efdfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efe00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efe00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efe04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efe04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efe08: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE08u;
        // 0x2efe0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFE10u;
}
