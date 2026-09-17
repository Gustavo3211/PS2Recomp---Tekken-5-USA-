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

// Function: sub_00128AE0
// Address: 0x128ae0 - 0x128bc8
void sub_00128AE0_0x128ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128AE0_0x128ae0");
#endif

    switch (ctx->pc) {
        case 0x128b68u: goto label_128b68;
        case 0x128b94u: goto label_128b94;
        default: break;
    }

    ctx->pc = 0x128ae0u;

    // 0x128ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128ae4: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x128ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x128ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128aec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x128aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128af0: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x128af0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x128af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128af8: 0x804a25c  j           func_128970
    ctx->pc = 0x128AF8u;
    ctx->pc = 0x128AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AF8u;
    // 0x128afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128970u, 0x128AF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x128B00u;
    // 0x128b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128b04: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x128b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x128b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128b0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x128b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x128b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b14: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x128b14u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x128b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b1c: 0x804a23c  j           func_1288F0
    ctx->pc = 0x128B1Cu;
    ctx->pc = 0x128B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B1Cu;
    // 0x128b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1288F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1288F0u, 0x128B1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x128B24u;
    // 0x128b24: 0x0  nop
    ctx->pc = 0x128b24u;
    // NOP
    // 0x128b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128b2c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x128b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x128b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128b34: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x128b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b3c: 0x804a220  j           func_128880
    ctx->pc = 0x128B3Cu;
    ctx->pc = 0x128B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B3Cu;
    // 0x128b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128880u;
    sub_00128880_0x128880(rdram, ctx, runtime); return;
    ctx->pc = 0x128B44u;
    // 0x128b44: 0x0  nop
    ctx->pc = 0x128b44u;
    // NOP
    // 0x128b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128b4c: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x128b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x128b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128b54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x128b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b58: 0x8c444728  lw          $a0, 0x4728($v0)
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x134728u));
    // 0x128b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b60: 0x804a292  j           func_128A48
    ctx->pc = 0x128B60u;
    ctx->pc = 0x128B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B60u;
    // 0x128b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128A48u, 0x128B60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x128B68u;
label_128b68:
    // 0x128b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128b6c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x128b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x128b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x128b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128b7c: 0x24515578  addiu       $s1, $v0, 0x5578
    ctx->pc = 0x128b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21880));
    // 0x128b80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x128b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x128b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128b8c: 0xc043ede  jal         func_10FB78
    ctx->pc = 0x128B8Cu;
    SET_GPR_U32(ctx, 31, 0x128B94u);
    ctx->pc = 0x128B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B8Cu;
    // 0x128b90: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB78u, 0x128B8Cu, 0x128B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B94u;
label_128b94:
    // 0x128b94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x128b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x128b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128b9c: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B9Cu;
    {
        const bool branch_taken_0x128b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x128b9c) {
            ctx->pc = 0x128BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128B9Cu;
            // 0x128ba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128BB4u;
            goto label_128bb4;
        }
    }
    ctx->pc = 0x128BA4u;
    // 0x128ba4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x128ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128ba8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x128BA8u;
    {
        const bool branch_taken_0x128ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128ba8) {
            ctx->pc = 0x128BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128BA8u;
            // 0x128bac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128BB0u;
            goto label_128bb0;
        }
    }
    ctx->pc = 0x128BB0u;
label_128bb0:
    // 0x128bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128bb4:
    // 0x128bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x128BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BBCu;
        // 0x128bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128BC4u;
    // 0x128bc4: 0x0  nop
    ctx->pc = 0x128bc4u;
    // NOP
    ctx->pc = 0x128bc8u;
}
