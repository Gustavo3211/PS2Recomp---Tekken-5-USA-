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

// Function: sub_002CBC18
// Address: 0x2cbc18 - 0x2cbcd0
void sub_002CBC18_0x2cbc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBC18_0x2cbc18");
#endif

    switch (ctx->pc) {
        case 0x2cbc64u: goto label_2cbc64;
        case 0x2cbc70u: goto label_2cbc70;
        case 0x2cbc7cu: goto label_2cbc7c;
        case 0x2cbc88u: goto label_2cbc88;
        case 0x2cbc98u: goto label_2cbc98;
        default: break;
    }

    ctx->pc = 0x2cbc18u;

    // 0x2cbc18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cbc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cbc1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cbc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cbc20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cbc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cbc28: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x2cbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2cbc2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cbc30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cbc34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBC34u;
    {
        const bool branch_taken_0x2cbc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC34u;
        // 0x2cbc38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc34) {
            ctx->pc = 0x2CBC4Cu;
            goto label_2cbc4c;
        }
    }
    ctx->pc = 0x2CBC3Cu;
    // 0x2cbc3c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cbc40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cbc44: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBC44u;
    {
        const bool branch_taken_0x2cbc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC44u;
        // 0x2cbc48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc44) {
            ctx->pc = 0x2CBC5Cu;
            goto label_2cbc5c;
        }
    }
    ctx->pc = 0x2CBC4Cu;
label_2cbc4c:
    // 0x2cbc4c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2cbc50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cbc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc54: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cbc54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cbc58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbc5c:
    // 0x2cbc5c: 0xc0b354e  jal         func_2CD538
    ctx->pc = 0x2CBC5Cu;
    SET_GPR_U32(ctx, 31, 0x2CBC64u);
    ctx->pc = 0x2CBC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC5Cu;
    // 0x2cbc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD538u, 0x2CBC5Cu, 0x2CBC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC64u;
label_2cbc64:
    // 0x2cbc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc68: 0xc0b3656  jal         func_2CD958
    ctx->pc = 0x2CBC68u;
    SET_GPR_U32(ctx, 31, 0x2CBC70u);
    ctx->pc = 0x2CBC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC68u;
    // 0x2cbc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD958u, 0x2CBC68u, 0x2CBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC70u;
label_2cbc70:
    // 0x2cbc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc74: 0xc0b37aa  jal         func_2CDEA8
    ctx->pc = 0x2CBC74u;
    SET_GPR_U32(ctx, 31, 0x2CBC7Cu);
    ctx->pc = 0x2CBC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC74u;
    // 0x2cbc78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEA8u, 0x2CBC74u, 0x2CBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC7Cu;
label_2cbc7c:
    // 0x2cbc7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc80: 0xc0b36e6  jal         func_2CDB98
    ctx->pc = 0x2CBC80u;
    SET_GPR_U32(ctx, 31, 0x2CBC88u);
    ctx->pc = 0x2CBC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC80u;
    // 0x2cbc84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB98u, 0x2CBC80u, 0x2CBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC88u;
label_2cbc88:
    // 0x2cbc88: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cbc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbc90: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBC90u;
    SET_GPR_U32(ctx, 31, 0x2CBC98u);
    ctx->pc = 0x2CBC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBC90u;
    // 0x2cbc94: 0x24a5e6a0  addiu       $a1, $a1, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBC90u, 0x2CBC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBC98u;
label_2cbc98:
    // 0x2cbc98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBC98u;
    {
        const bool branch_taken_0x2cbc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBC98u;
        // 0x2cbc9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbc98) {
            ctx->pc = 0x2CBCBCu;
            goto label_2cbcbc;
        }
    }
    ctx->pc = 0x2CBCA0u;
    // 0x2cbca0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cbca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbca4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBCA4u;
    {
        const bool branch_taken_0x2cbca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCA4u;
        // 0x2cbca8: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbca4) {
            ctx->pc = 0x2CBCBCu;
            goto label_2cbcbc;
        }
    }
    ctx->pc = 0x2CBCACu;
    // 0x2cbcac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cbcb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cbcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cbcb4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2cbcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2cbcb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbcb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cbcbc:
    // 0x2cbcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cbcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cbcc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cbcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCC4u;
        // 0x2cbcc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBCCCu;
    // 0x2cbccc: 0x0  nop
    ctx->pc = 0x2cbcccu;
    // NOP
    ctx->pc = 0x2cbcd0u;
}
