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

// Function: sub_0028CC28
// Address: 0x28cc28 - 0x28cdc8
void sub_0028CC28_0x28cc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CC28_0x28cc28");
#endif

    switch (ctx->pc) {
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cda8u: goto label_28cda8;
        default: break;
    }

    ctx->pc = 0x28cc28u;

    // 0x28cc28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28cc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28cc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28cc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28cc38: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x28cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28cc3c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28CC3Cu;
    {
        const bool branch_taken_0x28cc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cc3c) {
            ctx->pc = 0x28CC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CC3Cu;
            // 0x28cc40: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CC68u;
            goto label_28cc68;
        }
    }
    ctx->pc = 0x28CC44u;
    // 0x28cc44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28cc48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cc4c: 0x28430078  slti        $v1, $v0, 0x78
    ctx->pc = 0x28cc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x28cc50: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x28CC50u;
    {
        const bool branch_taken_0x28cc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC50u;
        // 0x28cc54: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc50) {
            ctx->pc = 0x28CDB4u;
            goto label_28cdb4;
        }
    }
    ctx->pc = 0x28CC58u;
    // 0x28cc58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cc5c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x28CC5Cu;
    {
        const bool branch_taken_0x28cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC5Cu;
        // 0x28cc60: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc5c) {
            ctx->pc = 0x28CDB4u;
            goto label_28cdb4;
        }
    }
    ctx->pc = 0x28CC64u;
    // 0x28cc64: 0x0  nop
    ctx->pc = 0x28cc64u;
    // NOP
label_28cc68:
    // 0x28cc68: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x28CC68u;
    {
        const bool branch_taken_0x28cc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cc68) {
            ctx->pc = 0x28CC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CC68u;
            // 0x28cc6c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CD90u;
            goto label_28cd90;
        }
    }
    ctx->pc = 0x28CC70u;
    // 0x28cc70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28cc74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cc78: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CC78u;
    {
        const bool branch_taken_0x28cc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC78u;
        // 0x28cc7c: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc78) {
            ctx->pc = 0x28CC90u;
            goto label_28cc90;
        }
    }
    ctx->pc = 0x28CC80u;
    // 0x28cc80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28cc84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28CC84u;
    {
        const bool branch_taken_0x28cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC84u;
        // 0x28cc88: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc84) {
            ctx->pc = 0x28CC98u;
            goto label_28cc98;
        }
    }
    ctx->pc = 0x28CC8Cu;
    // 0x28cc8c: 0x0  nop
    ctx->pc = 0x28cc8cu;
    // NOP
label_28cc90:
    // 0x28cc90: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x28cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x28cc94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28cc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cc98:
    // 0x28cc98: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28CC98u;
    {
        const bool branch_taken_0x28cc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC98u;
        // 0x28cc9c: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc98) {
            ctx->pc = 0x28CD00u;
            goto label_28cd00;
        }
    }
    ctx->pc = 0x28CCA0u;
    // 0x28cca0: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28cca4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28cca8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ccac: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x28ccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x28ccb0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28ccb4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x28ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x28ccb8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28ccbc: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x28ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
    // 0x28ccc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28ccc4: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CCC4u;
    {
        const bool branch_taken_0x28ccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x28CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCC4u;
        // 0x28ccc8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccc4) {
            ctx->pc = 0x28CCD8u;
            goto label_28ccd8;
        }
    }
    ctx->pc = 0x28CCCCu;
    // 0x28cccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28CCCCu;
    {
        const bool branch_taken_0x28cccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CCCCu;
        // 0x28ccd0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cccc) {
            ctx->pc = 0x28CCE0u;
            goto label_28cce0;
        }
    }
    ctx->pc = 0x28CCD4u;
    // 0x28ccd4: 0x0  nop
    ctx->pc = 0x28ccd4u;
    // NOP
label_28ccd8:
    // 0x28ccd8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x28ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x28ccdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28ccdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cce0:
    // 0x28cce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28cce4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x28cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x28cce8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28ccec: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x28ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x28ccf0: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x28ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x28ccf4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x28ccf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x28ccf8: 0xc092928  jal         func_24A4A0
    ctx->pc = 0x28CCF8u;
    SET_GPR_U32(ctx, 31, 0x28CD00u);
    ctx->pc = 0x28CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CCF8u;
    // 0x28ccfc: 0xaca30080  sw          $v1, 0x80($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4A0u, 0x28CCF8u, 0x28CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD00u;
label_28cd00:
    // 0x28cd00: 0xc0b2344  jal         func_2C8D10
    ctx->pc = 0x28CD00u;
    SET_GPR_U32(ctx, 31, 0x28CD08u);
    ctx->pc = 0x2C8D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8D10u, 0x28CD00u, 0x28CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD08u;
label_28cd08:
    // 0x28cd08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x28cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28cd0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28cd0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd10: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CD10u;
    {
        const bool branch_taken_0x28cd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD10u;
        // 0x28cd14: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd10) {
            ctx->pc = 0x28CD58u;
            goto label_28cd58;
        }
    }
    ctx->pc = 0x28CD18u;
    // 0x28cd18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CD18u;
    {
        const bool branch_taken_0x28cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD18u;
        // 0x28cd1c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd18) {
            ctx->pc = 0x28CD38u;
            goto label_28cd38;
        }
    }
    ctx->pc = 0x28CD20u;
    // 0x28cd20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cd24: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28CD24u;
    {
        const bool branch_taken_0x28cd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD24u;
        // 0x28cd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd24) {
            ctx->pc = 0x28CD50u;
            goto label_28cd50;
        }
    }
    ctx->pc = 0x28CD2Cu;
    // 0x28cd2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28CD2Cu;
    {
        const bool branch_taken_0x28cd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD2Cu;
        // 0x28cd30: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd2c) {
            ctx->pc = 0x28CD80u;
            goto label_28cd80;
        }
    }
    ctx->pc = 0x28CD34u;
    // 0x28cd34: 0x0  nop
    ctx->pc = 0x28cd34u;
    // NOP
label_28cd38:
    // 0x28cd38: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28CD38u;
    {
        const bool branch_taken_0x28cd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD38u;
        // 0x28cd3c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd38) {
            ctx->pc = 0x28CD68u;
            goto label_28cd68;
        }
    }
    ctx->pc = 0x28CD40u;
    // 0x28cd40: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28CD40u;
    {
        const bool branch_taken_0x28cd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD40u;
        // 0x28cd44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd40) {
            ctx->pc = 0x28CD78u;
            goto label_28cd78;
        }
    }
    ctx->pc = 0x28CD48u;
    // 0x28cd48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28CD48u;
    {
        const bool branch_taken_0x28cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD48u;
        // 0x28cd4c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd48) {
            ctx->pc = 0x28CD80u;
            goto label_28cd80;
        }
    }
    ctx->pc = 0x28CD50u;
label_28cd50:
    // 0x28cd50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28CD50u;
    {
        const bool branch_taken_0x28cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD50u;
        // 0x28cd54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd50) {
            ctx->pc = 0x28CD84u;
            goto label_28cd84;
        }
    }
    ctx->pc = 0x28CD58u;
label_28cd58:
    // 0x28cd58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cd5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28CD5Cu;
    {
        const bool branch_taken_0x28cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD5Cu;
        // 0x28cd60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd5c) {
            ctx->pc = 0x28CD88u;
            goto label_28cd88;
        }
    }
    ctx->pc = 0x28CD64u;
    // 0x28cd64: 0x0  nop
    ctx->pc = 0x28cd64u;
    // NOP
label_28cd68:
    // 0x28cd68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cd6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28CD6Cu;
    {
        const bool branch_taken_0x28cd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD6Cu;
        // 0x28cd70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd6c) {
            ctx->pc = 0x28CD84u;
            goto label_28cd84;
        }
    }
    ctx->pc = 0x28CD74u;
    // 0x28cd74: 0x0  nop
    ctx->pc = 0x28cd74u;
    // NOP
label_28cd78:
    // 0x28cd78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28CD78u;
    {
        const bool branch_taken_0x28cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD78u;
        // 0x28cd7c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd78) {
            ctx->pc = 0x28CD84u;
            goto label_28cd84;
        }
    }
    ctx->pc = 0x28CD80u;
label_28cd80:
    // 0x28cd80: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x28cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_28cd84:
    // 0x28cd84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cd88:
    // 0x28cd88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28CD88u;
    {
        const bool branch_taken_0x28cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD88u;
        // 0x28cd8c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd88) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CD90u;
label_28cd90:
    // 0x28cd90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CD90u;
    {
        const bool branch_taken_0x28cd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD90u;
        // 0x28cd94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd90) {
            ctx->pc = 0x28CDA0u;
            goto label_28cda0;
        }
    }
    ctx->pc = 0x28CD98u;
    // 0x28cd98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28CD98u;
    {
        const bool branch_taken_0x28cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD98u;
        // 0x28cd9c: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd98) {
            ctx->pc = 0x28CDA8u;
            goto label_28cda8;
        }
    }
    ctx->pc = 0x28CDA0u;
label_28cda0:
    // 0x28cda0: 0xc0a3372  jal         func_28CDC8
    ctx->pc = 0x28CDA0u;
    SET_GPR_U32(ctx, 31, 0x28CDA8u);
    ctx->pc = 0x28CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDC8u, 0x28CDA0u, 0x28CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CDA8u;
label_28cda8:
    // 0x28cda8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x28cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28cdac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28cdb0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x28cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_28cdb4:
    // 0x28cdb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cdb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cdb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28cdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28cdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x28CDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CDBCu;
        // 0x28cdc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CDC4u;
    // 0x28cdc4: 0x0  nop
    ctx->pc = 0x28cdc4u;
    // NOP
    ctx->pc = 0x28cdc8u;
}
