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

// Function: sub_00230B20
// Address: 0x230b20 - 0x230bf8
void sub_00230B20_0x230b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230B20_0x230b20");
#endif

    switch (ctx->pc) {
        case 0x230b78u: goto label_230b78;
        case 0x230ba8u: goto label_230ba8;
        default: break;
    }

    ctx->pc = 0x230b20u;

    // 0x230b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230b24: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x230b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x230b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230b2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x230b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230b30: 0x902026  xor         $a0, $a0, $s0
    ctx->pc = 0x230b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 16));
    // 0x230b34: 0x2463cf90  addiu       $v1, $v1, -0x3070
    ctx->pc = 0x230b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x230b38: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x230b38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x230b3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230b40: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x230b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x230b44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x230b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x230b48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230b50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x230b54: 0x24660140  addiu       $a2, $v1, 0x140
    ctx->pc = 0x230b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x230b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230b5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b60: 0x24530168  addiu       $s3, $v0, 0x168
    ctx->pc = 0x230b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x230b64: 0x24520150  addiu       $s2, $v0, 0x150
    ctx->pc = 0x230b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x230b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230b70: 0xc0cae76  jal         func_32B9D8
    ctx->pc = 0x230B70u;
    SET_GPR_U32(ctx, 31, 0x230B78u);
    ctx->pc = 0x230B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B70u;
    // 0x230b74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B9D8u, 0x230B70u, 0x230B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B78u;
label_230b78:
    // 0x230b78: 0x52300019  beql        $s1, $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x230B78u;
    {
        const bool branch_taken_0x230b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x230b78) {
            ctx->pc = 0x230B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230B78u;
            // 0x230b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230BE0u;
            goto label_230be0;
        }
    }
    ctx->pc = 0x230B80u;
    // 0x230b80: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x230B80u;
    {
        const bool branch_taken_0x230b80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B80u;
        // 0x230b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b80) {
            ctx->pc = 0x230BA0u;
            goto label_230ba0;
        }
    }
    ctx->pc = 0x230B88u;
    // 0x230b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230b8c: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x230B8Cu;
    {
        const bool branch_taken_0x230b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x230B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B8Cu;
        // 0x230b90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b8c) {
            ctx->pc = 0x230BC8u;
            goto label_230bc8;
        }
    }
    ctx->pc = 0x230B94u;
    // 0x230b94: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x230B94u;
    {
        const bool branch_taken_0x230b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B94u;
        // 0x230b98: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b94) {
            ctx->pc = 0x230BE4u;
            goto label_230be4;
        }
    }
    ctx->pc = 0x230B9Cu;
    // 0x230b9c: 0x0  nop
    ctx->pc = 0x230b9cu;
    // NOP
label_230ba0:
    // 0x230ba0: 0xc0bf170  jal         func_2FC5C0
    ctx->pc = 0x230BA0u;
    SET_GPR_U32(ctx, 31, 0x230BA8u);
    ctx->pc = 0x230BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BA0u;
    // 0x230ba4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC5C0u, 0x230BA0u, 0x230BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BA8u;
label_230ba8:
    // 0x230ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230bb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x230bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230bbc: 0x808c2a2  j           func_230A88
    ctx->pc = 0x230BBCu;
    ctx->pc = 0x230BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BBCu;
    // 0x230bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A88u;
    sub_00230A88_0x230a88(rdram, ctx, runtime); return;
    ctx->pc = 0x230BC4u;
    // 0x230bc4: 0x0  nop
    ctx->pc = 0x230bc4u;
    // NOP
label_230bc8:
    // 0x230bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x230bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230bd8: 0x808c2a2  j           func_230A88
    ctx->pc = 0x230BD8u;
    ctx->pc = 0x230BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BD8u;
    // 0x230bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230A88u;
    sub_00230A88_0x230a88(rdram, ctx, runtime); return;
    ctx->pc = 0x230BE0u;
label_230be0:
    // 0x230be0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_230be4:
    // 0x230be4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230be8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x230be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x230becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x230BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BF0u;
        // 0x230bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230BF8u;
}
