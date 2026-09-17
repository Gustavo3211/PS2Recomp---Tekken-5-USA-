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

// Function: sub_0050AC28
// Address: 0x50ac28 - 0x50aee8
void sub_0050AC28_0x50ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AC28_0x50ac28");
#endif

    switch (ctx->pc) {
        case 0x50ac70u: goto label_50ac70;
        case 0x50ac78u: goto label_50ac78;
        case 0x50acd0u: goto label_50acd0;
        case 0x50ad38u: goto label_50ad38;
        case 0x50ad48u: goto label_50ad48;
        case 0x50ad60u: goto label_50ad60;
        case 0x50adb8u: goto label_50adb8;
        case 0x50adf8u: goto label_50adf8;
        case 0x50aea0u: goto label_50aea0;
        case 0x50aeb0u: goto label_50aeb0;
        case 0x50aeb8u: goto label_50aeb8;
        case 0x50aec8u: goto label_50aec8;
        default: break;
    }

    ctx->pc = 0x50ac28u;

label_50ac28:
    // 0x50ac28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x50ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x50ac2c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50ac30: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x50ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x50ac34: 0x2450f080  addiu       $s0, $v0, -0xF80
    ctx->pc = 0x50ac34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50ac38: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x50ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x50ac3c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x50ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x50ac40: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x50ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x50ac44: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x50ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x50ac48: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x50ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x50ac4c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x50ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x50ac50: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x50ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x50ac54: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x50ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x50ac58: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x50ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x50ac5c: 0x86024cc2  lh          $v0, 0x4CC2($s0)
    ctx->pc = 0x50ac5cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x903D42u));
    // 0x50ac60: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x50AC60u;
    {
        const bool branch_taken_0x50ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ac60) {
            ctx->pc = 0x50AC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x50AC60u;
            // 0x50ac64: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x50AE6Cu;
            goto label_50ae6c;
        }
    }
    ctx->pc = 0x50AC68u;
    // 0x50ac68: 0xc143b8c  jal         func_50EE30
    ctx->pc = 0x50AC68u;
    SET_GPR_U32(ctx, 31, 0x50AC70u);
    ctx->pc = 0x50AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AC68u;
    // 0x50ac6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50EE30u, 0x50AC68u, 0x50AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AC70u;
label_50ac70:
    // 0x50ac70: 0xc143b90  jal         func_50EE40
    ctx->pc = 0x50AC70u;
    SET_GPR_U32(ctx, 31, 0x50AC78u);
    ctx->pc = 0x50AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AC70u;
    // 0x50ac74: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50EE40u, 0x50AC70u, 0x50AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AC78u;
label_50ac78:
    // 0x50ac78: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x50ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x50ac7c: 0x86030076  lh          $v1, 0x76($s0)
    ctx->pc = 0x50ac7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x50ac80: 0x96020074  lhu         $v0, 0x74($s0)
    ctx->pc = 0x50ac80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x50ac84: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x50ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x50ac88: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x50ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x50ac8c: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x50ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x50ac90: 0x30717800  andi        $s1, $v1, 0x7800
    ctx->pc = 0x50ac90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
    // 0x50ac94: 0x304207c0  andi        $v0, $v0, 0x7C0
    ctx->pc = 0x50ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1984);
    // 0x50ac98: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x50ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x50ac9c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x50ac9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x50aca0: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x50aca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x50aca4: 0x8e120054  lw          $s2, 0x54($s0)
    ctx->pc = 0x50aca4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x50aca8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50acac: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x50acacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x50acb0: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x50acb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50acb4: 0x4400067  bltz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x50ACB4u;
    {
        const bool branch_taken_0x50acb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ACB4u;
        // 0x50acb8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50acb4) {
            ctx->pc = 0x50AE54u;
            goto label_50ae54;
        }
    }
    ctx->pc = 0x50ACBCu;
    // 0x50acbc: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x50acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50acc0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x50acc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x50acc4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x50acc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50acc8: 0x27b70008  addiu       $s7, $sp, 0x8
    ctx->pc = 0x50acc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50accc: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x50acccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_50acd0:
    // 0x50acd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x50acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50acd4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x50acd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x50acd8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50acdc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x50acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ace0: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x50ace0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50ace4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ace8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50ace8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50acec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50acecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50acf0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x50acf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50acf4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x50acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50acf8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50acfc: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x50acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50ad00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ad04: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x50ad04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x50ad08: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x50ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x50ad0c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x50ad0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x50ad10: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x50ad10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ad14: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x50ad14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x50ad18: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50ad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50ad1c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x50ad1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x50ad20: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x50ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x50ad24: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x50ad24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x50ad28: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50ad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50ad2c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x50ad2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x50ad30: 0xc14123e  jal         func_5048F8
    ctx->pc = 0x50AD30u;
    SET_GPR_U32(ctx, 31, 0x50AD38u);
    ctx->pc = 0x50AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AD30u;
    // 0x50ad34: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5048F8u, 0x50AD30u, 0x50AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AD38u;
label_50ad38:
    // 0x50ad38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ad3c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x50ad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ad40: 0xc1413a2  jal         func_504E88
    ctx->pc = 0x50AD40u;
    SET_GPR_U32(ctx, 31, 0x50AD48u);
    ctx->pc = 0x50AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AD40u;
    // 0x50ad44: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504E88u, 0x50AD40u, 0x50AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AD48u;
label_50ad48:
    // 0x50ad48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x50ad48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ad4c: 0x87a20008  lh          $v0, 0x8($sp)
    ctx->pc = 0x50ad4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50ad50: 0x440003d  bltz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x50AD50u;
    {
        const bool branch_taken_0x50ad50 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AD50u;
        // 0x50ad54: 0x27a4000c  addiu       $a0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ad50) {
            ctx->pc = 0x50AE48u;
            goto label_50ae48;
        }
    }
    ctx->pc = 0x50AD58u;
    // 0x50ad58: 0xc14481c  jal         func_512070
    ctx->pc = 0x50AD58u;
    SET_GPR_U32(ctx, 31, 0x50AD60u);
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50AD58u, 0x50AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AD60u;
label_50ad60:
    // 0x50ad60: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x50ad60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x50ad64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50ad68: 0x24060485  addiu       $a2, $zero, 0x485
    ctx->pc = 0x50ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1157));
    // 0x50ad6c: 0x14430036  bne         $v0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x50AD6Cu;
    {
        const bool branch_taken_0x50ad6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AD6Cu;
        // 0x50ad70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ad6c) {
            ctx->pc = 0x50AE48u;
            goto label_50ae48;
        }
    }
    ctx->pc = 0x50AD74u;
    // 0x50ad74: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x50ad74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x50ad78: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50ad7c: 0xa28824  and         $s1, $a1, $v0
    ctx->pc = 0x50ad7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x50ad80: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x50ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x50ad84: 0x3625ffff  ori         $a1, $s1, 0xFFFF
    ctx->pc = 0x50ad84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x50ad88: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x50ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x50ad8c: 0xa38824  and         $s1, $a1, $v1
    ctx->pc = 0x50ad8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x50ad90: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x50ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x50ad94: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x50ad94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x50ad98: 0x24420227  addiu       $v0, $v0, 0x227
    ctx->pc = 0x50ad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 551));
    // 0x50ad9c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x50ad9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x50ada0: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x50ada0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ada4: 0xa6510000  sh          $s1, 0x0($s2)
    ctx->pc = 0x50ada4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x50ada8: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x50ada8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50adac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x50adacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x50adb0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50ADB0u;
    SET_GPR_U32(ctx, 31, 0x50ADB8u);
    ctx->pc = 0x50ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50ADB0u;
    // 0x50adb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50ADB0u, 0x50ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50ADB8u;
label_50adb8:
    // 0x50adb8: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x50adb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50adbc: 0x2405fa5a  addiu       $a1, $zero, -0x5A6
    ctx->pc = 0x50adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965850));
    // 0x50adc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x50adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50adc4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x50adc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50adc8: 0x24630176  addiu       $v1, $v1, 0x176
    ctx->pc = 0x50adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 374));
    // 0x50adcc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x50adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50add0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x50add0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x50add4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50add4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50add8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50add8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50addc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x50addcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x50ade0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x50ade0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ade4: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x50ade4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x50ade8: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x50ade8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50adec: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x50adecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x50adf0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50ADF0u;
    SET_GPR_U32(ctx, 31, 0x50ADF8u);
    ctx->pc = 0x50ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50ADF0u;
    // 0x50adf4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50ADF0u, 0x50ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50ADF8u;
label_50adf8:
    // 0x50adf8: 0x87a30004  lh          $v1, 0x4($sp)
    ctx->pc = 0x50adf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50adfc: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x50adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x50ae00: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x50ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50ae04: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50ae08: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x50ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x50ae0c: 0x2ac03  sra         $s5, $v0, 16
    ctx->pc = 0x50ae0cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ae10: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x50ae10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x50ae14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50ae14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50ae18: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x50ae18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x50ae1c: 0x2aa30020  slti        $v1, $s5, 0x20
    ctx->pc = 0x50ae1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x50ae20: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x50ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x50ae24: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x50ae24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x50ae28: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x50ae28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50ae2c: 0xa645000c  sh          $a1, 0xC($s2)
    ctx->pc = 0x50ae2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x50ae30: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x50ae30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x50ae34: 0xa6560008  sh          $s6, 0x8($s2)
    ctx->pc = 0x50ae34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 22));
    // 0x50ae38: 0xa656000a  sh          $s6, 0xA($s2)
    ctx->pc = 0x50ae38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 22));
    // 0x50ae3c: 0xa640000e  sh          $zero, 0xE($s2)
    ctx->pc = 0x50ae3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50ae40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x50AE40u;
    {
        const bool branch_taken_0x50ae40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AE40u;
        // 0x50ae44: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ae40) {
            ctx->pc = 0x50AE54u;
            goto label_50ae54;
        }
    }
    ctx->pc = 0x50AE48u;
label_50ae48:
    // 0x50ae48: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x50ae48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50ae4c: 0x441ffa0  bgez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x50AE4Cu;
    {
        const bool branch_taken_0x50ae4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x50AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AE4Cu;
        // 0x50ae50: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ae4c) {
            ctx->pc = 0x50ACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50acd0;
        }
    }
    ctx->pc = 0x50AE54u;
label_50ae54:
    // 0x50ae54: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x50ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50ae58: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50ae5c: 0x2482f080  addiu       $v0, $a0, -0xF80
    ctx->pc = 0x50ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50ae60: 0xac520054  sw          $s2, 0x54($v0)
    ctx->pc = 0x50ae60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x50ae64: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x50ae64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x50ae68: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x50ae68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50ae6c:
    // 0x50ae6c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x50ae6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50ae70: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x50ae70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50ae74: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x50ae74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50ae78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x50ae78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50ae7c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x50ae7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50ae80: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x50ae80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50ae84: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x50ae84u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x50ae88: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x50ae88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x50ae8c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x50ae8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x50ae90: 0x3e00008  jr          $ra
    ctx->pc = 0x50AE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AE90u;
        // 0x50ae94: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AE98u;
    // 0x50ae98: 0x3e00008  jr          $ra
    ctx->pc = 0x50AE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50AEA0u;
label_50aea0:
    // 0x50aea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50aea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50aea8: 0xc142b0a  jal         func_50AC28
    ctx->pc = 0x50AEA8u;
    SET_GPR_U32(ctx, 31, 0x50AEB0u);
    ctx->pc = 0x50AC28u;
    goto label_50ac28;
    ctx->pc = 0x50AEB0u;
label_50aeb0:
    // 0x50aeb0: 0xc142f92  jal         func_50BE48
    ctx->pc = 0x50AEB0u;
    SET_GPR_U32(ctx, 31, 0x50AEB8u);
    ctx->pc = 0x50BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50BE48u, 0x50AEB0u, 0x50AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AEB8u;
label_50aeb8:
    // 0x50aeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aebc: 0x81436a4  j           func_50DA90
    ctx->pc = 0x50AEBCu;
    ctx->pc = 0x50AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AEBCu;
    // 0x50aec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50DA90u;
    sub_0050DA90_0x50da90(rdram, ctx, runtime); return;
    ctx->pc = 0x50AEC4u;
    // 0x50aec4: 0x0  nop
    ctx->pc = 0x50aec4u;
    // NOP
label_50aec8:
    // 0x50aec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50aec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50aecc: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50aed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50aed4: 0xa4403e7c  sh          $zero, 0x3E7C($v0)
    ctx->pc = 0x50aed4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903E7Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903E7Cu, _value); } while (0);
    // 0x50aed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50aed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50aedc: 0x8142c02  j           func_50B008
    ctx->pc = 0x50AEDCu;
    ctx->pc = 0x50AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50AEDCu;
    // 0x50aee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50B008u;
    sub_0050B008_0x50b008(rdram, ctx, runtime); return;
    ctx->pc = 0x50AEE4u;
    // 0x50aee4: 0x0  nop
    ctx->pc = 0x50aee4u;
    // NOP
    ctx->pc = 0x50aee8u;
}
