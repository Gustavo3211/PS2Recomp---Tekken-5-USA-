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

// Function: sub_0049EC30
// Address: 0x49ec30 - 0x49ed30
void sub_0049EC30_0x49ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EC30_0x49ec30");
#endif

    switch (ctx->pc) {
        case 0x49ed20u: goto label_49ed20;
        default: break;
    }

    ctx->pc = 0x49ec30u;

    // 0x49ec30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ec34: 0x2487014a  addiu       $a3, $a0, 0x14A
    ctx->pc = 0x49ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 330));
    // 0x49ec38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ec3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49ec3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ec40: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49ec40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49ec44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49ec48: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x49ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49ec4c: 0x1c60002e  bgtz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x49EC4Cu;
    {
        const bool branch_taken_0x49ec4c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x49EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC4Cu;
        // 0x49ec50: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec4c) {
            ctx->pc = 0x49ED08u;
            goto label_49ed08;
        }
    }
    ctx->pc = 0x49EC54u;
    // 0x49ec54: 0x848301b8  lh          $v1, 0x1B8($a0)
    ctx->pc = 0x49ec54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x49ec58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ec5c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x49EC5Cu;
    {
        const bool branch_taken_0x49ec5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC5Cu;
        // 0x49ec60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec5c) {
            ctx->pc = 0x49ECA0u;
            goto label_49eca0;
        }
    }
    ctx->pc = 0x49EC64u;
    // 0x49ec64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49EC64u;
    {
        const bool branch_taken_0x49ec64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC64u;
        // 0x49ec68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec64) {
            ctx->pc = 0x49EC80u;
            goto label_49ec80;
        }
    }
    ctx->pc = 0x49EC6Cu;
    // 0x49ec6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x49EC6Cu;
    {
        const bool branch_taken_0x49ec6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC6Cu;
        // 0x49ec70: 0x248501ba  addiu       $a1, $a0, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec6c) {
            ctx->pc = 0x49EC90u;
            goto label_49ec90;
        }
    }
    ctx->pc = 0x49EC74u;
    // 0x49ec74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x49EC74u;
    {
        const bool branch_taken_0x49ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC74u;
        // 0x49ec78: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec74) {
            ctx->pc = 0x49ECC0u;
            goto label_49ecc0;
        }
    }
    ctx->pc = 0x49EC7Cu;
    // 0x49ec7c: 0x0  nop
    ctx->pc = 0x49ec7cu;
    // NOP
label_49ec80:
    // 0x49ec80: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49EC80u;
    {
        const bool branch_taken_0x49ec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC80u;
        // 0x49ec84: 0x248501ba  addiu       $a1, $a0, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec80) {
            ctx->pc = 0x49ECB0u;
            goto label_49ecb0;
        }
    }
    ctx->pc = 0x49EC88u;
    // 0x49ec88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x49EC88u;
    {
        const bool branch_taken_0x49ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC88u;
        // 0x49ec8c: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec88) {
            ctx->pc = 0x49ECC0u;
            goto label_49ecc0;
        }
    }
    ctx->pc = 0x49EC90u;
label_49ec90:
    // 0x49ec90: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ec94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49EC94u;
    {
        const bool branch_taken_0x49ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC94u;
        // 0x49ec98: 0x24468180  addiu       $a2, $v0, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec94) {
            ctx->pc = 0x49ECB8u;
            goto label_49ecb8;
        }
    }
    ctx->pc = 0x49EC9Cu;
    // 0x49ec9c: 0x0  nop
    ctx->pc = 0x49ec9cu;
    // NOP
label_49eca0:
    // 0x49eca0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49eca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49ECA4u;
    {
        const bool branch_taken_0x49eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ECA4u;
        // 0x49eca8: 0x244681c0  addiu       $a2, $v0, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eca4) {
            ctx->pc = 0x49ECB8u;
            goto label_49ecb8;
        }
    }
    ctx->pc = 0x49ECACu;
    // 0x49ecac: 0x0  nop
    ctx->pc = 0x49ecacu;
    // NOP
label_49ecb0:
    // 0x49ecb0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49ecb4: 0x24468200  addiu       $a2, $v0, -0x7E00
    ctx->pc = 0x49ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935040));
label_49ecb8:
    // 0x49ecb8: 0x248501ba  addiu       $a1, $a0, 0x1BA
    ctx->pc = 0x49ecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 442));
    // 0x49ecbc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49ecbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49ecc0:
    // 0x49ecc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49ecc4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x49ecc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x49ecc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49eccc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x49ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49ecd0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x49ecd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49ecd4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49ECD4u;
    {
        const bool branch_taken_0x49ecd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ECD4u;
        // 0x49ecd8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ecd4) {
            ctx->pc = 0x49ECE8u;
            goto label_49ece8;
        }
    }
    ctx->pc = 0x49ECDCu;
    // 0x49ecdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ecdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ece0: 0x8127b04  j           func_49EC10
    ctx->pc = 0x49ECE0u;
    ctx->pc = 0x49ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ECE0u;
    // 0x49ece4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EC10u, 0x49ECE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49ECE8u;
label_49ece8:
    // 0x49ece8: 0x2484015e  addiu       $a0, $a0, 0x15E
    ctx->pc = 0x49ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 350));
    // 0x49ecec: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x49ececu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49ecf0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49ecf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49ecf4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x49ecf4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49ecf8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49ecf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ecfc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x49ed00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49ED00u;
    {
        const bool branch_taken_0x49ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED00u;
        // 0x49ed04: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed00) {
            ctx->pc = 0x49ED0Cu;
            goto label_49ed0c;
        }
    }
    ctx->pc = 0x49ED08u;
label_49ed08:
    // 0x49ed08: 0x2484015e  addiu       $a0, $a0, 0x15E
    ctx->pc = 0x49ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 350));
label_49ed0c:
    // 0x49ed0c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49ed0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ed10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49ED10u;
    {
        const bool branch_taken_0x49ed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED10u;
        // 0x49ed14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed10) {
            ctx->pc = 0x49ED24u;
            goto label_49ed24;
        }
    }
    ctx->pc = 0x49ED18u;
    // 0x49ed18: 0xc12382a  jal         func_48E0A8
    ctx->pc = 0x49ED18u;
    SET_GPR_U32(ctx, 31, 0x49ED20u);
    ctx->pc = 0x48E0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E0A8u, 0x49ED18u, 0x49ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ED20u;
label_49ed20:
    // 0x49ed20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49ed24:
    // 0x49ed24: 0x3e00008  jr          $ra
    ctx->pc = 0x49ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED24u;
        // 0x49ed28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ED2Cu;
    // 0x49ed2c: 0x0  nop
    ctx->pc = 0x49ed2cu;
    // NOP
    ctx->pc = 0x49ed30u;
}
