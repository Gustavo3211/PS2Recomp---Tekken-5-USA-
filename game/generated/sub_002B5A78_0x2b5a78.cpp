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

// Function: sub_002B5A78
// Address: 0x2b5a78 - 0x2b5b10
void sub_002B5A78_0x2b5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5A78_0x2b5a78");
#endif

    switch (ctx->pc) {
        case 0x2b5a78u: goto label_2b5a78;
        case 0x2b5a7cu: goto label_2b5a7c;
        case 0x2b5a80u: goto label_2b5a80;
        case 0x2b5a84u: goto label_2b5a84;
        case 0x2b5a88u: goto label_2b5a88;
        case 0x2b5a8cu: goto label_2b5a8c;
        case 0x2b5a90u: goto label_2b5a90;
        case 0x2b5a94u: goto label_2b5a94;
        case 0x2b5a98u: goto label_2b5a98;
        case 0x2b5a9cu: goto label_2b5a9c;
        case 0x2b5aa0u: goto label_2b5aa0;
        case 0x2b5aa4u: goto label_2b5aa4;
        case 0x2b5aa8u: goto label_2b5aa8;
        case 0x2b5aacu: goto label_2b5aac;
        case 0x2b5ab0u: goto label_2b5ab0;
        case 0x2b5ab4u: goto label_2b5ab4;
        case 0x2b5ab8u: goto label_2b5ab8;
        case 0x2b5abcu: goto label_2b5abc;
        case 0x2b5ac0u: goto label_2b5ac0;
        case 0x2b5ac4u: goto label_2b5ac4;
        case 0x2b5ac8u: goto label_2b5ac8;
        case 0x2b5accu: goto label_2b5acc;
        case 0x2b5ad0u: goto label_2b5ad0;
        case 0x2b5ad4u: goto label_2b5ad4;
        case 0x2b5ad8u: goto label_2b5ad8;
        case 0x2b5adcu: goto label_2b5adc;
        case 0x2b5ae0u: goto label_2b5ae0;
        case 0x2b5ae4u: goto label_2b5ae4;
        case 0x2b5ae8u: goto label_2b5ae8;
        case 0x2b5aecu: goto label_2b5aec;
        case 0x2b5af0u: goto label_2b5af0;
        case 0x2b5af4u: goto label_2b5af4;
        case 0x2b5af8u: goto label_2b5af8;
        case 0x2b5afcu: goto label_2b5afc;
        case 0x2b5b00u: goto label_2b5b00;
        case 0x2b5b04u: goto label_2b5b04;
        case 0x2b5b08u: goto label_2b5b08;
        case 0x2b5b0cu: goto label_2b5b0c;
        default: break;
    }

    ctx->pc = 0x2b5a78u;

label_2b5a78:
    // 0x2b5a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b5a7c:
    // 0x2b5a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2b5a80:
    // 0x2b5a80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b5a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a84:
    // 0x2b5a84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2b5a88:
    // 0x2b5a88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b5a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a8c:
    // 0x2b5a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b5a90:
    // 0x2b5a90: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b5a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a94:
    // 0x2b5a94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b5a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2b5a98:
    // 0x2b5a98: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2b5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2b5a9c:
    // 0x2b5a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b5a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5aa0:
    // 0x2b5aa0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2b5aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2b5aa4:
    // 0x2b5aa4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2b5aa8:
    if (ctx->pc == 0x2B5AA8u) {
        ctx->pc = 0x2B5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AA4u;
        // 0x2b5aa8: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5AACu;
        goto label_2b5aac;
    }
    ctx->pc = 0x2B5AA4u;
    {
        const bool branch_taken_0x2b5aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AA4u;
        // 0x2b5aa8: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5aa4) {
            ctx->pc = 0x2B5AE0u;
            goto label_2b5ae0;
        }
    }
    ctx->pc = 0x2B5AACu;
label_2b5aac:
    // 0x2b5aac: 0xc0aa7a8  jal         func_2A9EA0
label_2b5ab0:
    if (ctx->pc == 0x2B5AB0u) {
        ctx->pc = 0x2B5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AACu;
        // 0x2b5ab0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5AB4u;
        goto label_2b5ab4;
    }
    ctx->pc = 0x2B5AACu;
    SET_GPR_U32(ctx, 31, 0x2B5AB4u);
    ctx->pc = 0x2B5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AACu;
    // 0x2b5ab0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B5AACu, 0x2B5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AB4u;
label_2b5ab4:
    // 0x2b5ab4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b5ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b5ab8:
    // 0x2b5ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b5abc:
    // 0x2b5abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b5abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5ac0:
    // 0x2b5ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5ac4:
    // 0x2b5ac4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x2b5ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b5ac8:
    // 0x2b5ac8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b5ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5acc:
    // 0x2b5acc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b5ad0:
    // 0x2b5ad0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b5ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5ad4:
    // 0x2b5ad4: 0x80ad7f6  j           func_2B5FD8
label_2b5ad8:
    if (ctx->pc == 0x2B5AD8u) {
        ctx->pc = 0x2B5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AD4u;
        // 0x2b5ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5ADCu;
        goto label_2b5adc;
    }
    ctx->pc = 0x2B5AD4u;
    ctx->pc = 0x2B5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AD4u;
    // 0x2b5ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    sub_002B5FD8_0x2b5fd8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5ADCu;
label_2b5adc:
    // 0x2b5adc: 0x0  nop
    ctx->pc = 0x2b5adcu;
    // NOP
label_2b5ae0:
    // 0x2b5ae0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2b5ae4:
    // 0x2b5ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b5ae8:
    // 0x2b5ae8: 0x8c42cef0  lw          $v0, -0x3110($v0)
    ctx->pc = 0x2b5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954736)));
label_2b5aec:
    // 0x2b5aec: 0x40f809  jalr        $v0
label_2b5af0:
    if (ctx->pc == 0x2B5AF0u) {
        ctx->pc = 0x2B5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AECu;
        // 0x2b5af0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5AF4u;
        goto label_2b5af4;
    }
    ctx->pc = 0x2B5AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5AF4u);
        ctx->pc = 0x2B5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AECu;
        // 0x2b5af0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5AECu, 0x2B5AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5AF4u;
label_2b5af4:
    // 0x2b5af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b5af8:
    // 0x2b5af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b5afc:
    // 0x2b5afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b5afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5b00:
    // 0x2b5b00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b5b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b5b04:
    // 0x2b5b04: 0x3e00008  jr          $ra
label_2b5b08:
    if (ctx->pc == 0x2B5B08u) {
        ctx->pc = 0x2B5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B04u;
        // 0x2b5b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5B0Cu;
        goto label_2b5b0c;
    }
    ctx->pc = 0x2B5B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B04u;
        // 0x2b5b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B0Cu;
label_2b5b0c:
    // 0x2b5b0c: 0x0  nop
    ctx->pc = 0x2b5b0cu;
    // NOP
    ctx->pc = 0x2b5b10u;
}
