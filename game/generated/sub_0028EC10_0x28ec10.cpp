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

// Function: sub_0028EC10
// Address: 0x28ec10 - 0x28ecb0
void sub_0028EC10_0x28ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EC10_0x28ec10");
#endif

    switch (ctx->pc) {
        case 0x28ec2cu: goto label_28ec2c;
        case 0x28ec98u: goto label_28ec98;
        default: break;
    }

    ctx->pc = 0x28ec10u;

    // 0x28ec10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ec14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ec18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ec18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ec20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28ec24: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EC24u;
    SET_GPR_U32(ctx, 31, 0x28EC2Cu);
    ctx->pc = 0x28EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC24u;
    // 0x28ec28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EC24u, 0x28EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC2Cu;
label_28ec2c:
    // 0x28ec2c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28EC2Cu;
    {
        const bool branch_taken_0x28ec2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC2Cu;
        // 0x28ec30: 0x24450160  addiu       $a1, $v0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec2c) {
            ctx->pc = 0x28EC98u;
            goto label_28ec98;
        }
    }
    ctx->pc = 0x28EC34u;
    // 0x28ec34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ec38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EC38u;
    {
        const bool branch_taken_0x28ec38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC38u;
        // 0x28ec3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec38) {
            ctx->pc = 0x28EC50u;
            goto label_28ec50;
        }
    }
    ctx->pc = 0x28EC40u;
    // 0x28ec40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28ec44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28ec48: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EC48u;
    {
        const bool branch_taken_0x28ec48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ec48) {
            ctx->pc = 0x28EC5Cu;
            goto label_28ec5c;
        }
    }
    ctx->pc = 0x28EC50u;
label_28ec50:
    // 0x28ec50: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28ec54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec58: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_28ec5c:
    // 0x28ec5c: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x28EC5Cu;
    {
        const bool branch_taken_0x28ec5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ec5c) {
            ctx->pc = 0x28EC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EC5Cu;
            // 0x28ec60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EC9Cu;
            goto label_28ec9c;
        }
    }
    ctx->pc = 0x28EC64u;
    // 0x28ec64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ec68: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28EC68u;
    {
        const bool branch_taken_0x28ec68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ec68) {
            ctx->pc = 0x28EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EC68u;
            // 0x28ec6c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EC84u;
            goto label_28ec84;
        }
    }
    ctx->pc = 0x28EC70u;
    // 0x28ec70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28ec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28ec74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28ec78: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EC78u;
    {
        const bool branch_taken_0x28ec78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ec78) {
            ctx->pc = 0x28EC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EC78u;
            // 0x28ec7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EC90u;
            goto label_28ec90;
        }
    }
    ctx->pc = 0x28EC80u;
    // 0x28ec80: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_28ec84:
    // 0x28ec84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ec84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec88: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28ec8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28ec8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ec90:
    // 0x28ec90: 0xc0a9280  jal         func_2A4A00
    ctx->pc = 0x28EC90u;
    SET_GPR_U32(ctx, 31, 0x28EC98u);
    ctx->pc = 0x28EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC90u;
    // 0x28ec94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A00u, 0x28EC90u, 0x28EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC98u;
label_28ec98:
    // 0x28ec98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ec98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ec9c:
    // 0x28ec9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ec9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28eca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28eca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x28ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECA4u;
        // 0x28eca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ECACu;
    // 0x28ecac: 0x0  nop
    ctx->pc = 0x28ecacu;
    // NOP
    ctx->pc = 0x28ecb0u;
}
