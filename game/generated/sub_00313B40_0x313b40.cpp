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

// Function: sub_00313B40
// Address: 0x313b40 - 0x313dd8
void sub_00313B40_0x313b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313B40_0x313b40");
#endif

    switch (ctx->pc) {
        case 0x313bf0u: goto label_313bf0;
        case 0x313c00u: goto label_313c00;
        case 0x313c88u: goto label_313c88;
        case 0x313cc0u: goto label_313cc0;
        case 0x313d10u: goto label_313d10;
        case 0x313d58u: goto label_313d58;
        default: break;
    }

    ctx->pc = 0x313b40u;

    // 0x313b40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x313b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x313b44: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x313b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x313b48: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x313b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b4c: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x313b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x313b50: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x313b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x313b54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x313b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x313b58: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x313b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x313b5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x313b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x313b60: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x313b60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b64: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x313b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x313b68: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x313b68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b6c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x313b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x313b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x313b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x313b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x313b78: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x313B78u;
    {
        const bool branch_taken_0x313b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B78u;
        // 0x313b7c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b78) {
            ctx->pc = 0x313BACu;
            goto label_313bac;
        }
    }
    ctx->pc = 0x313B80u;
    // 0x313b80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x313b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313b84: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x313B84u;
    {
        const bool branch_taken_0x313b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x313B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B84u;
        // 0x313b88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b84) {
            ctx->pc = 0x313BACu;
            goto label_313bac;
        }
    }
    ctx->pc = 0x313B8Cu;
    // 0x313b8c: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313B8Cu;
    {
        const bool branch_taken_0x313b8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x313B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B8Cu;
        // 0x313b90: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b8c) {
            ctx->pc = 0x313BACu;
            goto label_313bac;
        }
    }
    ctx->pc = 0x313B94u;
    // 0x313b94: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x313B94u;
    {
        const bool branch_taken_0x313b94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x313B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B94u;
        // 0x313b98: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b94) {
            ctx->pc = 0x313BACu;
            goto label_313bac;
        }
    }
    ctx->pc = 0x313B9Cu;
    // 0x313b9c: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313B9Cu;
    {
        const bool branch_taken_0x313b9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x313BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B9Cu;
        // 0x313ba0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b9c) {
            ctx->pc = 0x313BACu;
            goto label_313bac;
        }
    }
    ctx->pc = 0x313BA4u;
    // 0x313ba4: 0x16630082  bne         $s3, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x313BA4u;
    {
        const bool branch_taken_0x313ba4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x313BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BA4u;
        // 0x313ba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ba4) {
            ctx->pc = 0x313DB0u;
            goto label_313db0;
        }
    }
    ctx->pc = 0x313BACu;
label_313bac:
    // 0x313bac: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x313bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x313bb0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x313bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x313bb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x313BB4u;
    {
        const bool branch_taken_0x313bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BB4u;
        // 0x313bb8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bb4) {
            ctx->pc = 0x313BDCu;
            goto label_313bdc;
        }
    }
    ctx->pc = 0x313BBCu;
    // 0x313bbc: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313BBCu;
    {
        const bool branch_taken_0x313bbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x313BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BBCu;
        // 0x313bc0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bbc) {
            ctx->pc = 0x313BDCu;
            goto label_313bdc;
        }
    }
    ctx->pc = 0x313BC4u;
    // 0x313bc4: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x313BC4u;
    {
        const bool branch_taken_0x313bc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x313BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BC4u;
        // 0x313bc8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bc4) {
            ctx->pc = 0x313BDCu;
            goto label_313bdc;
        }
    }
    ctx->pc = 0x313BCCu;
    // 0x313bcc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313BCCu;
    {
        const bool branch_taken_0x313bcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x313BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BCCu;
        // 0x313bd0: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bcc) {
            ctx->pc = 0x313BDCu;
            goto label_313bdc;
        }
    }
    ctx->pc = 0x313BD4u;
    // 0x313bd4: 0x16430076  bne         $s2, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x313BD4u;
    {
        const bool branch_taken_0x313bd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x313BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BD4u;
        // 0x313bd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bd4) {
            ctx->pc = 0x313DB0u;
            goto label_313db0;
        }
    }
    ctx->pc = 0x313BDCu;
label_313bdc:
    // 0x313bdc: 0x1aa00074  blez        $s5, . + 4 + (0x74 << 2)
    ctx->pc = 0x313BDCu;
    {
        const bool branch_taken_0x313bdc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x313BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BDCu;
        // 0x313be0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bdc) {
            ctx->pc = 0x313DB0u;
            goto label_313db0;
        }
    }
    ctx->pc = 0x313BE4u;
    // 0x313be4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x313be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313be8: 0xc0cc106  jal         func_330418
    ctx->pc = 0x313BE8u;
    SET_GPR_U32(ctx, 31, 0x313BF0u);
    ctx->pc = 0x313BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BE8u;
    // 0x313bec: 0x2404fff2  addiu       $a0, $zero, -0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x313BE8u, 0x313BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BF0u;
label_313bf0:
    // 0x313bf0: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x313bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x313bf4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x313bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x313bf8: 0xc0cc106  jal         func_330418
    ctx->pc = 0x313BF8u;
    SET_GPR_U32(ctx, 31, 0x313C00u);
    ctx->pc = 0x313BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BF8u;
    // 0x313bfc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x313BF8u, 0x313C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C00u;
label_313c00:
    // 0x313c00: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x313c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x313c04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x313c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313c08: 0x214a00b  movn        $s4, $s0, $s4
    ctx->pc = 0x313c08u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 16));
    // 0x313c0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x313c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x313c10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c14: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x313c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x313c18: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x313c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x313c1c: 0x25142  srl         $t2, $v0, 5
    ctx->pc = 0x313c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x313c20: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x313c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x313c24: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x313c28: 0x34982  srl         $t1, $v1, 6
    ctx->pc = 0x313c28u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x313c2c: 0x25843  sra         $t3, $v0, 1
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 1));
    // 0x313c30: 0x91140  sll         $v0, $t1, 5
    ctx->pc = 0x313c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x313c34: 0x94180  sll         $t0, $t1, 6
    ctx->pc = 0x313c34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x313c38: 0x25660001  addiu       $a2, $t3, 0x1
    ctx->pc = 0x313c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x313c3c: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x313c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x313c40: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x313c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313c44: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x313c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x313c48: 0x208802b  sltu        $s0, $s0, $t0
    ctx->pc = 0x313c48u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x313c4c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x313c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x313c50: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x313c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x313c54: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x313c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x313c58: 0xae2400c8  sw          $a0, 0xC8($s1)
    ctx->pc = 0x313c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 4));
    // 0x313c5c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x313c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x313c60: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x313c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    // 0x313c64: 0xae290020  sw          $t1, 0x20($s1)
    ctx->pc = 0x313c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 9));
    // 0x313c68: 0xae2a0024  sw          $t2, 0x24($s1)
    ctx->pc = 0x313c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 10));
    // 0x313c6c: 0xae290028  sw          $t1, 0x28($s1)
    ctx->pc = 0x313c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 9));
    // 0x313c70: 0xae26002c  sw          $a2, 0x2C($s1)
    ctx->pc = 0x313c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
    // 0x313c74: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x313c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x313c78: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x313C78u;
    {
        const bool branch_taken_0x313c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C78u;
        // 0x313c7c: 0xae280008  sw          $t0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c78) {
            ctx->pc = 0x313CA4u;
            goto label_313ca4;
        }
    }
    ctx->pc = 0x313C80u;
    // 0x313c80: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x313c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c84: 0x0  nop
    ctx->pc = 0x313c84u;
    // NOP
label_313c88:
    // 0x313c88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x313c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x313c8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x313c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x313c90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x313c94: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x313c94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313c98: 0x0  nop
    ctx->pc = 0x313c98u;
    // NOP
    // 0x313c9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x313C9Cu;
    {
        const bool branch_taken_0x313c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C9Cu;
        // 0x313ca0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c9c) {
            ctx->pc = 0x313C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313c88;
        }
    }
    ctx->pc = 0x313CA4u;
label_313ca4:
    // 0x313ca4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x313ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x313ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313cac: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x313cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x313cb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cb4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x313cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313cb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x313CB8u;
    {
        const bool branch_taken_0x313cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CB8u;
        // 0x313cbc: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cb8) {
            ctx->pc = 0x313CE0u;
            goto label_313ce0;
        }
    }
    ctx->pc = 0x313CC0u;
label_313cc0:
    // 0x313cc0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x313cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x313cc4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x313cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313cc8: 0x0  nop
    ctx->pc = 0x313cc8u;
    // NOP
    // 0x313ccc: 0x0  nop
    ctx->pc = 0x313cccu;
    // NOP
    // 0x313cd0: 0x0  nop
    ctx->pc = 0x313cd0u;
    // NOP
    // 0x313cd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x313CD4u;
    {
        const bool branch_taken_0x313cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CD4u;
        // 0x313cd8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cd4) {
            ctx->pc = 0x313CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313cc0;
        }
    }
    ctx->pc = 0x313CDCu;
    // 0x313cdc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x313cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_313ce0:
    // 0x313ce0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x313ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x313ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313ce8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x313ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x313cec: 0x45202b  sltu        $a0, $v0, $a1
    ctx->pc = 0x313cecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x313cf0: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x313cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
    // 0x313cf4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x313cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x313cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cfc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x313CFCu;
    {
        const bool branch_taken_0x313cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CFCu;
        // 0x313d00: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cfc) {
            ctx->pc = 0x313D30u;
            goto label_313d30;
        }
    }
    ctx->pc = 0x313D04u;
    // 0x313d04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x313d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313d0c: 0x0  nop
    ctx->pc = 0x313d0cu;
    // NOP
label_313d10:
    // 0x313d10: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x313d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x313d14: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x313d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313d18: 0x0  nop
    ctx->pc = 0x313d18u;
    // NOP
    // 0x313d1c: 0x0  nop
    ctx->pc = 0x313d1cu;
    // NOP
    // 0x313d20: 0x0  nop
    ctx->pc = 0x313d20u;
    // NOP
    // 0x313d24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x313D24u;
    {
        const bool branch_taken_0x313d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D24u;
        // 0x313d28: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d24) {
            ctx->pc = 0x313D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313d10;
        }
    }
    ctx->pc = 0x313D2Cu;
    // 0x313d2c: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x313d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_313d30:
    // 0x313d30: 0xb2140  sll         $a0, $t3, 5
    ctx->pc = 0x313d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x313d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313d38: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x313d38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313d3c: 0xae27001c  sw          $a3, 0x1C($s1)
    ctx->pc = 0x313d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 7));
    // 0x313d40: 0xae2b0030  sw          $t3, 0x30($s1)
    ctx->pc = 0x313d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 11));
    // 0x313d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d48: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x313d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
    // 0x313d4c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x313D4Cu;
    {
        const bool branch_taken_0x313d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D4Cu;
        // 0x313d50: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d4c) {
            ctx->pc = 0x313D74u;
            goto label_313d74;
        }
    }
    ctx->pc = 0x313D54u;
    // 0x313d54: 0x0  nop
    ctx->pc = 0x313d54u;
    // NOP
label_313d58:
    // 0x313d58: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x313d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x313d5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x313d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x313d60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x313d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x313d64: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x313d64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x313d68: 0x0  nop
    ctx->pc = 0x313d68u;
    // NOP
    // 0x313d6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x313D6Cu;
    {
        const bool branch_taken_0x313d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D6Cu;
        // 0x313d70: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d6c) {
            ctx->pc = 0x313D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313d58;
        }
    }
    ctx->pc = 0x313D74u;
label_313d74:
    // 0x313d74: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x313d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x313d78: 0x1331818  mult        $v1, $t1, $s3
    ctx->pc = 0x313d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x313d7c: 0x71522018  mult1       $a0, $t2, $s2
    ctx->pc = 0x313d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 18); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x313d80: 0xae34005c  sw          $s4, 0x5C($s1)
    ctx->pc = 0x313d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 20));
    // 0x313d84: 0xb22818  mult        $a1, $a1, $s2
    ctx->pc = 0x313d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x313d88: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x313d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
    // 0x313d8c: 0xa2350074  sb          $s5, 0x74($s1)
    ctx->pc = 0x313d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 21));
    // 0x313d90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x313d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313d98: 0xa233004e  sb          $s3, 0x4E($s1)
    ctx->pc = 0x313d98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 19));
    // 0x313d9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x313d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x313da0: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x313da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x313da4: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x313da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x313da8: 0xae250044  sw          $a1, 0x44($s1)
    ctx->pc = 0x313da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
    // 0x313dac: 0xa232004f  sb          $s2, 0x4F($s1)
    ctx->pc = 0x313dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 18));
label_313db0:
    // 0x313db0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x313db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313db4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x313db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x313db8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x313db8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x313dbc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x313dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x313dc0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x313dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313dc4: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x313dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x313dc8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x313dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x313dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x313DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DCCu;
        // 0x313dd0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313DD4u;
    // 0x313dd4: 0x0  nop
    ctx->pc = 0x313dd4u;
    // NOP
    ctx->pc = 0x313dd8u;
}
