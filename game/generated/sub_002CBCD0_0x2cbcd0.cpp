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

// Function: sub_002CBCD0
// Address: 0x2cbcd0 - 0x2cc168
void sub_002CBCD0_0x2cbcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBCD0_0x2cbcd0");
#endif

    switch (ctx->pc) {
        case 0x2cbd30u: goto label_2cbd30;
        case 0x2cbd3cu: goto label_2cbd3c;
        case 0x2cbd48u: goto label_2cbd48;
        case 0x2cbd54u: goto label_2cbd54;
        case 0x2cbd74u: goto label_2cbd74;
        case 0x2cbd88u: goto label_2cbd88;
        case 0x2cbd94u: goto label_2cbd94;
        case 0x2cbdacu: goto label_2cbdac;
        case 0x2cbdb4u: goto label_2cbdb4;
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbde0u: goto label_2cbde0;
        case 0x2cbdf4u: goto label_2cbdf4;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe1cu: goto label_2cbe1c;
        case 0x2cbe2cu: goto label_2cbe2c;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe60u: goto label_2cbe60;
        case 0x2cbe70u: goto label_2cbe70;
        case 0x2cbe98u: goto label_2cbe98;
        case 0x2cbeecu: goto label_2cbeec;
        case 0x2cbef8u: goto label_2cbef8;
        case 0x2cbf38u: goto label_2cbf38;
        case 0x2cbf64u: goto label_2cbf64;
        case 0x2cbf8cu: goto label_2cbf8c;
        case 0x2cbfb0u: goto label_2cbfb0;
        case 0x2cbfc8u: goto label_2cbfc8;
        case 0x2cc008u: goto label_2cc008;
        case 0x2cc024u: goto label_2cc024;
        case 0x2cc040u: goto label_2cc040;
        case 0x2cc06cu: goto label_2cc06c;
        case 0x2cc084u: goto label_2cc084;
        case 0x2cc0a0u: goto label_2cc0a0;
        case 0x2cc0b0u: goto label_2cc0b0;
        case 0x2cc0c0u: goto label_2cc0c0;
        case 0x2cc0d8u: goto label_2cc0d8;
        case 0x2cc0f0u: goto label_2cc0f0;
        case 0x2cc0fcu: goto label_2cc0fc;
        case 0x2cc114u: goto label_2cc114;
        case 0x2cc120u: goto label_2cc120;
        case 0x2cc138u: goto label_2cc138;
        default: break;
    }

    ctx->pc = 0x2cbcd0u;

    // 0x2cbcd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cbcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cbcd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cbcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cbcd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cbcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbcdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cbcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cbce0: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x2cbce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2cbce4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cbce8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cbcec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cbcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cbcf0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cbcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cbcf4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2cbcf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cbcf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cbcfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBCFCu;
    {
        const bool branch_taken_0x2cbcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCFCu;
        // 0x2cbd00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcfc) {
            ctx->pc = 0x2CBD14u;
            goto label_2cbd14;
        }
    }
    ctx->pc = 0x2CBD04u;
    // 0x2cbd04: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2cbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cbd08: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cbd0c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBD0Cu;
    {
        const bool branch_taken_0x2cbd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD0Cu;
        // 0x2cbd10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd0c) {
            ctx->pc = 0x2CBD24u;
            goto label_2cbd24;
        }
    }
    ctx->pc = 0x2CBD14u;
label_2cbd14:
    // 0x2cbd14: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2cbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2cbd18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cbd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd1c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cbd20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbd24:
    // 0x2cbd24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd28: 0xc0b354e  jal         func_2CD538
    ctx->pc = 0x2CBD28u;
    SET_GPR_U32(ctx, 31, 0x2CBD30u);
    ctx->pc = 0x2CBD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD28u;
    // 0x2cbd2c: 0x8e140058  lw          $s4, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD538u, 0x2CBD28u, 0x2CBD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD30u;
label_2cbd30:
    // 0x2cbd30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd34: 0xc0b3656  jal         func_2CD958
    ctx->pc = 0x2CBD34u;
    SET_GPR_U32(ctx, 31, 0x2CBD3Cu);
    ctx->pc = 0x2CBD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD34u;
    // 0x2cbd38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD958u, 0x2CBD34u, 0x2CBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD3Cu;
label_2cbd3c:
    // 0x2cbd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd40: 0xc0b37aa  jal         func_2CDEA8
    ctx->pc = 0x2CBD40u;
    SET_GPR_U32(ctx, 31, 0x2CBD48u);
    ctx->pc = 0x2CBD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD40u;
    // 0x2cbd44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEA8u, 0x2CBD40u, 0x2CBD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD48u;
label_2cbd48:
    // 0x2cbd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd4c: 0xc0b36e6  jal         func_2CDB98
    ctx->pc = 0x2CBD4Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD54u);
    ctx->pc = 0x2CBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD4Cu;
    // 0x2cbd50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB98u, 0x2CBD4Cu, 0x2CBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD54u;
label_2cbd54:
    // 0x2cbd54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cbd58: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cbd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd60: 0x24a5e700  addiu       $a1, $a1, -0x1900
    ctx->pc = 0x2cbd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    // 0x2cbd64: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CBD64u;
    {
        const bool branch_taken_0x2cbd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD64u;
        // 0x2cbd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd64) {
            ctx->pc = 0x2CBDD0u;
            goto label_2cbdd0;
        }
    }
    ctx->pc = 0x2CBD6Cu;
    // 0x2cbd6c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBD6Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD74u);
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBD6Cu, 0x2CBD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD74u;
label_2cbd74:
    // 0x2cbd74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cbd78: 0x24a5e710  addiu       $a1, $a1, -0x18F0
    ctx->pc = 0x2cbd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960912));
    // 0x2cbd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd80: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBD80u;
    SET_GPR_U32(ctx, 31, 0x2CBD88u);
    ctx->pc = 0x2CBD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD80u;
    // 0x2cbd84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBD80u, 0x2CBD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD88u;
label_2cbd88:
    // 0x2cbd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd8c: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x2CBD8Cu;
    SET_GPR_U32(ctx, 31, 0x2CBD94u);
    ctx->pc = 0x2CBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBD8Cu;
    // 0x2cbd90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x2CBD8Cu, 0x2CBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBD94u;
label_2cbd94:
    // 0x2cbd94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cbd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbd9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBD9Cu;
    {
        const bool branch_taken_0x2cbd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD9Cu;
        // 0x2cbda0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd9c) {
            ctx->pc = 0x2CBDACu;
            goto label_2cbdac;
        }
    }
    ctx->pc = 0x2CBDA4u;
    // 0x2cbda4: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x2CBDA4u;
    SET_GPR_U32(ctx, 31, 0x2CBDACu);
    ctx->pc = 0x2CBDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDA4u;
    // 0x2cbda8: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x2CBDA4u, 0x2CBDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDACu;
label_2cbdac:
    // 0x2cbdac: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x2CBDACu;
    SET_GPR_U32(ctx, 31, 0x2CBDB4u);
    ctx->pc = 0x2CBDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDACu;
    // 0x2cbdb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x2CBDACu, 0x2CBDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDB4u;
label_2cbdb4:
    // 0x2cbdb4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBDB4u;
    {
        const bool branch_taken_0x2cbdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDB4u;
        // 0x2cbdb8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdb4) {
            ctx->pc = 0x2CBDD4u;
            goto label_2cbdd4;
        }
    }
    ctx->pc = 0x2CBDBCu;
    // 0x2cbdbc: 0x8e240130  lw          $a0, 0x130($s1)
    ctx->pc = 0x2cbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2cbdc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cbdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cbdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbdc8: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x2CBDC8u;
    SET_GPR_U32(ctx, 31, 0x2CBDD0u);
    ctx->pc = 0x2CBDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDC8u;
    // 0x2cbdcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x2CBDC8u, 0x2CBDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDD0u;
label_2cbdd0:
    // 0x2cbdd0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2cbdd4:
    // 0x2cbdd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdd8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBDD8u;
    SET_GPR_U32(ctx, 31, 0x2CBDE0u);
    ctx->pc = 0x2CBDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDD8u;
    // 0x2cbddc: 0x24a5e728  addiu       $a1, $a1, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBDD8u, 0x2CBDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDE0u;
label_2cbde0:
    // 0x2cbde0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cbde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbde8: 0x24a5e738  addiu       $a1, $a1, -0x18C8
    ctx->pc = 0x2cbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960952));
    // 0x2cbdec: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBDECu;
    SET_GPR_U32(ctx, 31, 0x2CBDF4u);
    ctx->pc = 0x2CBDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBDECu;
    // 0x2cbdf0: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBDECu, 0x2CBDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBDF4u;
label_2cbdf4:
    // 0x2cbdf4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cbdf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbdfc: 0x24a5e750  addiu       $a1, $a1, -0x18B0
    ctx->pc = 0x2cbdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    // 0x2cbe00: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBE00u;
    SET_GPR_U32(ctx, 31, 0x2CBE08u);
    ctx->pc = 0x2CBE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE00u;
    // 0x2cbe04: 0x8c530004  lw          $s3, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBE00u, 0x2CBE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE08u;
label_2cbe08:
    // 0x2cbe08: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cbe08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cbe0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe10: 0x24a5e760  addiu       $a1, $a1, -0x18A0
    ctx->pc = 0x2cbe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
    // 0x2cbe14: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CBE14u;
    SET_GPR_U32(ctx, 31, 0x2CBE1Cu);
    ctx->pc = 0x2CBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE14u;
    // 0x2cbe18: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CBE14u, 0x2CBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE1Cu;
label_2cbe1c:
    // 0x2cbe1c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2cbe1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cbe20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe24: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2CBE24u;
    SET_GPR_U32(ctx, 31, 0x2CBE2Cu);
    ctx->pc = 0x2CBE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE24u;
    // 0x2cbe28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2CBE24u, 0x2CBE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE2Cu;
label_2cbe2c:
    // 0x2cbe2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe34: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2CBE34u;
    SET_GPR_U32(ctx, 31, 0x2CBE3Cu);
    ctx->pc = 0x2CBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE34u;
    // 0x2cbe38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2CBE34u, 0x2CBE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE3Cu;
label_2cbe3c:
    // 0x2cbe3c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x2cbe3cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cbe40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cbe40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cbe44: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2cbe44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2cbe48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cbe50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbe54: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2cbe54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2cbe58: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CBE58u;
    SET_GPR_U32(ctx, 31, 0x2CBE60u);
    ctx->pc = 0x2CBE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE58u;
    // 0x2cbe5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CBE58u, 0x2CBE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE60u;
label_2cbe60:
    // 0x2cbe60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cbe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cbe64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cbe68: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CBE68u;
    SET_GPR_U32(ctx, 31, 0x2CBE70u);
    ctx->pc = 0x2CBE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE68u;
    // 0x2cbe6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CBE68u, 0x2CBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE70u;
label_2cbe70:
    // 0x2cbe70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbe70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbe74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cbe74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cbe78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cbe78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbe7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cbe7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cbe80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cbe80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbe84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cbe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cbe88: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2cbe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cbe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE8Cu;
        // 0x2cbe90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBE94u;
    // 0x2cbe94: 0x0  nop
    ctx->pc = 0x2cbe94u;
    // NOP
label_2cbe98:
    // 0x2cbe98: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2cbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x2cbe9c: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x2cbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x2cbea0: 0xffb10218  sd          $s1, 0x218($sp)
    ctx->pc = 0x2cbea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 17));
    // 0x2cbea4: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x2cbea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x2cbea8: 0xffb30228  sd          $s3, 0x228($sp)
    ctx->pc = 0x2cbea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 19));
    // 0x2cbeac: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x2cbeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x2cbeb0: 0xffb50238  sd          $s5, 0x238($sp)
    ctx->pc = 0x2cbeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 21));
    // 0x2cbeb4: 0xffb60240  sd          $s6, 0x240($sp)
    ctx->pc = 0x2cbeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 22));
    // 0x2cbeb8: 0xffb70248  sd          $s7, 0x248($sp)
    ctx->pc = 0x2cbeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 23));
    // 0x2cbebc: 0xffbe0250  sd          $fp, 0x250($sp)
    ctx->pc = 0x2cbebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 30));
    // 0x2cbec0: 0xffbf0258  sd          $ra, 0x258($sp)
    ctx->pc = 0x2cbec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 31));
    // 0x2cbec4: 0x8c90008c  lw          $s0, 0x8C($a0)
    ctx->pc = 0x2cbec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2cbec8: 0x8c950058  lw          $s5, 0x58($a0)
    ctx->pc = 0x2cbec8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2cbecc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2cbeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2cbed0: 0x28430081  slti        $v1, $v0, 0x81
    ctx->pc = 0x2cbed0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2cbed4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBED4u;
    {
        const bool branch_taken_0x2cbed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBED4u;
        // 0x2cbed8: 0xac82008c  sw          $v0, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbed4) {
            ctx->pc = 0x2CBEE4u;
            goto label_2cbee4;
        }
    }
    ctx->pc = 0x2CBEDCu;
    // 0x2cbedc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2cbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2cbee0: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x2cbee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
label_2cbee4:
    // 0x2cbee4: 0xc0b2782  jal         func_2C9E08
    ctx->pc = 0x2CBEE4u;
    SET_GPR_U32(ctx, 31, 0x2CBEECu);
    ctx->pc = 0x2CBEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEE4u;
    // 0x2cbee8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E08u, 0x2CBEE4u, 0x2CBEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEECu;
label_2cbeec:
    // 0x2cbeec: 0x3c1180df  lui         $s1, 0x80DF
    ctx->pc = 0x2cbeecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32991 << 16));
    // 0x2cbef0: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x2CBEF0u;
    SET_GPR_U32(ctx, 31, 0x2CBEF8u);
    ctx->pc = 0x2CBEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEF0u;
    // 0x2cbef4: 0xafa20200  sw          $v0, 0x200($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x2CBEF0u, 0x2CBEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEF8u;
label_2cbef8:
    // 0x2cbef8: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2cbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x2cbefc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cbf00: 0x2454e770  addiu       $s4, $v0, -0x1890
    ctx->pc = 0x2cbf00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2cbf04: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2cbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2cbf08: 0x101e00  sll         $v1, $s0, 24
    ctx->pc = 0x2cbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2cbf0c: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x2cbf0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x2cbf10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cbf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cbf14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cbf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cbf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbf1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cbf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbf20: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cbf20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cbf24: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cbf24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cbf28: 0x62f025  or          $fp, $v1, $v0
    ctx->pc = 0x2cbf28u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2cbf2c: 0x347780ff  ori         $s7, $v1, 0x80FF
    ctx->pc = 0x2cbf2cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33023);
    // 0x2cbf30: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CBF30u;
    SET_GPR_U32(ctx, 31, 0x2CBF38u);
    ctx->pc = 0x2CBF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF30u;
    // 0x2cbf34: 0x3610ffff  ori         $s0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CBF30u, 0x2CBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF38u;
label_2cbf38:
    // 0x2cbf38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cbf3c: 0x3631cfcf  ori         $s1, $s1, 0xCFCF
    ctx->pc = 0x2cbf3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)53199);
    // 0x2cbf40: 0x2452e780  addiu       $s2, $v0, -0x1880
    ctx->pc = 0x2cbf40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x2cbf44: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cbf44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cbf48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf50: 0x235280b  movn        $a1, $s1, $s5
    ctx->pc = 0x2cbf50u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cbf54: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cbf58: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x2cbf5c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CBF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CBF64u);
    ctx->pc = 0x2CBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF5Cu;
    // 0x2cbf60: 0x35080002  ori         $t0, $t0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CBF5Cu, 0x2CBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF64u;
label_2cbf64:
    // 0x2cbf64: 0x2b31026  xor         $v0, $s5, $s3
    ctx->pc = 0x2cbf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 19));
    // 0x2cbf68: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cbf68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cbf6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf74: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x2cbf74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cbf78: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cbf7c: 0x240700a6  addiu       $a3, $zero, 0xA6
    ctx->pc = 0x2cbf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x2cbf80: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x2cbf80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x2cbf84: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CBF84u;
    SET_GPR_U32(ctx, 31, 0x2CBF8Cu);
    ctx->pc = 0x2CBF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF84u;
    // 0x2cbf88: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CBF84u, 0x2CBF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF8Cu;
label_2cbf8c:
    // 0x2cbf8c: 0x2b61026  xor         $v0, $s5, $s6
    ctx->pc = 0x2cbf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 22));
    // 0x2cbf90: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cbf90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cbf94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cbf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf9c: 0x222280b  movn        $a1, $s1, $v0
    ctx->pc = 0x2cbf9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x2cbfa0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2cbfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cbfa4: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x2cbfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2cbfa8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CBFA8u;
    SET_GPR_U32(ctx, 31, 0x2CBFB0u);
    ctx->pc = 0x2CBFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBFA8u;
    // 0x2cbfac: 0x35080006  ori         $t0, $t0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CBFA8u, 0x2CBFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFB0u;
label_2cbfb0:
    // 0x2cbfb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cbfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cbfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbfbc: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cbfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cbfc0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CBFC0u;
    SET_GPR_U32(ctx, 31, 0x2CBFC8u);
    ctx->pc = 0x2CBFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBFC0u;
    // 0x2cbfc4: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CBFC0u, 0x2CBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFC8u;
label_2cbfc8:
    // 0x2cbfc8: 0x12b30011  beq         $s5, $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CBFC8u;
    {
        const bool branch_taken_0x2cbfc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CBFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFC8u;
        // 0x2cbfcc: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfc8) {
            ctx->pc = 0x2CC010u;
            goto label_2cc010;
        }
    }
    ctx->pc = 0x2CBFD0u;
    // 0x2cbfd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBFD0u;
    {
        const bool branch_taken_0x2cbfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfd0) {
            ctx->pc = 0x2CBFE8u;
            goto label_2cbfe8;
        }
    }
    ctx->pc = 0x2CBFD8u;
    // 0x2cbfd8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBFD8u;
    {
        const bool branch_taken_0x2cbfd8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFD8u;
        // 0x2cbfdc: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfd8) {
            ctx->pc = 0x2CBFF8u;
            goto label_2cbff8;
        }
    }
    ctx->pc = 0x2CBFE0u;
    // 0x2cbfe0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CBFE0u;
    {
        const bool branch_taken_0x2cbfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFE0u;
        // 0x2cbfe4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfe0) {
            ctx->pc = 0x2CC044u;
            goto label_2cc044;
        }
    }
    ctx->pc = 0x2CBFE8u;
label_2cbfe8:
    // 0x2cbfe8: 0x12b60011  beq         $s5, $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CBFE8u;
    {
        const bool branch_taken_0x2cbfe8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 22));
        ctx->pc = 0x2CBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFE8u;
        // 0x2cbfec: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfe8) {
            ctx->pc = 0x2CC030u;
            goto label_2cc030;
        }
    }
    ctx->pc = 0x2CBFF0u;
    // 0x2cbff0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CBFF0u;
    {
        const bool branch_taken_0x2cbff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFF0u;
        // 0x2cbff4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbff0) {
            ctx->pc = 0x2CC044u;
            goto label_2cc044;
        }
    }
    ctx->pc = 0x2CBFF8u;
label_2cbff8:
    // 0x2cbff8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cbff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cbffc: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x2cbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x2cc000: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC000u;
    SET_GPR_U32(ctx, 31, 0x2CC008u);
    ctx->pc = 0x2CC004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC000u;
    // 0x2cc004: 0x34a50003  ori         $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC000u, 0x2CC008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC008u;
label_2cc008:
    // 0x2cc008: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CC008u;
    {
        const bool branch_taken_0x2cc008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC008u;
        // 0x2cc00c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc008) {
            ctx->pc = 0x2CC044u;
            goto label_2cc044;
        }
    }
    ctx->pc = 0x2CC010u;
label_2cc010:
    // 0x2cc010: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x2cc010u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x2cc014: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cc014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cc018: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x2cc018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x2cc01c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC01Cu;
    SET_GPR_U32(ctx, 31, 0x2CC024u);
    ctx->pc = 0x2CC020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC01Cu;
    // 0x2cc020: 0x34a50005  ori         $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC01Cu, 0x2CC024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC024u;
label_2cc024:
    // 0x2cc024: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC024u;
    {
        const bool branch_taken_0x2cc024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC024u;
        // 0x2cc028: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc024) {
            ctx->pc = 0x2CC044u;
            goto label_2cc044;
        }
    }
    ctx->pc = 0x2CC02Cu;
    // 0x2cc02c: 0x0  nop
    ctx->pc = 0x2cc02cu;
    // NOP
label_2cc030:
    // 0x2cc030: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cc034: 0x260443c0  addiu       $a0, $s0, 0x43C0
    ctx->pc = 0x2cc034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    // 0x2cc038: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC038u;
    SET_GPR_U32(ctx, 31, 0x2CC040u);
    ctx->pc = 0x2CC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC038u;
    // 0x2cc03c: 0x34a50007  ori         $a1, $a1, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC038u, 0x2CC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC040u;
label_2cc040:
    // 0x2cc040: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cc040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2cc044:
    // 0x2cc044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc048: 0x2452e770  addiu       $s2, $v0, -0x1890
    ctx->pc = 0x2cc048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2cc04c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2cc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2cc050: 0x2451e780  addiu       $s1, $v0, -0x1880
    ctx->pc = 0x2cc050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x2cc054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc058: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cc058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc05c: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc060: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cc060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cc064: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC064u;
    SET_GPR_U32(ctx, 31, 0x2CC06Cu);
    ctx->pc = 0x2CC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC064u;
    // 0x2cc068: 0x261043c0  addiu       $s0, $s0, 0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC064u, 0x2CC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC06Cu;
label_2cc06c:
    // 0x2cc06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc070: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2cc070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc074: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x2cc074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2cc078: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2cc078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2cc07c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC07Cu;
    SET_GPR_U32(ctx, 31, 0x2CC084u);
    ctx->pc = 0x2CC080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC07Cu;
    // 0x2cc080: 0x3c080003  lui         $t0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC07Cu, 0x2CC084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC084u;
label_2cc084:
    // 0x2cc084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc088: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x2cc088u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x2cc08c: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x2cc08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2cc090: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x2cc090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2cc094: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x2cc094u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x2cc098: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC098u;
    SET_GPR_U32(ctx, 31, 0x2CC0A0u);
    ctx->pc = 0x2CC09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC098u;
    // 0x2cc09c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC098u, 0x2CC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0A0u;
label_2cc0a0:
    // 0x2cc0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cc0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cc0a8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC0A8u;
    SET_GPR_U32(ctx, 31, 0x2CC0B0u);
    ctx->pc = 0x2CC0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0A8u;
    // 0x2cc0ac: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC0A8u, 0x2CC0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0B0u;
label_2cc0b0:
    // 0x2cc0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0b4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cc0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cc0b8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC0B8u;
    SET_GPR_U32(ctx, 31, 0x2CC0C0u);
    ctx->pc = 0x2CC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0B8u;
    // 0x2cc0bc: 0x34a50009  ori         $a1, $a1, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC0B8u, 0x2CC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0C0u;
label_2cc0c0:
    // 0x2cc0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0c4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2cc0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2cc0c8: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2cc0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2cc0cc: 0x34a50019  ori         $a1, $a1, 0x19
    ctx->pc = 0x2cc0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25);
    // 0x2cc0d0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC0D0u;
    SET_GPR_U32(ctx, 31, 0x2CC0D8u);
    ctx->pc = 0x2CC0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0D0u;
    // 0x2cc0d4: 0x2610e790  addiu       $s0, $s0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC0D0u, 0x2CC0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0D8u;
label_2cc0d8:
    // 0x2cc0d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cc0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0e0: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2cc0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc0e4: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cc0e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cc0e8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC0E8u;
    SET_GPR_U32(ctx, 31, 0x2CC0F0u);
    ctx->pc = 0x2CC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0E8u;
    // 0x2cc0ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC0E8u, 0x2CC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0F0u;
label_2cc0f0:
    // 0x2cc0f0: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2cc0f4: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x2CC0F4u;
    SET_GPR_U32(ctx, 31, 0x2CC0FCu);
    ctx->pc = 0x2CC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC0F4u;
    // 0x2cc0f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x2CC0F4u, 0x2CC0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0FCu;
label_2cc0fc:
    // 0x2cc0fc: 0x2406024e  addiu       $a2, $zero, 0x24E
    ctx->pc = 0x2cc0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x2cc100: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2cc100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc104: 0x24070033  addiu       $a3, $zero, 0x33
    ctx->pc = 0x2cc104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2cc108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc10c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC10Cu;
    SET_GPR_U32(ctx, 31, 0x2CC114u);
    ctx->pc = 0x2CC110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC10Cu;
    // 0x2cc110: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC10Cu, 0x2CC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC114u;
label_2cc114:
    // 0x2cc114: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2cc118: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x2CC118u;
    SET_GPR_U32(ctx, 31, 0x2CC120u);
    ctx->pc = 0x2CC11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC118u;
    // 0x2cc11c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x2CC118u, 0x2CC120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC120u;
label_2cc120:
    // 0x2cc120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc124: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2cc124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc128: 0x2406024e  addiu       $a2, $zero, 0x24E
    ctx->pc = 0x2cc128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
    // 0x2cc12c: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2cc12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cc130: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CC130u;
    SET_GPR_U32(ctx, 31, 0x2CC138u);
    ctx->pc = 0x2CC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC130u;
    // 0x2cc134: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CC130u, 0x2CC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC138u;
label_2cc138:
    // 0x2cc138: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x2cc138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2cc13c: 0xdfb10218  ld          $s1, 0x218($sp)
    ctx->pc = 0x2cc13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2cc140: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x2cc140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2cc144: 0xdfb30228  ld          $s3, 0x228($sp)
    ctx->pc = 0x2cc144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2cc148: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x2cc148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2cc14c: 0xdfb50238  ld          $s5, 0x238($sp)
    ctx->pc = 0x2cc14cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2cc150: 0xdfb60240  ld          $s6, 0x240($sp)
    ctx->pc = 0x2cc150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2cc154: 0xdfb70248  ld          $s7, 0x248($sp)
    ctx->pc = 0x2cc154u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2cc158: 0xdfbe0250  ld          $fp, 0x250($sp)
    ctx->pc = 0x2cc158u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2cc15c: 0xdfbf0258  ld          $ra, 0x258($sp)
    ctx->pc = 0x2cc15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2cc160: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC160u;
        // 0x2cc164: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC168u;
}
