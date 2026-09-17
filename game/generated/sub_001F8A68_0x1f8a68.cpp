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

// Function: sub_001F8A68
// Address: 0x1f8a68 - 0x1f8d70
void sub_001F8A68_0x1f8a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8A68_0x1f8a68");
#endif

    switch (ctx->pc) {
        case 0x1f8ab8u: goto label_1f8ab8;
        case 0x1f8b3cu: goto label_1f8b3c;
        case 0x1f8b4cu: goto label_1f8b4c;
        case 0x1f8b80u: goto label_1f8b80;
        case 0x1f8bc0u: goto label_1f8bc0;
        case 0x1f8bd4u: goto label_1f8bd4;
        case 0x1f8c0cu: goto label_1f8c0c;
        case 0x1f8c14u: goto label_1f8c14;
        case 0x1f8c48u: goto label_1f8c48;
        case 0x1f8c54u: goto label_1f8c54;
        case 0x1f8c6cu: goto label_1f8c6c;
        case 0x1f8c98u: goto label_1f8c98;
        case 0x1f8cacu: goto label_1f8cac;
        case 0x1f8cbcu: goto label_1f8cbc;
        case 0x1f8cdcu: goto label_1f8cdc;
        case 0x1f8ce8u: goto label_1f8ce8;
        case 0x1f8d00u: goto label_1f8d00;
        case 0x1f8d0cu: goto label_1f8d0c;
        case 0x1f8d18u: goto label_1f8d18;
        case 0x1f8d20u: goto label_1f8d20;
        case 0x1f8d2cu: goto label_1f8d2c;
        case 0x1f8d34u: goto label_1f8d34;
        case 0x1f8d48u: goto label_1f8d48;
        default: break;
    }

    ctx->pc = 0x1f8a68u;

    // 0x1f8a68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8a70: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x1f8a70u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x1f8a74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f8a78: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x1f8a7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f8a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f8a80: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f8a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a84: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f8a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f8a88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f8a88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8a90: 0x266283c0  addiu       $v0, $s3, -0x7C40
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x1f8a94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8a98: 0x264355b0  addiu       $v1, $s2, 0x55B0
    ctx->pc = 0x1f8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
    // 0x1f8a9c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f8a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f8aa0: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x1f8aa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f8aa4: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1f8aa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3A83C4u));
    // 0x1f8aa8: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8AA8u;
    {
        const bool branch_taken_0x1f8aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA8u;
        // 0x1f8aac: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8aa8) {
            ctx->pc = 0x1F8B20u;
            goto label_1f8b20;
        }
    }
    ctx->pc = 0x1F8AB0u;
    // 0x1f8ab0: 0xc07e242  jal         func_1F8908
    ctx->pc = 0x1F8AB0u;
    SET_GPR_U32(ctx, 31, 0x1F8AB8u);
    ctx->pc = 0x1F8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8908u, 0x1F8AB0u, 0x1F8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AB8u;
label_1f8ab8:
    // 0x1f8ab8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F8AB8u;
    {
        const bool branch_taken_0x1f8ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AB8u;
        // 0x1f8abc: 0x266283c0  addiu       $v0, $s3, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ab8) {
            ctx->pc = 0x1F8B20u;
            goto label_1f8b20;
        }
    }
    ctx->pc = 0x1F8AC0u;
    // 0x1f8ac0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1f8ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1f8ac4: 0x24a38858  addiu       $v1, $a1, -0x77A8
    ctx->pc = 0x1f8ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x1f8ac8: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1f8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x1f8acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f8accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f8ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f8ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8ad4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8AD4u;
    {
        const bool branch_taken_0x1f8ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AD4u;
        // 0x1f8ad8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ad4) {
            ctx->pc = 0x1F8AF4u;
            goto label_1f8af4;
        }
    }
    ctx->pc = 0x1F8ADCu;
    // 0x1f8adc: 0x8f82a850  lw          $v0, -0x57B0($gp)
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x1f8ae0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1f8ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1f8ae4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8AE4u;
    {
        const bool branch_taken_0x1f8ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AE4u;
        // 0x1f8ae8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ae4) {
            ctx->pc = 0x1F8AF4u;
            goto label_1f8af4;
        }
    }
    ctx->pc = 0x1F8AECu;
    // 0x1f8aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8af0: 0x24a38858  addiu       $v1, $a1, -0x77A8
    ctx->pc = 0x1f8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
label_1f8af4:
    // 0x1f8af4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x1f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1f8af8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1f8af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1f8afc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8AFCu;
    {
        const bool branch_taken_0x1f8afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AFCu;
        // 0x1f8b00: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8afc) {
            ctx->pc = 0x1F8B14u;
            goto label_1f8b14;
        }
    }
    ctx->pc = 0x1F8B04u;
    // 0x1f8b04: 0x8f82a854  lw          $v0, -0x57AC($gp)
    ctx->pc = 0x1f8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944852)));
    // 0x1f8b08: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1f8b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1f8b0c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8B0Cu;
    {
        const bool branch_taken_0x1f8b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B0Cu;
        // 0x1f8b10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b0c) {
            ctx->pc = 0x1F8B18u;
            goto label_1f8b18;
        }
    }
    ctx->pc = 0x1F8B14u;
label_1f8b14:
    // 0x1f8b14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f8b14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8b18:
    // 0x1f8b18: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1f8b18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b1c: 0x266283c0  addiu       $v0, $s3, -0x7C40
    ctx->pc = 0x1f8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
label_1f8b20:
    // 0x1f8b20: 0x265055b0  addiu       $s0, $s2, 0x55B0
    ctx->pc = 0x1f8b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
    // 0x1f8b24: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x1f8b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f8b28: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x1f8b28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1f8b2c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F8B2Cu;
    {
        const bool branch_taken_0x1f8b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B2Cu;
        // 0x1f8b30: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b2c) {
            ctx->pc = 0x1F8B78u;
            goto label_1f8b78;
        }
    }
    ctx->pc = 0x1F8B34u;
    // 0x1f8b34: 0xc0846ce  jal         func_211B38
    ctx->pc = 0x1F8B34u;
    SET_GPR_U32(ctx, 31, 0x1F8B3Cu);
    ctx->pc = 0x211B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211B38u, 0x1F8B34u, 0x1F8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B3Cu;
label_1f8b3c:
    // 0x1f8b3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8B3Cu;
    {
        const bool branch_taken_0x1f8b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b3c) {
            ctx->pc = 0x1F8B78u;
            goto label_1f8b78;
        }
    }
    ctx->pc = 0x1F8B44u;
    // 0x1f8b44: 0xc07e246  jal         func_1F8918
    ctx->pc = 0x1F8B44u;
    SET_GPR_U32(ctx, 31, 0x1F8B4Cu);
    ctx->pc = 0x1F8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8918u, 0x1F8B44u, 0x1F8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B4Cu;
label_1f8b4c:
    // 0x1f8b4c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8B4Cu;
    {
        const bool branch_taken_0x1f8b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b4c) {
            ctx->pc = 0x1F8B78u;
            goto label_1f8b78;
        }
    }
    ctx->pc = 0x1F8B54u;
    // 0x1f8b54: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8B54u;
    {
        const bool branch_taken_0x1f8b54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B54u;
        // 0x1f8b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b54) {
            ctx->pc = 0x1F8B60u;
            goto label_1f8b60;
        }
    }
    ctx->pc = 0x1F8B5Cu;
    // 0x1f8b5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1f8b60:
    // 0x1f8b60: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8B60u;
    {
        const bool branch_taken_0x1f8b60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B60u;
        // 0x1f8b64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b60) {
            ctx->pc = 0x1F8B6Cu;
            goto label_1f8b6c;
        }
    }
    ctx->pc = 0x1F8B68u;
    // 0x1f8b68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1f8b6c:
    // 0x1f8b6c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8B6Cu;
    {
        const bool branch_taken_0x1f8b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B6Cu;
        // 0x1f8b70: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b6c) {
            ctx->pc = 0x1F8B78u;
            goto label_1f8b78;
        }
    }
    ctx->pc = 0x1F8B74u;
    // 0x1f8b74: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1f8b78:
    // 0x1f8b78: 0xc07e246  jal         func_1F8918
    ctx->pc = 0x1F8B78u;
    SET_GPR_U32(ctx, 31, 0x1F8B80u);
    ctx->pc = 0x1F8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8918u, 0x1F8B78u, 0x1F8B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B80u;
label_1f8b80:
    // 0x1f8b80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8B80u;
    {
        const bool branch_taken_0x1f8b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B80u;
        // 0x1f8b84: 0x265055b0  addiu       $s0, $s2, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b80) {
            ctx->pc = 0x1F8BA4u;
            goto label_1f8ba4;
        }
    }
    ctx->pc = 0x1F8B88u;
    // 0x1f8b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8b8c: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F8B8Cu;
    {
        const bool branch_taken_0x1f8b8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8b8c) {
            ctx->pc = 0x1F8B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8B8Cu;
            // 0x1f8b90: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8BA8u;
            goto label_1f8ba8;
        }
    }
    ctx->pc = 0x1F8B94u;
    // 0x1f8b94: 0x264355b0  addiu       $v1, $s2, 0x55B0
    ctx->pc = 0x1f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
    // 0x1f8b98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8b9c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f8ba0: 0x265055b0  addiu       $s0, $s2, 0x55B0
    ctx->pc = 0x1f8ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
label_1f8ba4:
    // 0x1f8ba4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8ba8:
    // 0x1f8ba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8BA8u;
    {
        const bool branch_taken_0x1f8ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ba8) {
            ctx->pc = 0x1F8BB8u;
            goto label_1f8bb8;
        }
    }
    ctx->pc = 0x1F8BB0u;
    // 0x1f8bb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f8bb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f8bb8:
    // 0x1f8bb8: 0xc07e246  jal         func_1F8918
    ctx->pc = 0x1F8BB8u;
    SET_GPR_U32(ctx, 31, 0x1F8BC0u);
    ctx->pc = 0x1F8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8918u, 0x1F8BB8u, 0x1F8BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BC0u;
label_1f8bc0:
    // 0x1f8bc0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f8bc4: 0x10430054  beq         $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1F8BC4u;
    {
        const bool branch_taken_0x1f8bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f8bc4) {
            ctx->pc = 0x1F8D18u;
            goto label_1f8d18;
        }
    }
    ctx->pc = 0x1F8BCCu;
    // 0x1f8bcc: 0xc07e246  jal         func_1F8918
    ctx->pc = 0x1F8BCCu;
    SET_GPR_U32(ctx, 31, 0x1F8BD4u);
    ctx->pc = 0x1F8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8918u, 0x1F8BCCu, 0x1F8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BD4u;
label_1f8bd4:
    // 0x1f8bd4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F8BD4u;
    {
        const bool branch_taken_0x1f8bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD4u;
        // 0x1f8bd8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd4) {
            ctx->pc = 0x1F8C78u;
            goto label_1f8c78;
        }
    }
    ctx->pc = 0x1F8BDCu;
    // 0x1f8bdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8be0: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8BE0u;
    {
        const bool branch_taken_0x1f8be0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BE0u;
        // 0x1f8be4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8be0) {
            ctx->pc = 0x1F8BF8u;
            goto label_1f8bf8;
        }
    }
    ctx->pc = 0x1F8BE8u;
    // 0x1f8be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8bec: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1f8becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1f8bf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F8BF0u;
    {
        const bool branch_taken_0x1f8bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BF0u;
        // 0x1f8bf4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bf0) {
            ctx->pc = 0x1F8C28u;
            goto label_1f8c28;
        }
    }
    ctx->pc = 0x1F8BF8u;
label_1f8bf8:
    // 0x1f8bf8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8BF8u;
    {
        const bool branch_taken_0x1f8bf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BF8u;
        // 0x1f8bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bf8) {
            ctx->pc = 0x1F8C20u;
            goto label_1f8c20;
        }
    }
    ctx->pc = 0x1F8C00u;
    // 0x1f8c00: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1f8c04: 0xc07ed26  jal         func_1FB498
    ctx->pc = 0x1F8C04u;
    SET_GPR_U32(ctx, 31, 0x1F8C0Cu);
    ctx->pc = 0x1F8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C04u;
    // 0x1f8c08: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB498u, 0x1F8C04u, 0x1F8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C0Cu;
label_1f8c0c:
    // 0x1f8c0c: 0xc07e786  jal         func_1F9E18
    ctx->pc = 0x1F8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8C14u);
    ctx->pc = 0x1F9E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E18u, 0x1F8C0Cu, 0x1F8C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C14u;
label_1f8c14:
    // 0x1f8c14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8C14u;
    {
        const bool branch_taken_0x1f8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C14u;
        // 0x1f8c18: 0x264255b0  addiu       $v0, $s2, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c14) {
            ctx->pc = 0x1F8C2Cu;
            goto label_1f8c2c;
        }
    }
    ctx->pc = 0x1F8C1Cu;
    // 0x1f8c1c: 0x0  nop
    ctx->pc = 0x1f8c1cu;
    // NOP
label_1f8c20:
    // 0x1f8c20: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1f8c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1f8c24: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1f8c28:
    // 0x1f8c28: 0x264255b0  addiu       $v0, $s2, 0x55B0
    ctx->pc = 0x1f8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
label_1f8c2c:
    // 0x1f8c2c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f8c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f8c30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f8c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8c34: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1f8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1f8c38: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1f8c3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1f8c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1f8c40: 0xc09249a  jal         func_249268
    ctx->pc = 0x1F8C40u;
    SET_GPR_U32(ctx, 31, 0x1F8C48u);
    ctx->pc = 0x1F8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C40u;
    // 0x1f8c44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249268u, 0x1F8C40u, 0x1F8C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C48u;
label_1f8c48:
    // 0x1f8c48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f8c48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f8c4c: 0xc0924a2  jal         func_249288
    ctx->pc = 0x1F8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F8C54u);
    ctx->pc = 0x1F8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C4Cu;
    // 0x1f8c50: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x1F8C4Cu, 0x1F8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C54u;
label_1f8c54:
    // 0x1f8c54: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8C54u;
    {
        const bool branch_taken_0x1f8c54 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c54) {
            ctx->pc = 0x1F8C64u;
            goto label_1f8c64;
        }
    }
    ctx->pc = 0x1F8C5Cu;
    // 0x1f8c5c: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F8C5Cu;
    {
        const bool branch_taken_0x1f8c5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c5c) {
            ctx->pc = 0x1F8D18u;
            goto label_1f8d18;
        }
    }
    ctx->pc = 0x1F8C64u;
label_1f8c64:
    // 0x1f8c64: 0xc092940  jal         func_24A500
    ctx->pc = 0x1F8C64u;
    SET_GPR_U32(ctx, 31, 0x1F8C6Cu);
    ctx->pc = 0x1F8C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8C64u;
    // 0x1f8c68: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x1F8C64u, 0x1F8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C6Cu;
label_1f8c6c:
    // 0x1f8c6c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F8C6Cu;
    {
        const bool branch_taken_0x1f8c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c6c) {
            ctx->pc = 0x1F8D18u;
            goto label_1f8d18;
        }
    }
    ctx->pc = 0x1F8C74u;
    // 0x1f8c74: 0x0  nop
    ctx->pc = 0x1f8c74u;
    // NOP
label_1f8c78:
    // 0x1f8c78: 0x8e6383c0  lw          $v1, -0x7C40($s3)
    ctx->pc = 0x1f8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935488)));
    // 0x1f8c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8c80: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1f8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1f8c84: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x1f8c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x1f8c88: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8C88u;
    {
        const bool branch_taken_0x1f8c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C88u;
        // 0x1f8c8c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c88) {
            ctx->pc = 0x1F8CC8u;
            goto label_1f8cc8;
        }
    }
    ctx->pc = 0x1F8C90u;
    // 0x1f8c90: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1F8C90u;
    SET_GPR_U32(ctx, 31, 0x1F8C98u);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x1F8C90u, 0x1F8C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C98u;
label_1f8c98:
    // 0x1f8c98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F8C98u;
    {
        const bool branch_taken_0x1f8c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8c98) {
            ctx->pc = 0x1F8CC8u;
            goto label_1f8cc8;
        }
    }
    ctx->pc = 0x1F8CA0u;
    // 0x1f8ca0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f8ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8ca4: 0xc0924a2  jal         func_249288
    ctx->pc = 0x1F8CA4u;
    SET_GPR_U32(ctx, 31, 0x1F8CACu);
    ctx->pc = 0x1F8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CA4u;
    // 0x1f8ca8: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x1F8CA4u, 0x1F8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CACu;
label_1f8cac:
    // 0x1f8cac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8cb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f8cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f8cb4: 0xc09249a  jal         func_249268
    ctx->pc = 0x1F8CB4u;
    SET_GPR_U32(ctx, 31, 0x1F8CBCu);
    ctx->pc = 0x1F8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CB4u;
    // 0x1f8cb8: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249268u, 0x1F8CB4u, 0x1F8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CBCu;
label_1f8cbc:
    // 0x1f8cbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F8CBCu;
    {
        const bool branch_taken_0x1f8cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CBCu;
        // 0x1f8cc0: 0x264255b0  addiu       $v0, $s2, 0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cbc) {
            ctx->pc = 0x1F8CECu;
            goto label_1f8cec;
        }
    }
    ctx->pc = 0x1F8CC4u;
    // 0x1f8cc4: 0x0  nop
    ctx->pc = 0x1f8cc4u;
    // NOP
label_1f8cc8:
    // 0x1f8cc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f8cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8ccc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f8cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f8cd0: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1f8cd4: 0xc0924a2  jal         func_249288
    ctx->pc = 0x1F8CD4u;
    SET_GPR_U32(ctx, 31, 0x1F8CDCu);
    ctx->pc = 0x1F8CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CD4u;
    // 0x1f8cd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249288u, 0x1F8CD4u, 0x1F8CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CDCu;
label_1f8cdc:
    // 0x1f8cdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f8cdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f8ce0: 0xc09249a  jal         func_249268
    ctx->pc = 0x1F8CE0u;
    SET_GPR_U32(ctx, 31, 0x1F8CE8u);
    ctx->pc = 0x1F8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CE0u;
    // 0x1f8ce4: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249268u, 0x1F8CE0u, 0x1F8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CE8u;
label_1f8ce8:
    // 0x1f8ce8: 0x264255b0  addiu       $v0, $s2, 0x55B0
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
label_1f8cec:
    // 0x1f8cec: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1f8cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1f8cf0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1f8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1f8cf4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1f8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1f8cf8: 0xc07e786  jal         func_1F9E18
    ctx->pc = 0x1F8CF8u;
    SET_GPR_U32(ctx, 31, 0x1F8D00u);
    ctx->pc = 0x1F8CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CF8u;
    // 0x1f8cfc: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9E18u, 0x1F8CF8u, 0x1F8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D00u;
label_1f8d00:
    // 0x1f8d00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d04: 0xc08b8b4  jal         func_22E2D0
    ctx->pc = 0x1F8D04u;
    SET_GPR_U32(ctx, 31, 0x1F8D0Cu);
    ctx->pc = 0x1F8D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D04u;
    // 0x1f8d08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2D0u, 0x1F8D04u, 0x1F8D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D0Cu;
label_1f8d0c:
    // 0x1f8d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d10: 0xc08b8b4  jal         func_22E2D0
    ctx->pc = 0x1F8D10u;
    SET_GPR_U32(ctx, 31, 0x1F8D18u);
    ctx->pc = 0x1F8D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D10u;
    // 0x1f8d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2D0u, 0x1F8D10u, 0x1F8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D18u;
label_1f8d18:
    // 0x1f8d18: 0xc07e246  jal         func_1F8918
    ctx->pc = 0x1F8D18u;
    SET_GPR_U32(ctx, 31, 0x1F8D20u);
    ctx->pc = 0x1F8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8918u, 0x1F8D18u, 0x1F8D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D20u;
label_1f8d20:
    // 0x1f8d20: 0x264355b0  addiu       $v1, $s2, 0x55B0
    ctx->pc = 0x1f8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 21936));
    // 0x1f8d24: 0xc07e246  jal         func_1F8918
    ctx->pc = 0x1F8D24u;
    SET_GPR_U32(ctx, 31, 0x1F8D2Cu);
    ctx->pc = 0x1F8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D24u;
    // 0x1f8d28: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8918u, 0x1F8D24u, 0x1F8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D2Cu;
label_1f8d2c:
    // 0x1f8d2c: 0xc07e24e  jal         func_1F8938
    ctx->pc = 0x1F8D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F8D34u);
    ctx->pc = 0x1F8D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D2Cu;
    // 0x1f8d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8938u, 0x1F8D2Cu, 0x1F8D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D34u;
label_1f8d34:
    // 0x1f8d34: 0x8f829730  lw          $v0, -0x68D0($gp)
    ctx->pc = 0x1f8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x1f8d38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D38u;
    {
        const bool branch_taken_0x1f8d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D38u;
        // 0x1f8d3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d38) {
            ctx->pc = 0x1F8D4Cu;
            goto label_1f8d4c;
        }
    }
    ctx->pc = 0x1F8D40u;
    // 0x1f8d40: 0xc07e24e  jal         func_1F8938
    ctx->pc = 0x1F8D40u;
    SET_GPR_U32(ctx, 31, 0x1F8D48u);
    ctx->pc = 0x1F8D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D40u;
    // 0x1f8d44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8938u, 0x1F8D40u, 0x1F8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D48u;
label_1f8d48:
    // 0x1f8d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8d4c:
    // 0x1f8d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8d50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8d54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f8d54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f8d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8d5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f8d5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f8d60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f8d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8d64: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x1f8d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f8d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D68u;
        // 0x1f8d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8D70u;
}
