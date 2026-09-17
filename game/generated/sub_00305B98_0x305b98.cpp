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

// Function: sub_00305B98
// Address: 0x305b98 - 0x306248
void sub_00305B98_0x305b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305B98_0x305b98");
#endif

    switch (ctx->pc) {
        case 0x305bc0u: goto label_305bc0;
        case 0x305bd4u: goto label_305bd4;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c60u: goto label_305c60;
        case 0x305c94u: goto label_305c94;
        case 0x305cacu: goto label_305cac;
        case 0x305cb8u: goto label_305cb8;
        case 0x305d14u: goto label_305d14;
        case 0x305d1cu: goto label_305d1c;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d54u: goto label_305d54;
        case 0x305d8cu: goto label_305d8c;
        case 0x305d98u: goto label_305d98;
        case 0x305e54u: goto label_305e54;
        case 0x305e88u: goto label_305e88;
        case 0x305eb8u: goto label_305eb8;
        case 0x305eccu: goto label_305ecc;
        case 0x305ed4u: goto label_305ed4;
        case 0x305ee0u: goto label_305ee0;
        case 0x305ee8u: goto label_305ee8;
        case 0x305f24u: goto label_305f24;
        case 0x305f2cu: goto label_305f2c;
        case 0x305f3cu: goto label_305f3c;
        case 0x305f44u: goto label_305f44;
        case 0x305f60u: goto label_305f60;
        case 0x305fa0u: goto label_305fa0;
        case 0x306010u: goto label_306010;
        case 0x306070u: goto label_306070;
        case 0x306088u: goto label_306088;
        case 0x306128u: goto label_306128;
        case 0x306138u: goto label_306138;
        case 0x306150u: goto label_306150;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061f0u: goto label_3061f0;
        case 0x306200u: goto label_306200;
        case 0x306228u: goto label_306228;
        default: break;
    }

    ctx->pc = 0x305b98u;

    // 0x305b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x305b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x305b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x305ba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305bac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x305bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x305bb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x305bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x305bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x305bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x305bb8: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x305BB8u;
    SET_GPR_U32(ctx, 31, 0x305BC0u);
    ctx->pc = 0x305BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BB8u;
    // 0x305bbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x305BB8u, 0x305BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BC0u;
label_305bc0:
    // 0x305bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305bc4: 0x5c9021  addu        $s2, $v0, $gp
    ctx->pc = 0x305bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x305bc8: 0x8e52a850  lw          $s2, -0x57B0($s2)
    ctx->pc = 0x305bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944848)));
    // 0x305bcc: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x305BCCu;
    SET_GPR_U32(ctx, 31, 0x305BD4u);
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x305BCCu, 0x305BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BD4u;
label_305bd4:
    // 0x305bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305bd8: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x305bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x305bdc: 0x8c63a858  lw          $v1, -0x57A8($v1)
    ctx->pc = 0x305bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944856)));
    // 0x305be0: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x305be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x305be4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305BE4u;
    {
        const bool branch_taken_0x305be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BE4u;
        // 0x305be8: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305be4) {
            ctx->pc = 0x305C00u;
            goto label_305c00;
        }
    }
    ctx->pc = 0x305BECu;
    // 0x305bec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x305becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x305bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305BF0u;
    {
        const bool branch_taken_0x305bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BF0u;
        // 0x305bf4: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bf0) {
            ctx->pc = 0x305C00u;
            goto label_305c00;
        }
    }
    ctx->pc = 0x305BF8u;
    // 0x305bf8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x305BF8u;
    {
        const bool branch_taken_0x305bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BF8u;
        // 0x305bfc: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305bf8) {
            ctx->pc = 0x305CACu;
            goto label_305cac;
        }
    }
    ctx->pc = 0x305C00u;
label_305c00:
    // 0x305c00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x305C00u;
    {
        const bool branch_taken_0x305c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C00u;
        // 0x305c04: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c00) {
            ctx->pc = 0x305C20u;
            goto label_305c20;
        }
    }
    ctx->pc = 0x305C08u;
    // 0x305c08: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x305c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x305c0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305C0Cu;
    {
        const bool branch_taken_0x305c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C0Cu;
        // 0x305c10: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c0c) {
            ctx->pc = 0x305C20u;
            goto label_305c20;
        }
    }
    ctx->pc = 0x305C14u;
    // 0x305c14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x305C14u;
    {
        const bool branch_taken_0x305c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C14u;
        // 0x305c18: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c14) {
            ctx->pc = 0x305CACu;
            goto label_305cac;
        }
    }
    ctx->pc = 0x305C1Cu;
    // 0x305c1c: 0x0  nop
    ctx->pc = 0x305c1cu;
    // NOP
label_305c20:
    // 0x305c20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x305C20u;
    {
        const bool branch_taken_0x305c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C20u;
        // 0x305c24: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c20) {
            ctx->pc = 0x305C68u;
            goto label_305c68;
        }
    }
    ctx->pc = 0x305C28u;
    // 0x305c28: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x305c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x305c2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x305C2Cu;
    {
        const bool branch_taken_0x305c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C2Cu;
        // 0x305c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c2c) {
            ctx->pc = 0x305C58u;
            goto label_305c58;
        }
    }
    ctx->pc = 0x305C34u;
    // 0x305c34: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x305c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x305c38: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x305C38u;
    {
        const bool branch_taken_0x305c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C38u;
        // 0x305c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c38) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C40u;
    // 0x305c40: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x305c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305c44: 0xc092940  jal         func_24A500
    ctx->pc = 0x305C44u;
    SET_GPR_U32(ctx, 31, 0x305C4Cu);
    ctx->pc = 0x305C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C44u;
    // 0x305c48: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x305C44u, 0x305C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C4Cu;
label_305c4c:
    // 0x305c4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x305C4Cu;
    {
        const bool branch_taken_0x305c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C4Cu;
        // 0x305c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c4c) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C54u;
    // 0x305c54: 0x0  nop
    ctx->pc = 0x305c54u;
    // NOP
label_305c58:
    // 0x305c58: 0xc0c22a0  jal         func_308A80
    ctx->pc = 0x305C58u;
    SET_GPR_U32(ctx, 31, 0x305C60u);
    ctx->pc = 0x305C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C58u;
    // 0x305c5c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A80u, 0x305C58u, 0x305C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C60u;
label_305c60:
    // 0x305c60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x305C60u;
    {
        const bool branch_taken_0x305c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C60u;
        // 0x305c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c60) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C68u;
label_305c68:
    // 0x305c68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x305C68u;
    {
        const bool branch_taken_0x305c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C68u;
        // 0x305c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c68) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C70u;
    // 0x305c70: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x305c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x305c74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x305C74u;
    {
        const bool branch_taken_0x305c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C74u;
        // 0x305c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c74) {
            ctx->pc = 0x305CA0u;
            goto label_305ca0;
        }
    }
    ctx->pc = 0x305C7Cu;
    // 0x305c7c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x305c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x305c80: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x305C80u;
    {
        const bool branch_taken_0x305c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305c80) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C88u;
    // 0x305c88: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x305c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x305c8c: 0xc092940  jal         func_24A500
    ctx->pc = 0x305C8Cu;
    SET_GPR_U32(ctx, 31, 0x305C94u);
    ctx->pc = 0x305C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C8Cu;
    // 0x305c90: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x305C8Cu, 0x305C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C94u;
label_305c94:
    // 0x305c94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305C94u;
    {
        const bool branch_taken_0x305c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C94u;
        // 0x305c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c94) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C9Cu;
    // 0x305c9c: 0x0  nop
    ctx->pc = 0x305c9cu;
    // NOP
label_305ca0:
    // 0x305ca0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x305ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x305ca4: 0xc0c226e  jal         func_3089B8
    ctx->pc = 0x305CA4u;
    SET_GPR_U32(ctx, 31, 0x305CACu);
    ctx->pc = 0x305CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CA4u;
    // 0x305ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3089B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3089B8u, 0x305CA4u, 0x305CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CACu;
label_305cac:
    // 0x305cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x305cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_305cb0:
    // 0x305cb0: 0xc0c221a  jal         func_308868
    ctx->pc = 0x305CB0u;
    SET_GPR_U32(ctx, 31, 0x305CB8u);
    ctx->pc = 0x305CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CB0u;
    // 0x305cb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308868u, 0x305CB0u, 0x305CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CB8u;
label_305cb8:
    // 0x305cb8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x305CB8u;
    {
        const bool branch_taken_0x305cb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x305cb8) {
            ctx->pc = 0x305D14u;
            goto label_305d14;
        }
    }
    ctx->pc = 0x305CC0u;
    // 0x305cc0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x305cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x305cc4: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x305CC4u;
    {
        const bool branch_taken_0x305cc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x305cc4) {
            ctx->pc = 0x305D14u;
            goto label_305d14;
        }
    }
    ctx->pc = 0x305CCCu;
    // 0x305ccc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x305cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305cd0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x305cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305cd4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305CD4u;
    {
        const bool branch_taken_0x305cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CD4u;
        // 0x305cd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cd4) {
            ctx->pc = 0x305CF8u;
            goto label_305cf8;
        }
    }
    ctx->pc = 0x305CDCu;
    // 0x305cdc: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x305cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x305ce0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305CE0u;
    {
        const bool branch_taken_0x305ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE0u;
        // 0x305ce4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ce0) {
            ctx->pc = 0x305CF8u;
            goto label_305cf8;
        }
    }
    ctx->pc = 0x305CE8u;
    // 0x305ce8: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x305ce8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x305cec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305cf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x305cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305cf4: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x305cf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_305cf8:
    // 0x305cf8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x305cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x305cfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305CFCu;
    {
        const bool branch_taken_0x305cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305cfc) {
            ctx->pc = 0x305D14u;
            goto label_305d14;
        }
    }
    ctx->pc = 0x305D04u;
    // 0x305d04: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305D04u;
    {
        const bool branch_taken_0x305d04 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x305d04) {
            ctx->pc = 0x305D14u;
            goto label_305d14;
        }
    }
    ctx->pc = 0x305D0Cu;
    // 0x305d0c: 0xc0c2164  jal         func_308590
    ctx->pc = 0x305D0Cu;
    SET_GPR_U32(ctx, 31, 0x305D14u);
    ctx->pc = 0x305D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D0Cu;
    // 0x305d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308590u, 0x305D0Cu, 0x305D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D14u;
label_305d14:
    // 0x305d14: 0xc0c21b6  jal         func_3086D8
    ctx->pc = 0x305D14u;
    SET_GPR_U32(ctx, 31, 0x305D1Cu);
    ctx->pc = 0x305D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D14u;
    // 0x305d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3086D8u, 0x305D14u, 0x305D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D1Cu;
label_305d1c:
    // 0x305d1c: 0x32420060  andi        $v0, $s2, 0x60
    ctx->pc = 0x305d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)96);
    // 0x305d20: 0x10400125  beqz        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x305D20u;
    {
        const bool branch_taken_0x305d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D20u;
        // 0x305d24: 0x32420090  andi        $v0, $s2, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)144);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d20) {
            ctx->pc = 0x3061B8u;
            goto label_3061b8;
        }
    }
    ctx->pc = 0x305D28u;
    // 0x305d28: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x305d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x305d2c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x305D2Cu;
    {
        const bool branch_taken_0x305d2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x305D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D2Cu;
        // 0x305d30: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d2c) {
            ctx->pc = 0x305D68u;
            goto label_305d68;
        }
    }
    ctx->pc = 0x305D34u;
    // 0x305d34: 0xc0c226e  jal         func_3089B8
    ctx->pc = 0x305D34u;
    SET_GPR_U32(ctx, 31, 0x305D3Cu);
    ctx->pc = 0x305D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D34u;
    // 0x305d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3089B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3089B8u, 0x305D34u, 0x305D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D3Cu;
label_305d3c:
    // 0x305d3c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x305d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305d40: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x305d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x305d44: 0x54620131  bnel        $v1, $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x305D44u;
    {
        const bool branch_taken_0x305d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305d44) {
            ctx->pc = 0x305D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D44u;
            // 0x305d48: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x305D4Cu;
    // 0x305d4c: 0xc092940  jal         func_24A500
    ctx->pc = 0x305D4Cu;
    SET_GPR_U32(ctx, 31, 0x305D54u);
    ctx->pc = 0x305D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D4Cu;
    // 0x305d50: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x305D4Cu, 0x305D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D54u;
label_305d54:
    // 0x305d54: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x305d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x305d58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305d5c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x305d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x305d60: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x305D60u;
    {
        const bool branch_taken_0x305d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D60u;
        // 0x305d64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d60) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x305D68u;
label_305d68:
    // 0x305d68: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x305d6c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x305D6Cu;
    {
        const bool branch_taken_0x305d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D6Cu;
        // 0x305d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d6c) {
            ctx->pc = 0x305F68u;
            goto label_305f68;
        }
    }
    ctx->pc = 0x305D74u;
    // 0x305d74: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x305d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x305d78: 0x14620077  bne         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x305D78u;
    {
        const bool branch_taken_0x305d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305d78) {
            ctx->pc = 0x305F58u;
            goto label_305f58;
        }
    }
    ctx->pc = 0x305D80u;
    // 0x305d80: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x305d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x305d84: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x305D84u;
    SET_GPR_U32(ctx, 31, 0x305D8Cu);
    ctx->pc = 0x305D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D84u;
    // 0x305d88: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x305D84u, 0x305D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D8Cu;
label_305d8c:
    // 0x305d8c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x305d90: 0xc092940  jal         func_24A500
    ctx->pc = 0x305D90u;
    SET_GPR_U32(ctx, 31, 0x305D98u);
    ctx->pc = 0x305D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D90u;
    // 0x305d94: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x305D90u, 0x305D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D98u;
label_305d98:
    // 0x305d98: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x305d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305d9c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x305d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305da0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305DA0u;
    {
        const bool branch_taken_0x305da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DA0u;
        // 0x305da4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305da0) {
            ctx->pc = 0x305DC4u;
            goto label_305dc4;
        }
    }
    ctx->pc = 0x305DA8u;
    // 0x305da8: 0x28c20007  slti        $v0, $a2, 0x7
    ctx->pc = 0x305da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x305dac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305DACu;
    {
        const bool branch_taken_0x305dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DACu;
        // 0x305db0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305dac) {
            ctx->pc = 0x305DC4u;
            goto label_305dc4;
        }
    }
    ctx->pc = 0x305DB4u;
    // 0x305db4: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x305db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x305db8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305dbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x305dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305dc0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x305dc0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_305dc4:
    // 0x305dc4: 0x4800106  bltz        $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x305DC4u;
    {
        const bool branch_taken_0x305dc4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x305DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DC4u;
        // 0x305dc8: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305dc4) {
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x305DCCu;
    // 0x305dcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305DCCu;
    {
        const bool branch_taken_0x305dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DCCu;
        // 0x305dd0: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305dcc) {
            ctx->pc = 0x305DE8u;
            goto label_305de8;
        }
    }
    ctx->pc = 0x305DD4u;
    // 0x305dd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x305dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305dd8: 0x5082004d  beql        $a0, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x305DD8u;
    {
        const bool branch_taken_0x305dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x305dd8) {
            ctx->pc = 0x305DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305DD8u;
            // 0x305ddc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305F10u;
            goto label_305f10;
        }
    }
    ctx->pc = 0x305DE0u;
    // 0x305de0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x305DE0u;
    {
        const bool branch_taken_0x305de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DE0u;
        // 0x305de4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305de0) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x305DE8u;
label_305de8:
    // 0x305de8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x305de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x305dec: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x305decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x305df0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x305df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x305df4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305df8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x305df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x305dfc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x305dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x305e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x305e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x305e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305e08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x305e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x305e0c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x305e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x305e10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x305e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x305e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x305e18: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x305E18u;
    {
        const bool branch_taken_0x305e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x305E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E18u;
        // 0x305e1c: 0x2451001c  addiu       $s1, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e18) {
            ctx->pc = 0x305EA8u;
            goto label_305ea8;
        }
    }
    ctx->pc = 0x305E20u;
    // 0x305e20: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x305e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305e24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305E24u;
    {
        const bool branch_taken_0x305e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E24u;
        // 0x305e28: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e24) {
            ctx->pc = 0x305E40u;
            goto label_305e40;
        }
    }
    ctx->pc = 0x305E2Cu;
    // 0x305e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305e30: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x305E30u;
    {
        const bool branch_taken_0x305e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x305E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E30u;
        // 0x305e34: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e30) {
            ctx->pc = 0x305E78u;
            goto label_305e78;
        }
    }
    ctx->pc = 0x305E38u;
    // 0x305e38: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x305E38u;
    {
        const bool branch_taken_0x305e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E38u;
        // 0x305e3c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e38) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x305E40u;
label_305e40:
    // 0x305e40: 0x14a200e7  bne         $a1, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x305E40u;
    {
        const bool branch_taken_0x305e40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x305E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E40u;
        // 0x305e44: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e40) {
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x305E48u;
    // 0x305e48: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x305e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x305e4c: 0xc0b29ee  jal         func_2CA7B8
    ctx->pc = 0x305E4Cu;
    SET_GPR_U32(ctx, 31, 0x305E54u);
    ctx->pc = 0x305E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E4Cu;
    // 0x305e50: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7B8u, 0x305E4Cu, 0x305E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E54u;
label_305e54:
    // 0x305e54: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x305e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305e58: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x305e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x305E5Cu;
    {
        const bool branch_taken_0x305e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E5Cu;
        // 0x305e60: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e5c) {
            ctx->pc = 0x305E70u;
            goto label_305e70;
        }
    }
    ctx->pc = 0x305E64u;
    // 0x305e64: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x305E64u;
    {
        const bool branch_taken_0x305e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E64u;
        // 0x305e68: 0x344200b6  ori         $v0, $v0, 0xB6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)182);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e64) {
            ctx->pc = 0x305F04u;
            goto label_305f04;
        }
    }
    ctx->pc = 0x305E6Cu;
    // 0x305e6c: 0x0  nop
    ctx->pc = 0x305e6cu;
    // NOP
label_305e70:
    // 0x305e70: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x305E70u;
    {
        const bool branch_taken_0x305e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E70u;
        // 0x305e74: 0x344200c3  ori         $v0, $v0, 0xC3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)195);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e70) {
            ctx->pc = 0x305F04u;
            goto label_305f04;
        }
    }
    ctx->pc = 0x305E78u;
label_305e78:
    // 0x305e78: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x305e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x305e7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x305e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e80: 0xc0b29ba  jal         func_2CA6E8
    ctx->pc = 0x305E80u;
    SET_GPR_U32(ctx, 31, 0x305E88u);
    ctx->pc = 0x305E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E80u;
    // 0x305e84: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6E8u, 0x305E80u, 0x305E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E88u;
label_305e88:
    // 0x305e88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x305e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305e8c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x305e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305e90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305E90u;
    {
        const bool branch_taken_0x305e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E90u;
        // 0x305e94: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e90) {
            ctx->pc = 0x305EA0u;
            goto label_305ea0;
        }
    }
    ctx->pc = 0x305E98u;
    // 0x305e98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x305E98u;
    {
        const bool branch_taken_0x305e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E98u;
        // 0x305e9c: 0x344200b7  ori         $v0, $v0, 0xB7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)183);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e98) {
            ctx->pc = 0x305F04u;
            goto label_305f04;
        }
    }
    ctx->pc = 0x305EA0u;
label_305ea0:
    // 0x305ea0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x305EA0u;
    {
        const bool branch_taken_0x305ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EA0u;
        // 0x305ea4: 0x344200c4  ori         $v0, $v0, 0xC4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)196);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ea0) {
            ctx->pc = 0x305F04u;
            goto label_305f04;
        }
    }
    ctx->pc = 0x305EA8u;
label_305ea8:
    // 0x305ea8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x305ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x305eac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x305eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305eb0: 0xc0b2980  jal         func_2CA600
    ctx->pc = 0x305EB0u;
    SET_GPR_U32(ctx, 31, 0x305EB8u);
    ctx->pc = 0x305EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EB0u;
    // 0x305eb4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA600u, 0x305EB0u, 0x305EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EB8u;
label_305eb8:
    // 0x305eb8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x305eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x305ebc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x305ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x305ec0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x305ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ec4: 0xc0b29ba  jal         func_2CA6E8
    ctx->pc = 0x305EC4u;
    SET_GPR_U32(ctx, 31, 0x305ECCu);
    ctx->pc = 0x305EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EC4u;
    // 0x305ec8: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6E8u, 0x305EC4u, 0x305ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305ECCu;
label_305ecc:
    // 0x305ecc: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x305ECCu;
    SET_GPR_U32(ctx, 31, 0x305ED4u);
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x305ECCu, 0x305ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305ED4u;
label_305ed4:
    // 0x305ed4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x305ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x305ed8: 0xc0b278e  jal         func_2C9E38
    ctx->pc = 0x305ED8u;
    SET_GPR_U32(ctx, 31, 0x305EE0u);
    ctx->pc = 0x305EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305ED8u;
    // 0x305edc: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E38u, 0x305ED8u, 0x305EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EE0u;
label_305ee0:
    // 0x305ee0: 0xc092928  jal         func_24A4A0
    ctx->pc = 0x305EE0u;
    SET_GPR_U32(ctx, 31, 0x305EE8u);
    ctx->pc = 0x305EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EE0u;
    // 0x305ee4: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4A0u, 0x305EE0u, 0x305EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EE8u;
label_305ee8:
    // 0x305ee8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x305ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305eec: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x305eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305ef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305EF0u;
    {
        const bool branch_taken_0x305ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EF0u;
        // 0x305ef4: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ef0) {
            ctx->pc = 0x305F00u;
            goto label_305f00;
        }
    }
    ctx->pc = 0x305EF8u;
    // 0x305ef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x305EF8u;
    {
        const bool branch_taken_0x305ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EF8u;
        // 0x305efc: 0x344200b5  ori         $v0, $v0, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)181);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ef8) {
            ctx->pc = 0x305F04u;
            goto label_305f04;
        }
    }
    ctx->pc = 0x305F00u;
label_305f00:
    // 0x305f00: 0x344200c2  ori         $v0, $v0, 0xC2
    ctx->pc = 0x305f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)194);
label_305f04:
    // 0x305f04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x305f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x305f08: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x305F08u;
    {
        const bool branch_taken_0x305f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F08u;
        // 0x305f0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f08) {
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x305F10u;
label_305f10:
    // 0x305f10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305f14: 0x546200bc  bnel        $v1, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x305F14u;
    {
        const bool branch_taken_0x305f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x305f14) {
            ctx->pc = 0x305F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305F14u;
            // 0x305f18: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x305F1Cu;
    // 0x305f1c: 0xc0b2a58  jal         func_2CA960
    ctx->pc = 0x305F1Cu;
    SET_GPR_U32(ctx, 31, 0x305F24u);
    ctx->pc = 0x305F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F1Cu;
    // 0x305f20: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA960u, 0x305F1Cu, 0x305F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F24u;
label_305f24:
    // 0x305f24: 0xc0b2788  jal         func_2C9E20
    ctx->pc = 0x305F24u;
    SET_GPR_U32(ctx, 31, 0x305F2Cu);
    ctx->pc = 0x2C9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E20u, 0x305F24u, 0x305F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F2Cu;
label_305f2c:
    // 0x305f2c: 0x3c04fff8  lui         $a0, 0xFFF8
    ctx->pc = 0x305f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65528 << 16));
    // 0x305f30: 0x34845ee0  ori         $a0, $a0, 0x5EE0
    ctx->pc = 0x305f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24288);
    // 0x305f34: 0xc0b278e  jal         func_2C9E38
    ctx->pc = 0x305F34u;
    SET_GPR_U32(ctx, 31, 0x305F3Cu);
    ctx->pc = 0x305F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F34u;
    // 0x305f38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E38u, 0x305F34u, 0x305F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F3Cu;
label_305f3c:
    // 0x305f3c: 0xc092928  jal         func_24A4A0
    ctx->pc = 0x305F3Cu;
    SET_GPR_U32(ctx, 31, 0x305F44u);
    ctx->pc = 0x305F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F3Cu;
    // 0x305f40: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4A0u, 0x305F3Cu, 0x305F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F44u;
label_305f44:
    // 0x305f44: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x305f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x305f48: 0x344200bb  ori         $v0, $v0, 0xBB
    ctx->pc = 0x305f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)187);
    // 0x305f4c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x305F4Cu;
    {
        const bool branch_taken_0x305f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F4Cu;
        // 0x305f50: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f4c) {
            ctx->pc = 0x3061E0u;
            goto label_3061e0;
        }
    }
    ctx->pc = 0x305F54u;
    // 0x305f54: 0x0  nop
    ctx->pc = 0x305f54u;
    // NOP
label_305f58:
    // 0x305f58: 0xc092940  jal         func_24A500
    ctx->pc = 0x305F58u;
    SET_GPR_U32(ctx, 31, 0x305F60u);
    ctx->pc = 0x305F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F58u;
    // 0x305f5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x305F58u, 0x305F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F60u;
label_305f60:
    // 0x305f60: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x305F60u;
    {
        const bool branch_taken_0x305f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F60u;
        // 0x305f64: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f60) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x305F68u;
label_305f68:
    // 0x305f68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x305f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x305f6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x305f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x305f70: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x305f70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x305f74: 0x506000a5  beql        $v1, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x305F74u;
    {
        const bool branch_taken_0x305f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f74) {
            ctx->pc = 0x305F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305F74u;
            // 0x305f78: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x305F7Cu;
    // 0x305f7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x305f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x305f80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x305f84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x305f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x305f88: 0x8c632520  lw          $v1, 0x2520($v1)
    ctx->pc = 0x305f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9504)));
    // 0x305f8c: 0x600008  jr          $v1
    ctx->pc = 0x305F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305F98u: goto label_305f98;
            case 0x306008u: goto label_306008;
            case 0x306068u: goto label_306068;
            case 0x306080u: goto label_306080;
            case 0x306118u: goto label_306118;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305F8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x305F94u;
    // 0x305f94: 0x0  nop
    ctx->pc = 0x305f94u;
    // NOP
label_305f98:
    // 0x305f98: 0xc092940  jal         func_24A500
    ctx->pc = 0x305F98u;
    SET_GPR_U32(ctx, 31, 0x305FA0u);
    ctx->pc = 0x305F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F98u;
    // 0x305f9c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x305F98u, 0x305FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FA0u;
label_305fa0:
    // 0x305fa0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x305fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x305fa4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x305fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x305fa8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305FA8u;
    {
        const bool branch_taken_0x305fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FA8u;
        // 0x305fac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fa8) {
            ctx->pc = 0x305FCCu;
            goto label_305fcc;
        }
    }
    ctx->pc = 0x305FB0u;
    // 0x305fb0: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x305fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x305fb4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305FB4u;
    {
        const bool branch_taken_0x305fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FB4u;
        // 0x305fb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fb4) {
            ctx->pc = 0x305FCCu;
            goto label_305fcc;
        }
    }
    ctx->pc = 0x305FBCu;
    // 0x305fbc: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x305fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x305fc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x305fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305fc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305fc8: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x305fc8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_305fcc:
    // 0x305fcc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x305FCCu;
    {
        const bool branch_taken_0x305fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FCCu;
        // 0x305fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fcc) {
            ctx->pc = 0x305FE8u;
            goto label_305fe8;
        }
    }
    ctx->pc = 0x305FD4u;
    // 0x305fd4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305FD4u;
    {
        const bool branch_taken_0x305fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x305FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FD4u;
        // 0x305fd8: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305fd4) {
            ctx->pc = 0x305FF8u;
            goto label_305ff8;
        }
    }
    ctx->pc = 0x305FDCu;
    // 0x305fdc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x305FDCu;
    {
        const bool branch_taken_0x305fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305fdc) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x305FE4u;
    // 0x305fe4: 0x0  nop
    ctx->pc = 0x305fe4u;
    // NOP
label_305fe8:
    // 0x305fe8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x305fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x305fec: 0x344200b2  ori         $v0, $v0, 0xB2
    ctx->pc = 0x305fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)178);
    // 0x305ff0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x305FF0u;
    {
        const bool branch_taken_0x305ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FF0u;
        // 0x305ff4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ff0) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x305FF8u;
label_305ff8:
    // 0x305ff8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x305ffc: 0x344200bf  ori         $v0, $v0, 0xBF
    ctx->pc = 0x305ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)191);
    // 0x306000: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x306000u;
    {
        const bool branch_taken_0x306000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306000u;
        // 0x306004: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306000) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306008u;
label_306008:
    // 0x306008: 0xc092940  jal         func_24A500
    ctx->pc = 0x306008u;
    SET_GPR_U32(ctx, 31, 0x306010u);
    ctx->pc = 0x30600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306008u;
    // 0x30600c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306008u, 0x306010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306010u;
label_306010:
    // 0x306010: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x306010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x306014: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x306014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306018: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306018u;
    {
        const bool branch_taken_0x306018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306018u;
        // 0x30601c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306018) {
            ctx->pc = 0x30603Cu;
            goto label_30603c;
        }
    }
    ctx->pc = 0x306020u;
    // 0x306020: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x306020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x306024: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306024u;
    {
        const bool branch_taken_0x306024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306024u;
        // 0x306028: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306024) {
            ctx->pc = 0x30603Cu;
            goto label_30603c;
        }
    }
    ctx->pc = 0x30602Cu;
    // 0x30602c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x30602cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x306030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306034: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x306034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306038: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x306038u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_30603c:
    // 0x30603c: 0x4800072  bltz        $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x30603Cu;
    {
        const bool branch_taken_0x30603c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x306040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30603Cu;
        // 0x306040: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30603c) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306044u;
    // 0x306044: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x306044u;
    {
        const bool branch_taken_0x306044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306044u;
        // 0x306048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306044) {
            ctx->pc = 0x30613Cu;
            goto label_30613c;
        }
    }
    ctx->pc = 0x30604Cu;
    // 0x30604c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306050: 0x1482006e  bne         $a0, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x306050u;
    {
        const bool branch_taken_0x306050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x306054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306050u;
        // 0x306054: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306050) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x306058u;
    // 0x306058: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x306058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x30605c: 0x344200b9  ori         $v0, $v0, 0xB9
    ctx->pc = 0x30605cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)185);
    // 0x306060: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x306060u;
    {
        const bool branch_taken_0x306060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306060u;
        // 0x306064: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306060) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306068u;
label_306068:
    // 0x306068: 0xc092940  jal         func_24A500
    ctx->pc = 0x306068u;
    SET_GPR_U32(ctx, 31, 0x306070u);
    ctx->pc = 0x30606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306068u;
    // 0x30606c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306068u, 0x306070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306070u;
label_306070:
    // 0x306070: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x306070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x306074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306078: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x306078u;
    {
        const bool branch_taken_0x306078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306078u;
        // 0x30607c: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306078) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306080u;
label_306080:
    // 0x306080: 0xc092940  jal         func_24A500
    ctx->pc = 0x306080u;
    SET_GPR_U32(ctx, 31, 0x306088u);
    ctx->pc = 0x306084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306080u;
    // 0x306084: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306080u, 0x306088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306088u;
label_306088:
    // 0x306088: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x306088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30608c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x30608cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306090: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306090u;
    {
        const bool branch_taken_0x306090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306090u;
        // 0x306094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306090) {
            ctx->pc = 0x3060B4u;
            goto label_3060b4;
        }
    }
    ctx->pc = 0x306098u;
    // 0x306098: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x306098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x30609c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30609Cu;
    {
        const bool branch_taken_0x30609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3060A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30609Cu;
        // 0x3060a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30609c) {
            ctx->pc = 0x3060B4u;
            goto label_3060b4;
        }
    }
    ctx->pc = 0x3060A4u;
    // 0x3060a4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x3060a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3060a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3060a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3060ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3060acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3060b0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x3060b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3060b4:
    // 0x3060b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3060b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3060b8: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3060B8u;
    {
        const bool branch_taken_0x3060b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3060BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060B8u;
        // 0x3060bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060b8) {
            ctx->pc = 0x3060F8u;
            goto label_3060f8;
        }
    }
    ctx->pc = 0x3060C0u;
    // 0x3060c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3060C0u;
    {
        const bool branch_taken_0x3060c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060C0u;
        // 0x3060c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060c0) {
            ctx->pc = 0x3060D8u;
            goto label_3060d8;
        }
    }
    ctx->pc = 0x3060C8u;
    // 0x3060c8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3060C8u;
    {
        const bool branch_taken_0x3060c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060C8u;
        // 0x3060cc: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060c8) {
            ctx->pc = 0x3060E8u;
            goto label_3060e8;
        }
    }
    ctx->pc = 0x3060D0u;
    // 0x3060d0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3060D0u;
    {
        const bool branch_taken_0x3060d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3060d0) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x3060D8u;
label_3060d8:
    // 0x3060d8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3060D8u;
    {
        const bool branch_taken_0x3060d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D8u;
        // 0x3060dc: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060d8) {
            ctx->pc = 0x306108u;
            goto label_306108;
        }
    }
    ctx->pc = 0x3060E0u;
    // 0x3060e0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3060E0u;
    {
        const bool branch_taken_0x3060e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3060e0) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x3060E8u;
label_3060e8:
    // 0x3060e8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3060e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3060ec: 0x344200b4  ori         $v0, $v0, 0xB4
    ctx->pc = 0x3060ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)180);
    // 0x3060f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3060F0u;
    {
        const bool branch_taken_0x3060f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060F0u;
        // 0x3060f4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060f0) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x3060F8u;
label_3060f8:
    // 0x3060f8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3060fc: 0x344200c1  ori         $v0, $v0, 0xC1
    ctx->pc = 0x3060fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)193);
    // 0x306100: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x306100u;
    {
        const bool branch_taken_0x306100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306100u;
        // 0x306104: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306100) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306108u;
label_306108:
    // 0x306108: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x306108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x30610c: 0x344200ba  ori         $v0, $v0, 0xBA
    ctx->pc = 0x30610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)186);
    // 0x306110: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x306110u;
    {
        const bool branch_taken_0x306110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306110u;
        // 0x306114: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306110) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306118u;
label_306118:
    // 0x306118: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x30611c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x306120: 0xc0b295a  jal         func_2CA568
    ctx->pc = 0x306120u;
    SET_GPR_U32(ctx, 31, 0x306128u);
    ctx->pc = 0x306124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306120u;
    // 0x306124: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA568u, 0x306120u, 0x306128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306128u;
label_306128:
    // 0x306128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306128u;
    {
        const bool branch_taken_0x306128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306128) {
            ctx->pc = 0x306148u;
            goto label_306148;
        }
    }
    ctx->pc = 0x306130u;
    // 0x306130: 0xc092940  jal         func_24A500
    ctx->pc = 0x306130u;
    SET_GPR_U32(ctx, 31, 0x306138u);
    ctx->pc = 0x306134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306130u;
    // 0x306134: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306130u, 0x306138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306138u;
label_306138:
    // 0x306138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30613c:
    // 0x30613c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x30613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x306140: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x306140u;
    {
        const bool branch_taken_0x306140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306140u;
        // 0x306144: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306140) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x306148u;
label_306148:
    // 0x306148: 0xc092940  jal         func_24A500
    ctx->pc = 0x306148u;
    SET_GPR_U32(ctx, 31, 0x306150u);
    ctx->pc = 0x30614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306148u;
    // 0x30614c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306148u, 0x306150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306150u;
label_306150:
    // 0x306150: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x306154: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x306154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x306158: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306158u;
    {
        const bool branch_taken_0x306158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306158u;
        // 0x30615c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306158) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x306160u;
    // 0x306160: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x306160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x306164: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306164u;
    {
        const bool branch_taken_0x306164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306164u;
        // 0x306168: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306164) {
            ctx->pc = 0x30617Cu;
            goto label_30617c;
        }
    }
    ctx->pc = 0x30616Cu;
    // 0x30616c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x30616cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x306170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306174: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x306174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x306178: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x306178u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_30617c:
    // 0x30617c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30617Cu;
    {
        const bool branch_taken_0x30617c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x306180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30617Cu;
        // 0x306180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30617c) {
            ctx->pc = 0x306198u;
            goto label_306198;
        }
    }
    ctx->pc = 0x306184u;
    // 0x306184: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x306184u;
    {
        const bool branch_taken_0x306184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x306188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306184u;
        // 0x306188: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306184) {
            ctx->pc = 0x3061A8u;
            goto label_3061a8;
        }
    }
    ctx->pc = 0x30618Cu;
    // 0x30618c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x30618Cu;
    {
        const bool branch_taken_0x30618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30618c) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x306194u;
    // 0x306194: 0x0  nop
    ctx->pc = 0x306194u;
    // NOP
label_306198:
    // 0x306198: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x306198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x30619c: 0x344200cc  ori         $v0, $v0, 0xCC
    ctx->pc = 0x30619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)204);
    // 0x3061a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3061A0u;
    {
        const bool branch_taken_0x3061a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061A0u;
        // 0x3061a4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061a0) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x3061A8u;
label_3061a8:
    // 0x3061a8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3061a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3061ac: 0x344200d0  ori         $v0, $v0, 0xD0
    ctx->pc = 0x3061acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)208);
    // 0x3061b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3061B0u;
    {
        const bool branch_taken_0x3061b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061B0u;
        // 0x3061b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061b0) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x3061B8u;
label_3061b8:
    // 0x3061b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3061B8u;
    {
        const bool branch_taken_0x3061b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061B8u;
        // 0x3061bc: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061b8) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x3061C0u;
    // 0x3061c0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3061c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3061c4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3061C4u;
    {
        const bool branch_taken_0x3061c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3061c4) {
            ctx->pc = 0x3061F8u;
            goto label_3061f8;
        }
    }
    ctx->pc = 0x3061CCu;
    // 0x3061cc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3061ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3061d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3061D0u;
    {
        const bool branch_taken_0x3061d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3061d0) {
            ctx->pc = 0x3061D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3061D0u;
            // 0x3061d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3061E8u;
            goto label_3061e8;
        }
    }
    ctx->pc = 0x3061D8u;
    // 0x3061d8: 0xc092940  jal         func_24A500
    ctx->pc = 0x3061D8u;
    SET_GPR_U32(ctx, 31, 0x3061E0u);
    ctx->pc = 0x3061DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061D8u;
    // 0x3061dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x3061D8u, 0x3061E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061E0u;
label_3061e0:
    // 0x3061e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3061E0u;
    {
        const bool branch_taken_0x3061e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061E0u;
        // 0x3061e4: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061e0) {
            ctx->pc = 0x306208u;
            goto label_306208;
        }
    }
    ctx->pc = 0x3061E8u;
label_3061e8:
    // 0x3061e8: 0xc0c22a0  jal         func_308A80
    ctx->pc = 0x3061E8u;
    SET_GPR_U32(ctx, 31, 0x3061F0u);
    ctx->pc = 0x3061ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061E8u;
    // 0x3061ec: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A80u, 0x3061E8u, 0x3061F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061F0u;
label_3061f0:
    // 0x3061f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3061F0u;
    {
        const bool branch_taken_0x3061f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061F0u;
        // 0x3061f4: 0x32420100  andi        $v0, $s2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3061f0) {
            ctx->pc = 0x30620Cu;
            goto label_30620c;
        }
    }
    ctx->pc = 0x3061F8u;
label_3061f8:
    // 0x3061f8: 0xc092940  jal         func_24A500
    ctx->pc = 0x3061F8u;
    SET_GPR_U32(ctx, 31, 0x306200u);
    ctx->pc = 0x3061FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061F8u;
    // 0x3061fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x3061F8u, 0x306200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306200u;
label_306200:
    // 0x306200: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x306200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x306204: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x306204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_306208:
    // 0x306208: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x306208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
label_30620c:
    // 0x30620c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30620Cu;
    {
        const bool branch_taken_0x30620c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30620Cu;
        // 0x306210: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30620c) {
            ctx->pc = 0x306218u;
            goto label_306218;
        }
    }
    ctx->pc = 0x306214u;
    // 0x306214: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x306214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_306218:
    // 0x306218: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x306218u;
    {
        const bool branch_taken_0x306218 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x306218) {
            ctx->pc = 0x30621Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306218u;
            // 0x30621c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30622Cu;
            goto label_30622c;
        }
    }
    ctx->pc = 0x306220u;
    // 0x306220: 0xc0c2140  jal         func_308500
    ctx->pc = 0x306220u;
    SET_GPR_U32(ctx, 31, 0x306228u);
    ctx->pc = 0x306224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306220u;
    // 0x306224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308500u, 0x306220u, 0x306228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306228u;
label_306228:
    // 0x306228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x306228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30622c:
    // 0x30622c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x306230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x306234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x306234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x306238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30623c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30623cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306240: 0x3e00008  jr          $ra
    ctx->pc = 0x306240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306240u;
        // 0x306244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306248u;
}
