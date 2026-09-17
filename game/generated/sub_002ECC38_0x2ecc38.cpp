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

// Function: sub_002ECC38
// Address: 0x2ecc38 - 0x2ecd98
void sub_002ECC38_0x2ecc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECC38_0x2ecc38");
#endif

    switch (ctx->pc) {
        case 0x2ecc84u: goto label_2ecc84;
        case 0x2eccc4u: goto label_2eccc4;
        case 0x2ecd04u: goto label_2ecd04;
        case 0x2ecd44u: goto label_2ecd44;
        case 0x2ecd84u: goto label_2ecd84;
        default: break;
    }

    ctx->pc = 0x2ecc38u;

    // 0x2ecc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ecc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ecc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ecc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ecc48: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x2ecc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2ecc4c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ecc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecc50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECC50u;
    {
        const bool branch_taken_0x2ecc50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc50) {
            ctx->pc = 0x2ECC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC50u;
            // 0x2ecc54: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECC6Cu;
            goto label_2ecc6c;
        }
    }
    ctx->pc = 0x2ECC58u;
    // 0x2ecc58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ecc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ecc5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ecc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ecc60: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECC60u;
    {
        const bool branch_taken_0x2ecc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecc60) {
            ctx->pc = 0x2ECC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC60u;
            // 0x2ecc64: 0x3c060004  lui         $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECC78u;
            goto label_2ecc78;
        }
    }
    ctx->pc = 0x2ECC68u;
    // 0x2ecc68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ecc68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ecc6c:
    // 0x2ecc6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ecc70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ecc74: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_2ecc78:
    // 0x2ecc78: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2ecc7c: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2ECC7Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC84u);
    ctx->pc = 0x2ECC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC7Cu;
    // 0x2ecc80: 0x34c60005  ori         $a2, $a2, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2ECC7Cu, 0x2ECC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC84u;
label_2ecc84:
    // 0x2ecc84: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x2ecc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2ecc88: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ecc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecc8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECC8Cu;
    {
        const bool branch_taken_0x2ecc8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc8c) {
            ctx->pc = 0x2ECC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC8Cu;
            // 0x2ecc90: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCA8u;
            goto label_2ecca8;
        }
    }
    ctx->pc = 0x2ECC94u;
    // 0x2ecc94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ecc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ecc98: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ecc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ecc9c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECC9Cu;
    {
        const bool branch_taken_0x2ecc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecc9c) {
            ctx->pc = 0x2ECCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC9Cu;
            // 0x2ecca0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCB4u;
            goto label_2eccb4;
        }
    }
    ctx->pc = 0x2ECCA4u;
    // 0x2ecca4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ecca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ecca8:
    // 0x2ecca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eccacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eccb0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2eccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_2eccb4:
    // 0x2eccb4: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2eccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x2eccb8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2eccb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2eccbc: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2ECCBCu;
    SET_GPR_U32(ctx, 31, 0x2ECCC4u);
    ctx->pc = 0x2ECCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCBCu;
    // 0x2eccc0: 0x34c60006  ori         $a2, $a2, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2ECCBCu, 0x2ECCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCC4u;
label_2eccc4:
    // 0x2eccc4: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x2eccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2eccc8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecccc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECCCCu;
    {
        const bool branch_taken_0x2ecccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecccc) {
            ctx->pc = 0x2ECCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECCCCu;
            // 0x2eccd0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCE8u;
            goto label_2ecce8;
        }
    }
    ctx->pc = 0x2ECCD4u;
    // 0x2eccd4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eccd8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eccdc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECCDCu;
    {
        const bool branch_taken_0x2eccdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eccdc) {
            ctx->pc = 0x2ECCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECCDCu;
            // 0x2ecce0: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECCF4u;
            goto label_2eccf4;
        }
    }
    ctx->pc = 0x2ECCE4u;
    // 0x2ecce4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ecce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ecce8:
    // 0x2ecce8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccec: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eccecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2eccf0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2eccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_2eccf4:
    // 0x2eccf4: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2eccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x2eccf8: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x2eccf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x2eccfc: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2ECCFCu;
    SET_GPR_U32(ctx, 31, 0x2ECD04u);
    ctx->pc = 0x2ECD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCFCu;
    // 0x2ecd00: 0x34c60007  ori         $a2, $a2, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2ECCFCu, 0x2ECD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD04u;
label_2ecd04:
    // 0x2ecd04: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2ecd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2ecd08: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ecd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecd0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD0Cu;
    {
        const bool branch_taken_0x2ecd0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd0c) {
            ctx->pc = 0x2ECD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD0Cu;
            // 0x2ecd10: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD28u;
            goto label_2ecd28;
        }
    }
    ctx->pc = 0x2ECD14u;
    // 0x2ecd14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ecd18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ecd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ecd1c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECD1Cu;
    {
        const bool branch_taken_0x2ecd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecd1c) {
            ctx->pc = 0x2ECD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD1Cu;
            // 0x2ecd20: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD34u;
            goto label_2ecd34;
        }
    }
    ctx->pc = 0x2ECD24u;
    // 0x2ecd24: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ecd24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ecd28:
    // 0x2ecd28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ecd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ecd30: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_2ecd34:
    // 0x2ecd34: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2ecd34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x2ecd38: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x2ecd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2ecd3c: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2ECD3Cu;
    SET_GPR_U32(ctx, 31, 0x2ECD44u);
    ctx->pc = 0x2ECD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD3Cu;
    // 0x2ecd40: 0x34c60008  ori         $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2ECD3Cu, 0x2ECD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD44u;
label_2ecd44:
    // 0x2ecd44: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x2ecd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ecd48: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ecd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ecd4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD4Cu;
    {
        const bool branch_taken_0x2ecd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd4c) {
            ctx->pc = 0x2ECD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD4Cu;
            // 0x2ecd50: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD68u;
            goto label_2ecd68;
        }
    }
    ctx->pc = 0x2ECD54u;
    // 0x2ecd54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ecd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ecd58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ecd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ecd5c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECD5Cu;
    {
        const bool branch_taken_0x2ecd5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecd5c) {
            ctx->pc = 0x2ECD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD5Cu;
            // 0x2ecd60: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD74u;
            goto label_2ecd74;
        }
    }
    ctx->pc = 0x2ECD64u;
    // 0x2ecd64: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ecd64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ecd68:
    // 0x2ecd68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ecd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd6c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ecd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ecd70: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2ecd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_2ecd74:
    // 0x2ecd74: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x2ecd74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x2ecd78: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x2ecd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x2ecd7c: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x2ECD7Cu;
    SET_GPR_U32(ctx, 31, 0x2ECD84u);
    ctx->pc = 0x2ECD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD7Cu;
    // 0x2ecd80: 0x34c60009  ori         $a2, $a2, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x2ECD7Cu, 0x2ECD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD84u;
label_2ecd84:
    // 0x2ecd84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecd88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ecd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD8Cu;
        // 0x2ecd90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECD94u;
    // 0x2ecd94: 0x0  nop
    ctx->pc = 0x2ecd94u;
    // NOP
    ctx->pc = 0x2ecd98u;
}
