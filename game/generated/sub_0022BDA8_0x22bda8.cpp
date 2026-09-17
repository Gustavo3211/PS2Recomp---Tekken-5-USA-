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

// Function: sub_0022BDA8
// Address: 0x22bda8 - 0x22be38
void sub_0022BDA8_0x22bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BDA8_0x22bda8");
#endif

    switch (ctx->pc) {
        case 0x22bdbcu: goto label_22bdbc;
        case 0x22bde8u: goto label_22bde8;
        case 0x22be14u: goto label_22be14;
        default: break;
    }

    ctx->pc = 0x22bda8u;

    // 0x22bda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bdac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bdb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22bdb4: 0xc08ae1e  jal         func_22B878
    ctx->pc = 0x22BDB4u;
    SET_GPR_U32(ctx, 31, 0x22BDBCu);
    ctx->pc = 0x22BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDB4u;
    // 0x22bdb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B878u, 0x22BDB4u, 0x22BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDBCu;
label_22bdbc:
    // 0x22bdbc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22BDBCu;
    {
        const bool branch_taken_0x22bdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bdbc) {
            ctx->pc = 0x22BDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BDBCu;
            // 0x22bdc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BE28u;
            goto label_22be28;
        }
    }
    ctx->pc = 0x22BDC4u;
    // 0x22bdc4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x22bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x22bdc8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x22bdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x22bdcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22bdd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22bdd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x22bdd8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x22bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22bddc: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BDDCu;
    {
        const bool branch_taken_0x22bddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22bddc) {
            ctx->pc = 0x22BE04u;
            goto label_22be04;
        }
    }
    ctx->pc = 0x22BDE4u;
    // 0x22bde4: 0x9082005c  lbu         $v0, 0x5C($a0)
    ctx->pc = 0x22bde4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
label_22bde8:
    // 0x22bde8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x22bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x22bdec: 0xa082005c  sb          $v0, 0x5C($a0)
    ctx->pc = 0x22bdecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bdf0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x22bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x22bdf4: 0x0  nop
    ctx->pc = 0x22bdf4u;
    // NOP
    // 0x22bdf8: 0x0  nop
    ctx->pc = 0x22bdf8u;
    // NOP
    // 0x22bdfc: 0x5483fffa  bnel        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22BDFCu;
    {
        const bool branch_taken_0x22bdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22bdfc) {
            ctx->pc = 0x22BE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BDFCu;
            // 0x22be00: 0x9082005c  lbu         $v0, 0x5C($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22bde8;
        }
    }
    ctx->pc = 0x22BE04u;
label_22be04:
    // 0x22be04: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BE04u;
    {
        const bool branch_taken_0x22be04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be04) {
            ctx->pc = 0x22BE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BE04u;
            // 0x22be08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BE28u;
            goto label_22be28;
        }
    }
    ctx->pc = 0x22BE0Cu;
    // 0x22be0c: 0xc0889e4  jal         func_222790
    ctx->pc = 0x22BE0Cu;
    SET_GPR_U32(ctx, 31, 0x22BE14u);
    ctx->pc = 0x222790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222790u, 0x22BE0Cu, 0x22BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BE14u;
label_22be14:
    // 0x22be14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22be14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22be18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22be18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22be1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22be20: 0x808af5a  j           func_22BD68
    ctx->pc = 0x22BE20u;
    ctx->pc = 0x22BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE20u;
    // 0x22be24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BD68u;
    sub_0022BD68_0x22bd68(rdram, ctx, runtime); return;
    ctx->pc = 0x22BE28u;
label_22be28:
    // 0x22be28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE2Cu;
        // 0x22be30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE34u;
    // 0x22be34: 0x0  nop
    ctx->pc = 0x22be34u;
    // NOP
    ctx->pc = 0x22be38u;
}
