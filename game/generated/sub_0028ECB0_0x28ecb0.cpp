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

// Function: sub_0028ECB0
// Address: 0x28ecb0 - 0x28ed60
void sub_0028ECB0_0x28ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ECB0_0x28ecb0");
#endif

    switch (ctx->pc) {
        case 0x28ecc0u: goto label_28ecc0;
        default: break;
    }

    ctx->pc = 0x28ecb0u;

    // 0x28ecb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ecb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ecb8: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28ECB8u;
    SET_GPR_U32(ctx, 31, 0x28ECC0u);
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28ECB8u, 0x28ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECC0u;
label_28ecc0:
    // 0x28ecc0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x28ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x28ecc4: 0x8c8383c0  lw          $v1, -0x7C40($a0)
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x28ecc8: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x28ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x28eccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ECCCu;
    {
        const bool branch_taken_0x28eccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECCCu;
        // 0x28ecd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eccc) {
            ctx->pc = 0x28ECE0u;
            goto label_28ece0;
        }
    }
    ctx->pc = 0x28ECD4u;
    // 0x28ecd4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28ECD4u;
    {
        const bool branch_taken_0x28ecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECD4u;
        // 0x28ecd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecd4) {
            ctx->pc = 0x28ED50u;
            goto label_28ed50;
        }
    }
    ctx->pc = 0x28ECDCu;
    // 0x28ecdc: 0x0  nop
    ctx->pc = 0x28ecdcu;
    // NOP
label_28ece0:
    // 0x28ece0: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28ECE0u;
    {
        const bool branch_taken_0x28ece0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECE0u;
        // 0x28ece4: 0x24a50170  addiu       $a1, $a1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ece0) {
            ctx->pc = 0x28ED50u;
            goto label_28ed50;
        }
    }
    ctx->pc = 0x28ECE8u;
    // 0x28ece8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ecec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ECECu;
    {
        const bool branch_taken_0x28ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECECu;
        // 0x28ecf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecec) {
            ctx->pc = 0x28ED04u;
            goto label_28ed04;
        }
    }
    ctx->pc = 0x28ECF4u;
    // 0x28ecf4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28ecf8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28ecfc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ECFCu;
    {
        const bool branch_taken_0x28ecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ecfc) {
            ctx->pc = 0x28ED10u;
            goto label_28ed10;
        }
    }
    ctx->pc = 0x28ED04u;
label_28ed04:
    // 0x28ed04: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28ed08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ed08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ed0c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_28ed10:
    // 0x28ed10: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x28ED10u;
    {
        const bool branch_taken_0x28ed10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED10u;
        // 0x28ed14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed10) {
            ctx->pc = 0x28ED50u;
            goto label_28ed50;
        }
    }
    ctx->pc = 0x28ED18u;
    // 0x28ed18: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28ed1c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28ED1Cu;
    {
        const bool branch_taken_0x28ed1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed1c) {
            ctx->pc = 0x28ED20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED1Cu;
            // 0x28ed20: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ED38u;
            goto label_28ed38;
        }
    }
    ctx->pc = 0x28ED24u;
    // 0x28ed24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28ed28: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28ed2c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ED2Cu;
    {
        const bool branch_taken_0x28ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED2Cu;
        // 0x28ed30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed2c) {
            ctx->pc = 0x28ED44u;
            goto label_28ed44;
        }
    }
    ctx->pc = 0x28ED34u;
    // 0x28ed34: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_28ed38:
    // 0x28ed38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28ed38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ed3c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x28ed40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ed40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28ed44:
    // 0x28ed44: 0x80a8f30  j           func_2A3CC0
    ctx->pc = 0x28ED44u;
    ctx->pc = 0x28ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ED44u;
    // 0x28ed48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3CC0u, 0x28ED44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28ED4Cu;
    // 0x28ed4c: 0x0  nop
    ctx->pc = 0x28ed4cu;
    // NOP
label_28ed50:
    // 0x28ed50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ed50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ed54: 0x3e00008  jr          $ra
    ctx->pc = 0x28ED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED54u;
        // 0x28ed58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED5Cu;
    // 0x28ed5c: 0x0  nop
    ctx->pc = 0x28ed5cu;
    // NOP
    ctx->pc = 0x28ed60u;
}
