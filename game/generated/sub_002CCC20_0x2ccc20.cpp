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

// Function: sub_002CCC20
// Address: 0x2ccc20 - 0x2ccff8
void sub_002CCC20_0x2ccc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCC20_0x2ccc20");
#endif

    switch (ctx->pc) {
        case 0x2ccc80u: goto label_2ccc80;
        case 0x2ccc88u: goto label_2ccc88;
        case 0x2ccca0u: goto label_2ccca0;
        case 0x2cccb0u: goto label_2cccb0;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccc8u: goto label_2cccc8;
        case 0x2cccd4u: goto label_2cccd4;
        case 0x2ccce4u: goto label_2ccce4;
        case 0x2ccd0cu: goto label_2ccd0c;
        case 0x2ccd24u: goto label_2ccd24;
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd50u: goto label_2ccd50;
        case 0x2ccd5cu: goto label_2ccd5c;
        case 0x2ccdb0u: goto label_2ccdb0;
        case 0x2ccdbcu: goto label_2ccdbc;
        case 0x2ccdccu: goto label_2ccdcc;
        case 0x2ccdd8u: goto label_2ccdd8;
        case 0x2cce00u: goto label_2cce00;
        case 0x2cce10u: goto label_2cce10;
        case 0x2cce28u: goto label_2cce28;
        case 0x2cce40u: goto label_2cce40;
        case 0x2cce48u: goto label_2cce48;
        case 0x2cce58u: goto label_2cce58;
        case 0x2cce6cu: goto label_2cce6c;
        case 0x2cce88u: goto label_2cce88;
        case 0x2ccec4u: goto label_2ccec4;
        case 0x2ccee0u: goto label_2ccee0;
        case 0x2ccef8u: goto label_2ccef8;
        case 0x2ccf10u: goto label_2ccf10;
        case 0x2ccf18u: goto label_2ccf18;
        case 0x2ccf28u: goto label_2ccf28;
        case 0x2ccf38u: goto label_2ccf38;
        case 0x2ccf40u: goto label_2ccf40;
        case 0x2ccf4cu: goto label_2ccf4c;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf84u: goto label_2ccf84;
        case 0x2ccf8cu: goto label_2ccf8c;
        case 0x2ccfa8u: goto label_2ccfa8;
        case 0x2ccfccu: goto label_2ccfcc;
        default: break;
    }

    ctx->pc = 0x2ccc20u;

    // 0x2ccc20: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2ccc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2ccc24: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2ccc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2ccc28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ccc28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc2c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2ccc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2ccc30: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x2ccc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x2ccc34: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2ccc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2ccc38: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2ccc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2ccc3c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2ccc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2ccc40: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2ccc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2ccc44: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2ccc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2ccc48: 0xe7b50140  swc1        $f21, 0x140($sp)
    ctx->pc = 0x2ccc48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2ccc4c: 0xe7b40138  swc1        $f20, 0x138($sp)
    ctx->pc = 0x2ccc4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2ccc50: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ccc54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCC54u;
    {
        const bool branch_taken_0x2ccc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc54) {
            ctx->pc = 0x2CCC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC54u;
            // 0x2ccc58: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCC70u;
            goto label_2ccc70;
        }
    }
    ctx->pc = 0x2CCC5Cu;
    // 0x2ccc5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ccc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ccc60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ccc64: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCC64u;
    {
        const bool branch_taken_0x2ccc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC64u;
        // 0x2ccc68: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc64) {
            ctx->pc = 0x2CCC78u;
            goto label_2ccc78;
        }
    }
    ctx->pc = 0x2CCC6Cu;
    // 0x2ccc6c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ccc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ccc70:
    // 0x2ccc70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ccc70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccc74: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ccc74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ccc78:
    // 0x2ccc78: 0xc08661c  jal         func_219870
    ctx->pc = 0x2CCC78u;
    SET_GPR_U32(ctx, 31, 0x2CCC80u);
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x2CCC78u, 0x2CCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC80u;
label_2ccc80:
    // 0x2ccc80: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CCC80u;
    SET_GPR_U32(ctx, 31, 0x2CCC88u);
    ctx->pc = 0x2CCC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC80u;
    // 0x2ccc84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CCC80u, 0x2CCC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCC88u;
label_2ccc88:
    // 0x2ccc88: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ccc8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccc90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ccc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ccc94: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x2ccc94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ccc98: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CCC98u;
    SET_GPR_U32(ctx, 31, 0x2CCCA0u);
    ctx->pc = 0x2CCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCC98u;
    // 0x2ccc9c: 0x8e350008  lw          $s5, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CCC98u, 0x2CCCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCA0u;
label_2ccca0:
    // 0x2ccca0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ccca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ccca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccca8: 0xc0b354e  jal         func_2CD538
    ctx->pc = 0x2CCCA8u;
    SET_GPR_U32(ctx, 31, 0x2CCCB0u);
    ctx->pc = 0x2CCCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCA8u;
    // 0x2cccac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD538u, 0x2CCCA8u, 0x2CCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCB0u;
label_2cccb0:
    // 0x2cccb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccb4: 0xc0b3656  jal         func_2CD958
    ctx->pc = 0x2CCCB4u;
    SET_GPR_U32(ctx, 31, 0x2CCCBCu);
    ctx->pc = 0x2CCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCB4u;
    // 0x2cccb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD958u, 0x2CCCB4u, 0x2CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCBCu;
label_2cccbc:
    // 0x2cccbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccc0: 0xc0b37aa  jal         func_2CDEA8
    ctx->pc = 0x2CCCC0u;
    SET_GPR_U32(ctx, 31, 0x2CCCC8u);
    ctx->pc = 0x2CCCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCC0u;
    // 0x2cccc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEA8u, 0x2CCCC0u, 0x2CCCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCC8u;
label_2cccc8:
    // 0x2cccc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccccc: 0xc0b36e6  jal         func_2CDB98
    ctx->pc = 0x2CCCCCu;
    SET_GPR_U32(ctx, 31, 0x2CCCD4u);
    ctx->pc = 0x2CCCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCCCu;
    // 0x2cccd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDB98u, 0x2CCCCCu, 0x2CCCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCD4u;
label_2cccd4:
    // 0x2cccd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2cccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2cccd8: 0x24a5e6a0  addiu       $a1, $a1, -0x1960
    ctx->pc = 0x2cccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    // 0x2cccdc: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCCDCu;
    SET_GPR_U32(ctx, 31, 0x2CCCE4u);
    ctx->pc = 0x2CCCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCDCu;
    // 0x2ccce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCCDCu, 0x2CCCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCE4u;
label_2ccce4:
    // 0x2ccce4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCCE4u;
    {
        const bool branch_taken_0x2ccce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccce4) {
            ctx->pc = 0x2CCD04u;
            goto label_2ccd04;
        }
    }
    ctx->pc = 0x2CCCECu;
    // 0x2cccec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2cccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cccf0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCCF0u;
    {
        const bool branch_taken_0x2cccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCF0u;
        // 0x2cccf4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccf0) {
            ctx->pc = 0x2CCD04u;
            goto label_2ccd04;
        }
    }
    ctx->pc = 0x2CCCF8u;
    // 0x2cccf8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2cccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2cccfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ccd00: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2ccd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2ccd04:
    // 0x2ccd04: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x2CCD04u;
    SET_GPR_U32(ctx, 31, 0x2CCD0Cu);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x2CCD04u, 0x2CCD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD0Cu;
label_2ccd0c:
    // 0x2ccd0c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CCD0Cu;
    {
        const bool branch_taken_0x2ccd0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd0c) {
            ctx->pc = 0x2CCD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD0Cu;
            // 0x2ccd10: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCD30u;
            goto label_2ccd30;
        }
    }
    ctx->pc = 0x2CCD14u;
    // 0x2ccd14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ccd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ccd18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCD1Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD24u);
    ctx->pc = 0x2CCD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD1Cu;
    // 0x2ccd20: 0x24a5e8d8  addiu       $a1, $a1, -0x1728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCD1Cu, 0x2CCD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD24u;
label_2ccd24:
    // 0x2ccd24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ccd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ccd28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCD28u;
    {
        const bool branch_taken_0x2ccd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD28u;
        // 0x2ccd2c: 0x24a5e8e8  addiu       $a1, $a1, -0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd28) {
            ctx->pc = 0x2CCD44u;
            goto label_2ccd44;
        }
    }
    ctx->pc = 0x2CCD30u;
label_2ccd30:
    // 0x2ccd30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd34: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCD34u;
    SET_GPR_U32(ctx, 31, 0x2CCD3Cu);
    ctx->pc = 0x2CCD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD34u;
    // 0x2ccd38: 0x24a5e900  addiu       $a1, $a1, -0x1700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCD34u, 0x2CCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD3Cu;
label_2ccd3c:
    // 0x2ccd3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ccd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ccd40: 0x24a5e910  addiu       $a1, $a1, -0x16F0
    ctx->pc = 0x2ccd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961424));
label_2ccd44:
    // 0x2ccd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd48: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCD48u;
    SET_GPR_U32(ctx, 31, 0x2CCD50u);
    ctx->pc = 0x2CCD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD48u;
    // 0x2ccd4c: 0x8c540004  lw          $s4, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCD48u, 0x2CCD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD50u;
label_2ccd50:
    // 0x2ccd50: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2ccd50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ccd54: 0xc0b382e  jal         func_2CE0B8
    ctx->pc = 0x2CCD54u;
    SET_GPR_U32(ctx, 31, 0x2CCD5Cu);
    ctx->pc = 0x2CCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCD54u;
    // 0x2ccd58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0B8u, 0x2CCD54u, 0x2CCD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCD5Cu;
label_2ccd5c:
    // 0x2ccd5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCD5Cu;
    {
        const bool branch_taken_0x2ccd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD5Cu;
        // 0x2ccd60: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd5c) {
            ctx->pc = 0x2CCD70u;
            goto label_2ccd70;
        }
    }
    ctx->pc = 0x2CCD64u;
    // 0x2ccd64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCD64u;
    {
        const bool branch_taken_0x2ccd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD64u;
        // 0x2ccd68: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd64) {
            ctx->pc = 0x2CCD78u;
            goto label_2ccd78;
        }
    }
    ctx->pc = 0x2CCD6Cu;
    // 0x2ccd6c: 0x0  nop
    ctx->pc = 0x2ccd6cu;
    // NOP
label_2ccd70:
    // 0x2ccd70: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2ccd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2ccd74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ccd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ccd78:
    // 0x2ccd78: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2ccd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x2ccd7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ccd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ccd80: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2ccd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ccd84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCD84u;
    {
        const bool branch_taken_0x2ccd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD84u;
        // 0x2ccd88: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd84) {
            ctx->pc = 0x2CCD98u;
            goto label_2ccd98;
        }
    }
    ctx->pc = 0x2CCD8Cu;
    // 0x2ccd8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ccd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ccd90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCD90u;
    {
        const bool branch_taken_0x2ccd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD90u;
        // 0x2ccd94: 0x2451e928  addiu       $s1, $v0, -0x16D8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd90) {
            ctx->pc = 0x2CCDA4u;
            goto label_2ccda4;
        }
    }
    ctx->pc = 0x2CCD98u;
label_2ccd98:
    // 0x2ccd98: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2ccd98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2ccd9c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2ccd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ccda0: 0x8e31d580  lw          $s1, -0x2A80($s1)
    ctx->pc = 0x2ccda0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956416)));
label_2ccda4:
    // 0x2ccda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccda8: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCDA8u;
    SET_GPR_U32(ctx, 31, 0x2CCDB0u);
    ctx->pc = 0x2CCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDA8u;
    // 0x2ccdac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCDA8u, 0x2CCDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDB0u;
label_2ccdb0:
    // 0x2ccdb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ccdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdb4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2CCDB4u;
    SET_GPR_U32(ctx, 31, 0x2CCDBCu);
    ctx->pc = 0x2CCDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDB4u;
    // 0x2ccdb8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2CCDB4u, 0x2CCDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDBCu;
label_2ccdbc:
    // 0x2ccdbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ccdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ccdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdc4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCDC4u;
    SET_GPR_U32(ctx, 31, 0x2CCDCCu);
    ctx->pc = 0x2CCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDC4u;
    // 0x2ccdc8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCDC4u, 0x2CCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDCCu;
label_2ccdcc:
    // 0x2ccdcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ccdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccdd0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2CCDD0u;
    SET_GPR_U32(ctx, 31, 0x2CCDD8u);
    ctx->pc = 0x2CCDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDD0u;
    // 0x2ccdd4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2CCDD0u, 0x2CCDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCDD8u;
label_2ccdd8:
    // 0x2ccdd8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ccdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ccddc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ccddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccde0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2ccde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2ccde4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ccde4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ccde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ccde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdec: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2ccdecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2ccdf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ccdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccdf4: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x2ccdf4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ccdf8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CCDF8u;
    SET_GPR_U32(ctx, 31, 0x2CCE00u);
    ctx->pc = 0x2CCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCDF8u;
    // 0x2ccdfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CCDF8u, 0x2CCE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE00u;
label_2cce00:
    // 0x2cce00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cce00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cce04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cce08: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CCE08u;
    SET_GPR_U32(ctx, 31, 0x2CCE10u);
    ctx->pc = 0x2CCE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE08u;
    // 0x2cce0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CCE08u, 0x2CCE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE10u;
label_2cce10:
    // 0x2cce10: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2cce10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2cce14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cce14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cce18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cce18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cce1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce20: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CCE20u;
    SET_GPR_U32(ctx, 31, 0x2CCE28u);
    ctx->pc = 0x2CCE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE20u;
    // 0x2cce24: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CCE20u, 0x2CCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE28u;
label_2cce28:
    // 0x2cce28: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x2cce28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x2cce2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cce2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cce30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cce34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cce38: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2CCE38u;
    SET_GPR_U32(ctx, 31, 0x2CCE40u);
    ctx->pc = 0x2CCE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE38u;
    // 0x2cce3c: 0x460cab01  sub.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2CCE38u, 0x2CCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE40u;
label_2cce40:
    // 0x2cce40: 0xc0b385c  jal         func_2CE170
    ctx->pc = 0x2CCE40u;
    SET_GPR_U32(ctx, 31, 0x2CCE48u);
    ctx->pc = 0x2CCE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE40u;
    // 0x2cce44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE170u, 0x2CCE40u, 0x2CCE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE48u;
label_2cce48:
    // 0x2cce48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCE48u;
    {
        const bool branch_taken_0x2cce48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE48u;
        // 0x2cce4c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce48) {
            ctx->pc = 0x2CCE60u;
            goto label_2cce60;
        }
    }
    ctx->pc = 0x2CCE50u;
    // 0x2cce50: 0xc0b382e  jal         func_2CE0B8
    ctx->pc = 0x2CCE50u;
    SET_GPR_U32(ctx, 31, 0x2CCE58u);
    ctx->pc = 0x2CCE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE50u;
    // 0x2cce54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0B8u, 0x2CCE50u, 0x2CCE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE58u;
label_2cce58:
    // 0x2cce58: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CCE58u;
    {
        const bool branch_taken_0x2cce58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE58u;
        // 0x2cce5c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce58) {
            ctx->pc = 0x2CCEA0u;
            goto label_2ccea0;
        }
    }
    ctx->pc = 0x2CCE60u;
label_2cce60:
    // 0x2cce60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cce60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce64: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCE64u;
    SET_GPR_U32(ctx, 31, 0x2CCE6Cu);
    ctx->pc = 0x2CCE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE64u;
    // 0x2cce68: 0x24a5e938  addiu       $a1, $a1, -0x16C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCE64u, 0x2CCE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE6Cu;
label_2cce6c:
    // 0x2cce6c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x2cce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2cce70: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2cce70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2cce74: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2cce74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cce78: 0x8ca5d580  lw          $a1, -0x2A80($a1)
    ctx->pc = 0x2cce78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294956416)));
    // 0x2cce7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cce80: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2CCE80u;
    SET_GPR_U32(ctx, 31, 0x2CCE88u);
    ctx->pc = 0x2CCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCE80u;
    // 0x2cce84: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2CCE80u, 0x2CCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE88u;
label_2cce88:
    // 0x2cce88: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cce8c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2cce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2cce90: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x2cce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2cce94: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2cce94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2cce98: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2cce98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x2cce9c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x2cce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_2ccea0:
    // 0x2ccea0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ccea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ccea4: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2ccea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ccea8: 0x2451e770  addiu       $s1, $v0, -0x1890
    ctx->pc = 0x2ccea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961008));
    // 0x2cceac: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2cceacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2cceb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cceb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cceb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccebc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCEBCu;
    SET_GPR_U32(ctx, 31, 0x2CCEC4u);
    ctx->pc = 0x2CCEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEBCu;
    // 0x2ccec0: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCEBCu, 0x2CCEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEC4u;
label_2ccec4:
    // 0x2ccec4: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccec8: 0x261043d0  addiu       $s0, $s0, 0x43D0
    ctx->pc = 0x2ccec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17360));
    // 0x2ccecc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2cceccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cced0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cced0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2cced4: 0x34c60024  ori         $a2, $a2, 0x24
    ctx->pc = 0x2cced4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36);
    // 0x2cced8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCED8u;
    SET_GPR_U32(ctx, 31, 0x2CCEE0u);
    ctx->pc = 0x2CCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCED8u;
    // 0x2ccedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCED8u, 0x2CCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEE0u;
label_2ccee0:
    // 0x2ccee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccee4: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccee8: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ccee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2cceec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2cceecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccef0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCEF0u;
    SET_GPR_U32(ctx, 31, 0x2CCEF8u);
    ctx->pc = 0x2CCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCEF0u;
    // 0x2ccef4: 0x34c60027  ori         $a2, $a2, 0x27 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCEF0u, 0x2CCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCEF8u;
label_2ccef8:
    // 0x2ccef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccefc: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccf00: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2ccf00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2ccf04: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccf08: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCF08u;
    SET_GPR_U32(ctx, 31, 0x2CCF10u);
    ctx->pc = 0x2CCF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF08u;
    // 0x2ccf0c: 0x34c60028  ori         $a2, $a2, 0x28 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCF08u, 0x2CCF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF10u;
label_2ccf10:
    // 0x2ccf10: 0xc0b385c  jal         func_2CE170
    ctx->pc = 0x2CCF10u;
    SET_GPR_U32(ctx, 31, 0x2CCF18u);
    ctx->pc = 0x2CCF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF10u;
    // 0x2ccf14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE170u, 0x2CCF10u, 0x2CCF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF18u;
label_2ccf18:
    // 0x2ccf18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCF18u;
    {
        const bool branch_taken_0x2ccf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf18) {
            ctx->pc = 0x2CCF30u;
            goto label_2ccf30;
        }
    }
    ctx->pc = 0x2CCF20u;
    // 0x2ccf20: 0xc0b382e  jal         func_2CE0B8
    ctx->pc = 0x2CCF20u;
    SET_GPR_U32(ctx, 31, 0x2CCF28u);
    ctx->pc = 0x2CCF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF20u;
    // 0x2ccf24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE0B8u, 0x2CCF20u, 0x2CCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF28u;
label_2ccf28:
    // 0x2ccf28: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CCF28u;
    {
        const bool branch_taken_0x2ccf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF28u;
        // 0x2ccf2c: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf28) {
            ctx->pc = 0x2CCFD0u;
            goto label_2ccfd0;
        }
    }
    ctx->pc = 0x2CCF30u;
label_2ccf30:
    // 0x2ccf30: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x2CCF30u;
    SET_GPR_U32(ctx, 31, 0x2CCF38u);
    ctx->pc = 0x2CCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF30u;
    // 0x2ccf34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x2CCF30u, 0x2CCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF38u;
label_2ccf38:
    // 0x2ccf38: 0xc08e492  jal         func_239248
    ctx->pc = 0x2CCF38u;
    SET_GPR_U32(ctx, 31, 0x2CCF40u);
    ctx->pc = 0x2CCF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF38u;
    // 0x2ccf3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239248u, 0x2CCF38u, 0x2CCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF40u;
label_2ccf40:
    // 0x2ccf40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ccf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf44: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x2CCF44u;
    SET_GPR_U32(ctx, 31, 0x2CCF4Cu);
    ctx->pc = 0x2CCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF44u;
    // 0x2ccf48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x2CCF44u, 0x2CCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF4Cu;
label_2ccf4c:
    // 0x2ccf4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ccf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ccf54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccf58: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2ccf58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ccf5c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF64u);
    ctx->pc = 0x2CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF5Cu;
    // 0x2ccf60: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCF5Cu, 0x2CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF64u;
label_2ccf64:
    // 0x2ccf64: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ccf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2ccf68: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccf68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccf6c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2ccf6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf70: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccf70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccf74: 0x240600b9  addiu       $a2, $zero, 0xB9
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x2ccf78: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x2ccf78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x2ccf7c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCF7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF84u);
    ctx->pc = 0x2CCF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF7Cu;
    // 0x2ccf80: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCF7Cu, 0x2CCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF84u;
label_2ccf84:
    // 0x2ccf84: 0xc0b27a2  jal         func_2C9E88
    ctx->pc = 0x2CCF84u;
    SET_GPR_U32(ctx, 31, 0x2CCF8Cu);
    ctx->pc = 0x2CCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF84u;
    // 0x2ccf88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E88u, 0x2CCF84u, 0x2CCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF8Cu;
label_2ccf8c:
    // 0x2ccf8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ccf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ccf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccf94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccf98: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2ccf98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ccf9c: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2ccf9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2ccfa0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCFA0u;
    SET_GPR_U32(ctx, 31, 0x2CCFA8u);
    ctx->pc = 0x2CCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFA0u;
    // 0x2ccfa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCFA0u, 0x2CCFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFA8u;
label_2ccfa8:
    // 0x2ccfa8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ccfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2ccfac: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2ccfacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2ccfb0: 0x3c0580ff  lui         $a1, 0x80FF
    ctx->pc = 0x2ccfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33023 << 16));
    // 0x2ccfb4: 0x1104023  subu        $t0, $t0, $s0
    ctx->pc = 0x2ccfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2ccfb8: 0x2484e780  addiu       $a0, $a0, -0x1880
    ctx->pc = 0x2ccfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961024));
    // 0x2ccfbc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ccfbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ccfc0: 0x2406008e  addiu       $a2, $zero, 0x8E
    ctx->pc = 0x2ccfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x2ccfc4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2CCFC4u;
    SET_GPR_U32(ctx, 31, 0x2CCFCCu);
    ctx->pc = 0x2CCFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCFC4u;
    // 0x2ccfc8: 0x240700bb  addiu       $a3, $zero, 0xBB (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2CCFC4u, 0x2CCFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCFCCu;
label_2ccfcc:
    // 0x2ccfcc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2ccfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2ccfd0:
    // 0x2ccfd0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2ccfd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2ccfd4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2ccfd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ccfd8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2ccfd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ccfdc: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2ccfdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ccfe0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2ccfe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2ccfe4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2ccfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2ccfe8: 0xc7b50140  lwc1        $f21, 0x140($sp)
    ctx->pc = 0x2ccfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ccfec: 0xc7b40138  lwc1        $f20, 0x138($sp)
    ctx->pc = 0x2ccfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ccff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFF0u;
        // 0x2ccff4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCFF8u;
}
