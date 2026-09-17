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

// Function: sub_00268AE0
// Address: 0x268ae0 - 0x26a9b8
void sub_00268AE0_0x268ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268AE0_0x268ae0");
#endif

    switch (ctx->pc) {
        case 0x268b20u: goto label_268b20;
        case 0x268b50u: goto label_268b50;
        case 0x268b88u: goto label_268b88;
        case 0x2691b0u: goto label_2691b0;
        case 0x2691c8u: goto label_2691c8;
        case 0x2691f8u: goto label_2691f8;
        case 0x269210u: goto label_269210;
        case 0x269228u: goto label_269228;
        case 0x269244u: goto label_269244;
        case 0x269264u: goto label_269264;
        case 0x2692c0u: goto label_2692c0;
        case 0x269900u: goto label_269900;
        case 0x269918u: goto label_269918;
        case 0x269948u: goto label_269948;
        case 0x269960u: goto label_269960;
        case 0x269978u: goto label_269978;
        case 0x269994u: goto label_269994;
        case 0x2699b4u: goto label_2699b4;
        case 0x269a14u: goto label_269a14;
        case 0x269a50u: goto label_269a50;
        case 0x269aa0u: goto label_269aa0;
        case 0x269ad8u: goto label_269ad8;
        case 0x26a0f0u: goto label_26a0f0;
        case 0x26a108u: goto label_26a108;
        case 0x26a138u: goto label_26a138;
        case 0x26a150u: goto label_26a150;
        case 0x26a168u: goto label_26a168;
        case 0x26a184u: goto label_26a184;
        case 0x26a1a4u: goto label_26a1a4;
        case 0x26a200u: goto label_26a200;
        case 0x26a840u: goto label_26a840;
        case 0x26a858u: goto label_26a858;
        case 0x26a888u: goto label_26a888;
        case 0x26a8a0u: goto label_26a8a0;
        case 0x26a8b8u: goto label_26a8b8;
        case 0x26a8d4u: goto label_26a8d4;
        case 0x26a8f4u: goto label_26a8f4;
        case 0x26a97cu: goto label_26a97c;
        default: break;
    }

    ctx->pc = 0x268ae0u;

    // 0x268ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x268ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x268ae4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x268ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x268ae8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x268ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x268aec: 0x8f93aa7c  lw          $s3, -0x5584($gp)
    ctx->pc = 0x268aecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x268af0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x268af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x268af4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x268af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x268af8: 0x2452f718  addiu       $s2, $v0, -0x8E8
    ctx->pc = 0x268af8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965016));
    // 0x268afc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x268afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x268b00: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x268b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x268b04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x268b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x268b08: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x268b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x268b0c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x268b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x268b10: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x268b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x268b14: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x268b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x268b18: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x268B18u;
    SET_GPR_U32(ctx, 31, 0x268B20u);
    ctx->pc = 0x268B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B18u;
    // 0x268b1c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x268B18u, 0x268B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B20u;
label_268b20:
    // 0x268b20: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x268b24: 0x30570007  andi        $s7, $v0, 0x7
    ctx->pc = 0x268b24u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x268b28: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x268b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x268b2c: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x268b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x268b30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x268b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x268b34: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x268b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268b38: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x268b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x268b3c: 0x8c710014  lw          $s1, 0x14($v1)
    ctx->pc = 0x268b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x268b40: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x268b40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x268b44: 0x106403b4  beq         $v1, $a0, . + 4 + (0x3B4 << 2)
    ctx->pc = 0x268B44u;
    {
        const bool branch_taken_0x268b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x268B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B44u;
        // 0x268b48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b44) {
            ctx->pc = 0x269A18u;
            goto label_269a18;
        }
    }
    ctx->pc = 0x268B4Cu;
    // 0x268b4c: 0x34028005  ori         $v0, $zero, 0x8005
    ctx->pc = 0x268b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
label_268b50:
    // 0x268b50: 0x546201e3  bnel        $v1, $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x268B50u;
    {
        const bool branch_taken_0x268b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268b50) {
            ctx->pc = 0x268B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268B50u;
            // 0x268b54: 0x86630096  lh          $v1, 0x96($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2692E0u;
            goto label_2692e0;
        }
    }
    ctx->pc = 0x268B58u;
    // 0x268b58: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x268b5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x268b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b60: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x268b60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x268b64: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x268b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x268b68: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x268b6c: 0x96360014  lhu         $s6, 0x14($s1)
    ctx->pc = 0x268b6cu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x268b70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x268b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x268b74: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x268b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x268b78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x268b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x268b7c: 0x12c001d0  beqz        $s6, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x268B7Cu;
    {
        const bool branch_taken_0x268b7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B7Cu;
        // 0x268b80: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b7c) {
            ctx->pc = 0x2692C0u;
            goto label_2692c0;
        }
    }
    ctx->pc = 0x268B84u;
    // 0x268b84: 0x0  nop
    ctx->pc = 0x268b84u;
    // NOP
label_268b88:
    // 0x268b88: 0x86630096  lh          $v1, 0x96($s3)
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x268b8c: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x268b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x268b90: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x268b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x268b94: 0x144001ac  bnez        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x268B94u;
    {
        const bool branch_taken_0x268b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B94u;
        // 0x268b98: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b94) {
            ctx->pc = 0x269248u;
            goto label_269248;
        }
    }
    ctx->pc = 0x268B9Cu;
    // 0x268b9c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x268b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x268ba0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x268ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x268ba4: 0x144001a8  bnez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x268BA4u;
    {
        const bool branch_taken_0x268ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BA4u;
        // 0x268ba8: 0x24063ff8  addiu       $a2, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ba4) {
            ctx->pc = 0x269248u;
            goto label_269248;
        }
    }
    ctx->pc = 0x268BACu;
    // 0x268bac: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x268bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x268bb0: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x268bb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x268bb4: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x268bb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x268bb8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x268bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x268bbc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268bc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x268bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268bc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x268bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268bcc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x268bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x268bd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x268bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x268bd4: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x268BD4u;
    {
        const bool branch_taken_0x268bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x268BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BD4u;
        // 0x268bd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bd4) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268BDCu;
    // 0x268bdc: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x268bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x268be0: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x268BE0u;
    {
        const bool branch_taken_0x268be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BE0u;
        // 0x268be4: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268be0) {
            ctx->pc = 0x268ED8u;
            goto label_268ed8;
        }
    }
    ctx->pc = 0x268BE8u;
    // 0x268be8: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x268be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x268bec: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x268BECu;
    {
        const bool branch_taken_0x268bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BECu;
        // 0x268bf0: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bec) {
            ctx->pc = 0x268D70u;
            goto label_268d70;
        }
    }
    ctx->pc = 0x268BF4u;
    // 0x268bf4: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x268bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x268bf8: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x268BF8u;
    {
        const bool branch_taken_0x268bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BF8u;
        // 0x268bfc: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bf8) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268C00u;
    // 0x268c00: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x268C00u;
    {
        const bool branch_taken_0x268c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C00u;
        // 0x268c04: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c00) {
            ctx->pc = 0x268CB0u;
            goto label_268cb0;
        }
    }
    ctx->pc = 0x268C08u;
    // 0x268c08: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x268c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x268c0c: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x268C0Cu;
    {
        const bool branch_taken_0x268c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C0Cu;
        // 0x268c10: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c0c) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268C14u;
    // 0x268c14: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x268C14u;
    {
        const bool branch_taken_0x268c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C14u;
        // 0x268c18: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c14) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x268C1Cu;
    // 0x268c1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x268C1Cu;
    {
        const bool branch_taken_0x268c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C1Cu;
        // 0x268c20: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c1c) {
            ctx->pc = 0x268C68u;
            goto label_268c68;
        }
    }
    ctx->pc = 0x268C24u;
    // 0x268c24: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x268c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x268c28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268C28u;
    {
        const bool branch_taken_0x268c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C28u;
        // 0x268c2c: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c28) {
            ctx->pc = 0x268C50u;
            goto label_268c50;
        }
    }
    ctx->pc = 0x268C30u;
    // 0x268c30: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x268c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x268c34: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x268C34u;
    {
        const bool branch_taken_0x268c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C34u;
        // 0x268c38: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c34) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268C3Cu;
    // 0x268c3c: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x268C3Cu;
    {
        const bool branch_taken_0x268c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268c3c) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268C44u;
    // 0x268c44: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x268C44u;
    {
        const bool branch_taken_0x268c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c44) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268C4Cu;
    // 0x268c4c: 0x0  nop
    ctx->pc = 0x268c4cu;
    // NOP
label_268c50:
    // 0x268c50: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x268C50u;
    {
        const bool branch_taken_0x268c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C50u;
        // 0x268c54: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c50) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268C58u;
    // 0x268c58: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x268C58u;
    {
        const bool branch_taken_0x268c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268c58) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268C60u;
    // 0x268c60: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x268C60u;
    {
        const bool branch_taken_0x268c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c60) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x268C68u;
label_268c68:
    // 0x268c68: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x268C68u;
    {
        const bool branch_taken_0x268c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C68u;
        // 0x268c6c: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c68) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268C70u;
    // 0x268c70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268C70u;
    {
        const bool branch_taken_0x268c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C70u;
        // 0x268c74: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c70) {
            ctx->pc = 0x268C98u;
            goto label_268c98;
        }
    }
    ctx->pc = 0x268C78u;
    // 0x268c78: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x268c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x268c7c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x268C7Cu;
    {
        const bool branch_taken_0x268c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C7Cu;
        // 0x268c80: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c7c) {
            ctx->pc = 0x2691D8u;
            goto label_2691d8;
        }
    }
    ctx->pc = 0x268C84u;
    // 0x268c84: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x268C84u;
    {
        const bool branch_taken_0x268c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C84u;
        // 0x268c88: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c84) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268C8Cu;
    // 0x268c8c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x268C8Cu;
    {
        const bool branch_taken_0x268c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c8c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268C94u;
    // 0x268c94: 0x0  nop
    ctx->pc = 0x268c94u;
    // NOP
label_268c98:
    // 0x268c98: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x268C98u;
    {
        const bool branch_taken_0x268c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C98u;
        // 0x268c9c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c98) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x268CA0u;
    // 0x268ca0: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x268CA0u;
    {
        const bool branch_taken_0x268ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268ca0) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268CA8u;
    // 0x268ca8: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x268CA8u;
    {
        const bool branch_taken_0x268ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ca8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268CB0u;
label_268cb0:
    // 0x268cb0: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x268CB0u;
    {
        const bool branch_taken_0x268cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CB0u;
        // 0x268cb4: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cb0) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268CB8u;
    // 0x268cb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x268CB8u;
    {
        const bool branch_taken_0x268cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CB8u;
        // 0x268cbc: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cb8) {
            ctx->pc = 0x268D10u;
            goto label_268d10;
        }
    }
    ctx->pc = 0x268CC0u;
    // 0x268cc0: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x268cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x268cc4: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x268CC4u;
    {
        const bool branch_taken_0x268cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CC4u;
        // 0x268cc8: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cc4) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268CCCu;
    // 0x268ccc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268CCCu;
    {
        const bool branch_taken_0x268ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CCCu;
        // 0x268cd0: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ccc) {
            ctx->pc = 0x268CF0u;
            goto label_268cf0;
        }
    }
    ctx->pc = 0x268CD4u;
    // 0x268cd4: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x268cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x268cd8: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x268CD8u;
    {
        const bool branch_taken_0x268cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CD8u;
        // 0x268cdc: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cd8) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268CE0u;
    // 0x268ce0: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x268CE0u;
    {
        const bool branch_taken_0x268ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CE0u;
        // 0x268ce4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ce0) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268CE8u;
    // 0x268ce8: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x268CE8u;
    {
        const bool branch_taken_0x268ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ce8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268CF0u;
label_268cf0:
    // 0x268cf0: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x268CF0u;
    {
        const bool branch_taken_0x268cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CF0u;
        // 0x268cf4: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cf0) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268CF8u;
    // 0x268cf8: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x268CF8u;
    {
        const bool branch_taken_0x268cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CF8u;
        // 0x268cfc: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cf8) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268D00u;
    // 0x268d00: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x268D00u;
    {
        const bool branch_taken_0x268d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D00u;
        // 0x268d04: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d00) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268D08u;
    // 0x268d08: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x268D08u;
    {
        const bool branch_taken_0x268d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d08) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268D10u;
label_268d10:
    // 0x268d10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268D10u;
    {
        const bool branch_taken_0x268d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D10u;
        // 0x268d14: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d10) {
            ctx->pc = 0x268D38u;
            goto label_268d38;
        }
    }
    ctx->pc = 0x268D18u;
    // 0x268d18: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x268d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x268d1c: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x268D1Cu;
    {
        const bool branch_taken_0x268d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D1Cu;
        // 0x268d20: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d1c) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268D24u;
    // 0x268d24: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x268D24u;
    {
        const bool branch_taken_0x268d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268d24) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268D2Cu;
    // 0x268d2c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x268D2Cu;
    {
        const bool branch_taken_0x268d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d2c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268D34u;
    // 0x268d34: 0x0  nop
    ctx->pc = 0x268d34u;
    // NOP
label_268d38:
    // 0x268d38: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x268D38u;
    {
        const bool branch_taken_0x268d38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D38u;
        // 0x268d3c: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d38) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268D40u;
    // 0x268d40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268D40u;
    {
        const bool branch_taken_0x268d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D40u;
        // 0x268d44: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d40) {
            ctx->pc = 0x268D60u;
            goto label_268d60;
        }
    }
    ctx->pc = 0x268D48u;
    // 0x268d48: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x268d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x268d4c: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x268D4Cu;
    {
        const bool branch_taken_0x268d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D4Cu;
        // 0x268d50: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d4c) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268D54u;
    // 0x268d54: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x268D54u;
    {
        const bool branch_taken_0x268d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d54) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268D5Cu;
    // 0x268d5c: 0x0  nop
    ctx->pc = 0x268d5cu;
    // NOP
label_268d60:
    // 0x268d60: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x268D60u;
    {
        const bool branch_taken_0x268d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268d60) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268D68u;
    // 0x268d68: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x268D68u;
    {
        const bool branch_taken_0x268d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268d68) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268D70u;
label_268d70:
    // 0x268d70: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x268D70u;
    {
        const bool branch_taken_0x268d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D70u;
        // 0x268d74: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d70) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268D78u;
    // 0x268d78: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x268D78u;
    {
        const bool branch_taken_0x268d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D78u;
        // 0x268d7c: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d78) {
            ctx->pc = 0x268E38u;
            goto label_268e38;
        }
    }
    ctx->pc = 0x268D80u;
    // 0x268d80: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x268d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x268d84: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x268D84u;
    {
        const bool branch_taken_0x268d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D84u;
        // 0x268d88: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d84) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268D8Cu;
    // 0x268d8c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x268D8Cu;
    {
        const bool branch_taken_0x268d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D8Cu;
        // 0x268d90: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d8c) {
            ctx->pc = 0x268DD8u;
            goto label_268dd8;
        }
    }
    ctx->pc = 0x268D94u;
    // 0x268d94: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x268d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x268d98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268D98u;
    {
        const bool branch_taken_0x268d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D98u;
        // 0x268d9c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d98) {
            ctx->pc = 0x268DC0u;
            goto label_268dc0;
        }
    }
    ctx->pc = 0x268DA0u;
    // 0x268da0: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x268da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x268da4: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x268DA4u;
    {
        const bool branch_taken_0x268da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DA4u;
        // 0x268da8: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268da4) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268DACu;
    // 0x268dac: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x268DACu;
    {
        const bool branch_taken_0x268dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268dac) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268DB4u;
    // 0x268db4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x268DB4u;
    {
        const bool branch_taken_0x268db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268db4) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268DBCu;
    // 0x268dbc: 0x0  nop
    ctx->pc = 0x268dbcu;
    // NOP
label_268dc0:
    // 0x268dc0: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x268DC0u;
    {
        const bool branch_taken_0x268dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DC0u;
        // 0x268dc4: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dc0) {
            ctx->pc = 0x2691A8u;
            goto label_2691a8;
        }
    }
    ctx->pc = 0x268DC8u;
    // 0x268dc8: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x268DC8u;
    {
        const bool branch_taken_0x268dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DC8u;
        // 0x268dcc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dc8) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268DD0u;
    // 0x268dd0: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x268DD0u;
    {
        const bool branch_taken_0x268dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268dd0) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268DD8u;
label_268dd8:
    // 0x268dd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268DD8u;
    {
        const bool branch_taken_0x268dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DD8u;
        // 0x268ddc: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dd8) {
            ctx->pc = 0x268E00u;
            goto label_268e00;
        }
    }
    ctx->pc = 0x268DE0u;
    // 0x268de0: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x268de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x268de4: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x268DE4u;
    {
        const bool branch_taken_0x268de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE4u;
        // 0x268de8: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268de4) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268DECu;
    // 0x268dec: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x268DECu;
    {
        const bool branch_taken_0x268dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268dec) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268DF4u;
    // 0x268df4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x268DF4u;
    {
        const bool branch_taken_0x268df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268df4) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268DFCu;
    // 0x268dfc: 0x0  nop
    ctx->pc = 0x268dfcu;
    // NOP
label_268e00:
    // 0x268e00: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x268E00u;
    {
        const bool branch_taken_0x268e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E00u;
        // 0x268e04: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e00) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268E08u;
    // 0x268e08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268E08u;
    {
        const bool branch_taken_0x268e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E08u;
        // 0x268e0c: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e08) {
            ctx->pc = 0x268E28u;
            goto label_268e28;
        }
    }
    ctx->pc = 0x268E10u;
    // 0x268e10: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x268e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x268e14: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x268E14u;
    {
        const bool branch_taken_0x268e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E14u;
        // 0x268e18: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e14) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268E1Cu;
    // 0x268e1c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x268E1Cu;
    {
        const bool branch_taken_0x268e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e1c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268E24u;
    // 0x268e24: 0x0  nop
    ctx->pc = 0x268e24u;
    // NOP
label_268e28:
    // 0x268e28: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x268E28u;
    {
        const bool branch_taken_0x268e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268e28) {
            ctx->pc = 0x268E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268E28u;
            // 0x268e2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268E30u;
    // 0x268e30: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x268E30u;
    {
        const bool branch_taken_0x268e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e30) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268E38u;
label_268e38:
    // 0x268e38: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x268E38u;
    {
        const bool branch_taken_0x268e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E38u;
        // 0x268e3c: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e38) {
            ctx->pc = 0x268E90u;
            goto label_268e90;
        }
    }
    ctx->pc = 0x268E40u;
    // 0x268e40: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x268e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x268e44: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x268E44u;
    {
        const bool branch_taken_0x268e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E44u;
        // 0x268e48: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e44) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268E4Cu;
    // 0x268e4c: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x268E4Cu;
    {
        const bool branch_taken_0x268e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E4Cu;
        // 0x268e50: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e4c) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268E54u;
    // 0x268e54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268E54u;
    {
        const bool branch_taken_0x268e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E54u;
        // 0x268e58: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e54) {
            ctx->pc = 0x268E78u;
            goto label_268e78;
        }
    }
    ctx->pc = 0x268E5Cu;
    // 0x268e5c: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x268e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x268e60: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x268E60u;
    {
        const bool branch_taken_0x268e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E60u;
        // 0x268e64: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e60) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268E68u;
    // 0x268e68: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x268E68u;
    {
        const bool branch_taken_0x268e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268e68) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268E70u;
    // 0x268e70: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x268E70u;
    {
        const bool branch_taken_0x268e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e70) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268E78u;
label_268e78:
    // 0x268e78: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x268E78u;
    {
        const bool branch_taken_0x268e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E78u;
        // 0x268e7c: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e78) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268E80u;
    // 0x268e80: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x268E80u;
    {
        const bool branch_taken_0x268e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268e80) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268E88u;
    // 0x268e88: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x268E88u;
    {
        const bool branch_taken_0x268e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e88) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268E90u;
label_268e90:
    // 0x268e90: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x268E90u;
    {
        const bool branch_taken_0x268e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E90u;
        // 0x268e94: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e90) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268E98u;
    // 0x268e98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268E98u;
    {
        const bool branch_taken_0x268e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E98u;
        // 0x268e9c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e98) {
            ctx->pc = 0x268EC0u;
            goto label_268ec0;
        }
    }
    ctx->pc = 0x268EA0u;
    // 0x268ea0: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x268ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x268ea4: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x268EA4u;
    {
        const bool branch_taken_0x268ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EA4u;
        // 0x268ea8: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ea4) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268EACu;
    // 0x268eac: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x268EACu;
    {
        const bool branch_taken_0x268eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EACu;
        // 0x268eb0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268eac) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268EB4u;
    // 0x268eb4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x268EB4u;
    {
        const bool branch_taken_0x268eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268eb4) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268EBCu;
    // 0x268ebc: 0x0  nop
    ctx->pc = 0x268ebcu;
    // NOP
label_268ec0:
    // 0x268ec0: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x268EC0u;
    {
        const bool branch_taken_0x268ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EC0u;
        // 0x268ec4: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ec0) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268EC8u;
    // 0x268ec8: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x268EC8u;
    {
        const bool branch_taken_0x268ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268ec8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268ED0u;
    // 0x268ed0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x268ED0u;
    {
        const bool branch_taken_0x268ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ed0) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268ED8u;
label_268ed8:
    // 0x268ed8: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x268ED8u;
    {
        const bool branch_taken_0x268ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268ED8u;
        // 0x268edc: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ed8) {
            ctx->pc = 0x2691D8u;
            goto label_2691d8;
        }
    }
    ctx->pc = 0x268EE0u;
    // 0x268ee0: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x268EE0u;
    {
        const bool branch_taken_0x268ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EE0u;
        // 0x268ee4: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ee0) {
            ctx->pc = 0x269038u;
            goto label_269038;
        }
    }
    ctx->pc = 0x268EE8u;
    // 0x268ee8: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x268ee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x268eec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x268EECu;
    {
        const bool branch_taken_0x268eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EECu;
        // 0x268ef0: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268eec) {
            ctx->pc = 0x268F90u;
            goto label_268f90;
        }
    }
    ctx->pc = 0x268EF4u;
    // 0x268ef4: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x268ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x268ef8: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x268EF8u;
    {
        const bool branch_taken_0x268ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EF8u;
        // 0x268efc: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ef8) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268F00u;
    // 0x268f00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268F00u;
    {
        const bool branch_taken_0x268f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F00u;
        // 0x268f04: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f00) {
            ctx->pc = 0x268F48u;
            goto label_268f48;
        }
    }
    ctx->pc = 0x268F08u;
    // 0x268f08: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x268f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x268f0c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x268F0Cu;
    {
        const bool branch_taken_0x268f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F0Cu;
        // 0x268f10: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f0c) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268F14u;
    // 0x268f14: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x268F14u;
    {
        const bool branch_taken_0x268f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F14u;
        // 0x268f18: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f14) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268F1Cu;
    // 0x268f1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268F1Cu;
    {
        const bool branch_taken_0x268f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F1Cu;
        // 0x268f20: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f1c) {
            ctx->pc = 0x268F38u;
            goto label_268f38;
        }
    }
    ctx->pc = 0x268F24u;
    // 0x268f24: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x268f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x268f28: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x268F28u;
    {
        const bool branch_taken_0x268f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F28u;
        // 0x268f2c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f28) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268F30u;
    // 0x268f30: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x268F30u;
    {
        const bool branch_taken_0x268f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f30) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268F38u;
label_268f38:
    // 0x268f38: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x268F38u;
    {
        const bool branch_taken_0x268f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268f38) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268F40u;
    // 0x268f40: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x268F40u;
    {
        const bool branch_taken_0x268f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f40) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268F48u;
label_268f48:
    // 0x268f48: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x268F48u;
    {
        const bool branch_taken_0x268f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F48u;
        // 0x268f4c: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f48) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268F50u;
    // 0x268f50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268F50u;
    {
        const bool branch_taken_0x268f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F50u;
        // 0x268f54: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f50) {
            ctx->pc = 0x268F78u;
            goto label_268f78;
        }
    }
    ctx->pc = 0x268F58u;
    // 0x268f58: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x268f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x268f5c: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x268F5Cu;
    {
        const bool branch_taken_0x268f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F5Cu;
        // 0x268f60: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f5c) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268F64u;
    // 0x268f64: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x268F64u;
    {
        const bool branch_taken_0x268f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F64u;
        // 0x268f68: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f64) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268F6Cu;
    // 0x268f6c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x268F6Cu;
    {
        const bool branch_taken_0x268f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f6c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268F74u;
    // 0x268f74: 0x0  nop
    ctx->pc = 0x268f74u;
    // NOP
label_268f78:
    // 0x268f78: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x268F78u;
    {
        const bool branch_taken_0x268f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F78u;
        // 0x268f7c: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f78) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268F80u;
    // 0x268f80: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x268F80u;
    {
        const bool branch_taken_0x268f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x268f80) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268F88u;
    // 0x268f88: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x268F88u;
    {
        const bool branch_taken_0x268f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268f88) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268F90u;
label_268f90:
    // 0x268f90: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x268F90u;
    {
        const bool branch_taken_0x268f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F90u;
        // 0x268f94: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f90) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268F98u;
    // 0x268f98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x268F98u;
    {
        const bool branch_taken_0x268f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F98u;
        // 0x268f9c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f98) {
            ctx->pc = 0x268FF0u;
            goto label_268ff0;
        }
    }
    ctx->pc = 0x268FA0u;
    // 0x268fa0: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x268fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x268fa4: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x268FA4u;
    {
        const bool branch_taken_0x268fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FA4u;
        // 0x268fa8: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fa4) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x268FACu;
    // 0x268fac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268FACu;
    {
        const bool branch_taken_0x268fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FACu;
        // 0x268fb0: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fac) {
            ctx->pc = 0x268FD0u;
            goto label_268fd0;
        }
    }
    ctx->pc = 0x268FB4u;
    // 0x268fb4: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x268fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x268fb8: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x268FB8u;
    {
        const bool branch_taken_0x268fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FB8u;
        // 0x268fbc: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fb8) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x268FC0u;
    // 0x268fc0: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x268FC0u;
    {
        const bool branch_taken_0x268fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FC0u;
        // 0x268fc4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fc0) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268FC8u;
    // 0x268fc8: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x268FC8u;
    {
        const bool branch_taken_0x268fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268fc8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268FD0u;
label_268fd0:
    // 0x268fd0: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x268FD0u;
    {
        const bool branch_taken_0x268fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FD0u;
        // 0x268fd4: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fd0) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268FD8u;
    // 0x268fd8: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x268FD8u;
    {
        const bool branch_taken_0x268fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FD8u;
        // 0x268fdc: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fd8) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x268FE0u;
    // 0x268fe0: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x268FE0u;
    {
        const bool branch_taken_0x268fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FE0u;
        // 0x268fe4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fe0) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x268FE8u;
    // 0x268fe8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x268FE8u;
    {
        const bool branch_taken_0x268fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268fe8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x268FF0u;
label_268ff0:
    // 0x268ff0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268FF0u;
    {
        const bool branch_taken_0x268ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FF0u;
        // 0x268ff4: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ff0) {
            ctx->pc = 0x269018u;
            goto label_269018;
        }
    }
    ctx->pc = 0x268FF8u;
    // 0x268ff8: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x268ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x268ffc: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x268FFCu;
    {
        const bool branch_taken_0x268ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FFCu;
        // 0x269000: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ffc) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x269004u;
    // 0x269004: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x269004u;
    {
        const bool branch_taken_0x269004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269004) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x26900Cu;
    // 0x26900c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26900Cu;
    {
        const bool branch_taken_0x26900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26900c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269014u;
    // 0x269014: 0x0  nop
    ctx->pc = 0x269014u;
    // NOP
label_269018:
    // 0x269018: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x269018u;
    {
        const bool branch_taken_0x269018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269018u;
        // 0x26901c: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269018) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x269020u;
    // 0x269020: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x269020u;
    {
        const bool branch_taken_0x269020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269020u;
        // 0x269024: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269020) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269028u;
    // 0x269028: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x269028u;
    {
        const bool branch_taken_0x269028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269028) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269030u;
    // 0x269030: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x269030u;
    {
        const bool branch_taken_0x269030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269030) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x269038u;
label_269038:
    // 0x269038: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x269038u;
    {
        const bool branch_taken_0x269038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269038u;
        // 0x26903c: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269038) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x269040u;
    // 0x269040: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x269040u;
    {
        const bool branch_taken_0x269040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269040u;
        // 0x269044: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269040) {
            ctx->pc = 0x2690F8u;
            goto label_2690f8;
        }
    }
    ctx->pc = 0x269048u;
    // 0x269048: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x269048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26904c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26904Cu;
    {
        const bool branch_taken_0x26904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26904Cu;
        // 0x269050: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26904c) {
            ctx->pc = 0x2690A0u;
            goto label_2690a0;
        }
    }
    ctx->pc = 0x269054u;
    // 0x269054: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x269058: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x269058u;
    {
        const bool branch_taken_0x269058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269058u;
        // 0x26905c: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269058) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x269060u;
    // 0x269060: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x269060u;
    {
        const bool branch_taken_0x269060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269060u;
        // 0x269064: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269060) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x269068u;
    // 0x269068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269068u;
    {
        const bool branch_taken_0x269068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269068u;
        // 0x26906c: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269068) {
            ctx->pc = 0x269088u;
            goto label_269088;
        }
    }
    ctx->pc = 0x269070u;
    // 0x269070: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x269070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x269074: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x269074u;
    {
        const bool branch_taken_0x269074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269074) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x26907Cu;
    // 0x26907c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26907Cu;
    {
        const bool branch_taken_0x26907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26907c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269084u;
    // 0x269084: 0x0  nop
    ctx->pc = 0x269084u;
    // NOP
label_269088:
    // 0x269088: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x269088u;
    {
        const bool branch_taken_0x269088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269088u;
        // 0x26908c: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269088) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x269090u;
    // 0x269090: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x269090u;
    {
        const bool branch_taken_0x269090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269090) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x269098u;
    // 0x269098: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x269098u;
    {
        const bool branch_taken_0x269098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269098) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2690A0u;
label_2690a0:
    // 0x2690a0: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2690A0u;
    {
        const bool branch_taken_0x2690a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690A0u;
        // 0x2690a4: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690a0) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x2690A8u;
    // 0x2690a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2690A8u;
    {
        const bool branch_taken_0x2690a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690A8u;
        // 0x2690ac: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690a8) {
            ctx->pc = 0x2690D0u;
            goto label_2690d0;
        }
    }
    ctx->pc = 0x2690B0u;
    // 0x2690b0: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x2690b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x2690b4: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2690B4u;
    {
        const bool branch_taken_0x2690b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690B4u;
        // 0x2690b8: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690b4) {
            ctx->pc = 0x2691C0u;
            goto label_2691c0;
        }
    }
    ctx->pc = 0x2690BCu;
    // 0x2690bc: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2690BCu;
    {
        const bool branch_taken_0x2690bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690BCu;
        // 0x2690c0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690bc) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x2690C4u;
    // 0x2690c4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2690C4u;
    {
        const bool branch_taken_0x2690c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2690c4) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2690CCu;
    // 0x2690cc: 0x0  nop
    ctx->pc = 0x2690ccu;
    // NOP
label_2690d0:
    // 0x2690d0: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2690D0u;
    {
        const bool branch_taken_0x2690d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690D0u;
        // 0x2690d4: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690d0) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x2690D8u;
    // 0x2690d8: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2690D8u;
    {
        const bool branch_taken_0x2690d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2690DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690D8u;
        // 0x2690dc: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690d8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2690E0u;
    // 0x2690e0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2690E0u;
    {
        const bool branch_taken_0x2690e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E0u;
        // 0x2690e4: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690e0) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2690E8u;
    // 0x2690e8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2690E8u;
    {
        const bool branch_taken_0x2690e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2690e8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2690F0u;
    // 0x2690f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2690F0u;
    {
        const bool branch_taken_0x2690f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2690f0) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x2690F8u;
label_2690f8:
    // 0x2690f8: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2690F8u;
    {
        const bool branch_taken_0x2690f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690F8u;
        // 0x2690fc: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690f8) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x269100u;
    // 0x269100: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x269100u;
    {
        const bool branch_taken_0x269100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269100u;
        // 0x269104: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269100) {
            ctx->pc = 0x269150u;
            goto label_269150;
        }
    }
    ctx->pc = 0x269108u;
    // 0x269108: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x269108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26910c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26910Cu;
    {
        const bool branch_taken_0x26910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26910Cu;
        // 0x269110: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26910c) {
            ctx->pc = 0x269138u;
            goto label_269138;
        }
    }
    ctx->pc = 0x269114u;
    // 0x269114: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x269114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x269118: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x269118u;
    {
        const bool branch_taken_0x269118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269118u;
        // 0x26911c: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269118) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x269120u;
    // 0x269120: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x269120u;
    {
        const bool branch_taken_0x269120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269120u;
        // 0x269124: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269120) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x269128u;
    // 0x269128: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x269128u;
    {
        const bool branch_taken_0x269128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269128) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x269130u;
    // 0x269130: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x269130u;
    {
        const bool branch_taken_0x269130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269130) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269138u;
label_269138:
    // 0x269138: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x269138u;
    {
        const bool branch_taken_0x269138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269138u;
        // 0x26913c: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269138) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x269140u;
    // 0x269140: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x269140u;
    {
        const bool branch_taken_0x269140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269140u;
        // 0x269144: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269140) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x269148u;
    // 0x269148: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x269148u;
    {
        const bool branch_taken_0x269148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269148) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269150u;
label_269150:
    // 0x269150: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x269150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x269154: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x269154u;
    {
        const bool branch_taken_0x269154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269154u;
        // 0x269158: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269154) {
            ctx->pc = 0x269190u;
            goto label_269190;
        }
    }
    ctx->pc = 0x26915Cu;
    // 0x26915c: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x269160: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x269160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x269164: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x269164u;
    {
        const bool branch_taken_0x269164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269164u;
        // 0x269168: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269164) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x26916Cu;
    // 0x26916c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26916cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x269170: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x269170u;
    {
        const bool branch_taken_0x269170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269170u;
        // 0x269174: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269170) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269178u;
    // 0x269178: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x269178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26917c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26917Cu;
    {
        const bool branch_taken_0x26917c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26917c) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269184u;
    // 0x269184: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x269184u;
    {
        const bool branch_taken_0x269184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269184) {
            ctx->pc = 0x269208u;
            goto label_269208;
        }
    }
    ctx->pc = 0x26918Cu;
    // 0x26918c: 0x0  nop
    ctx->pc = 0x26918cu;
    // NOP
label_269190:
    // 0x269190: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x269190u;
    {
        const bool branch_taken_0x269190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269190u;
        // 0x269194: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269190) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x269198u;
    // 0x269198: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x269198u;
    {
        const bool branch_taken_0x269198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269198u;
        // 0x26919c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269198) {
            ctx->pc = 0x2691E4u;
            goto label_2691e4;
        }
    }
    ctx->pc = 0x2691A0u;
    // 0x2691a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2691A0u;
    {
        const bool branch_taken_0x2691a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2691a0) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2691A8u;
label_2691a8:
    // 0x2691a8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2691A8u;
    SET_GPR_U32(ctx, 31, 0x2691B0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2691A8u, 0x2691B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691B0u;
label_2691b0:
    // 0x2691b0: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x2691b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x2691b4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2691B4u;
    {
        const bool branch_taken_0x2691b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691B4u;
        // 0x2691b8: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691b4) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2691BCu;
    // 0x2691bc: 0x0  nop
    ctx->pc = 0x2691bcu;
    // NOP
label_2691c0:
    // 0x2691c0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2691C0u;
    SET_GPR_U32(ctx, 31, 0x2691C8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2691C0u, 0x2691C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691C8u;
label_2691c8:
    // 0x2691c8: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x2691c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x2691cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2691CCu;
    {
        const bool branch_taken_0x2691cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691CCu;
        // 0x2691d0: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691cc) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2691D4u;
    // 0x2691d4: 0x0  nop
    ctx->pc = 0x2691d4u;
    // NOP
label_2691d8:
    // 0x2691d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2691D8u;
    {
        const bool branch_taken_0x2691d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691D8u;
        // 0x2691dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691d8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2691E0u;
label_2691e0:
    // 0x2691e0: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2691e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2691e4:
    // 0x2691e4: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x2691e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x2691e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2691E8u;
    {
        const bool branch_taken_0x2691e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691E8u;
        // 0x2691ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691e8) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x2691F0u;
    // 0x2691f0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2691F0u;
    SET_GPR_U32(ctx, 31, 0x2691F8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2691F0u, 0x2691F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691F8u;
label_2691f8:
    // 0x2691f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2691f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2691fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2691FCu;
    {
        const bool branch_taken_0x2691fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691FCu;
        // 0x269200: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691fc) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x269204u;
    // 0x269204: 0x0  nop
    ctx->pc = 0x269204u;
    // NOP
label_269208:
    // 0x269208: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x269208u;
    SET_GPR_U32(ctx, 31, 0x269210u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x269208u, 0x269210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269210u;
label_269210:
    // 0x269210: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269214u;
    {
        const bool branch_taken_0x269214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269214u;
        // 0x269218: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269214) {
            ctx->pc = 0x269230u;
            goto label_269230;
        }
    }
    ctx->pc = 0x26921Cu;
    // 0x26921c: 0x0  nop
    ctx->pc = 0x26921cu;
    // NOP
label_269220:
    // 0x269220: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x269220u;
    SET_GPR_U32(ctx, 31, 0x269228u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x269220u, 0x269228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269228u;
label_269228:
    // 0x269228: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26922c: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26922cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_269230:
    // 0x269230: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x269230u;
    {
        const bool branch_taken_0x269230 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x269234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269230u;
        // 0x269234: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269230) {
            ctx->pc = 0x269248u;
            goto label_269248;
        }
    }
    ctx->pc = 0x269238u;
    // 0x269238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26923c: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26923Cu;
    SET_GPR_U32(ctx, 31, 0x269244u);
    ctx->pc = 0x269240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26923Cu;
    // 0x269240: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26923Cu, 0x269244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269244u;
label_269244:
    // 0x269244: 0x2f02b  sltu        $fp, $zero, $v0
    ctx->pc = 0x269244u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_269248:
    // 0x269248: 0x13c00019  beqz        $fp, . + 4 + (0x19 << 2)
    ctx->pc = 0x269248u;
    {
        const bool branch_taken_0x269248 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269248u;
        // 0x26924c: 0x2aa200b4  slti        $v0, $s5, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269248) {
            ctx->pc = 0x2692B0u;
            goto label_2692b0;
        }
    }
    ctx->pc = 0x269250u;
    // 0x269250: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x269250u;
    {
        const bool branch_taken_0x269250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269250u;
        // 0x269254: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269250) {
            ctx->pc = 0x2692D8u;
            goto label_2692d8;
        }
    }
    ctx->pc = 0x269258u;
    // 0x269258: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x269258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26925c: 0xc09905e  jal         func_264178
    ctx->pc = 0x26925Cu;
    SET_GPR_U32(ctx, 31, 0x269264u);
    ctx->pc = 0x269260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26925Cu;
    // 0x269260: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26925Cu, 0x269264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269264u;
label_269264:
    // 0x269264: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x269264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x269268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26926c: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x26926cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x269270: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x269270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x269274: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x269274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269278: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x269278u;
    {
        const bool branch_taken_0x269278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269278) {
            ctx->pc = 0x26927Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269278u;
            // 0x26927c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2692B4u;
            goto label_2692b4;
        }
    }
    ctx->pc = 0x269280u;
    // 0x269280: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x269280u;
    {
        const bool branch_taken_0x269280 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x269284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269280u;
        // 0x269284: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269280) {
            ctx->pc = 0x2692A0u;
            goto label_2692a0;
        }
    }
    ctx->pc = 0x269288u;
    // 0x269288: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x269288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x26928c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26928Cu;
    {
        const bool branch_taken_0x26928c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26928c) {
            ctx->pc = 0x269290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26928Cu;
            // 0x269290: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2692A4u;
            goto label_2692a4;
        }
    }
    ctx->pc = 0x269294u;
    // 0x269294: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269294u;
    {
        const bool branch_taken_0x269294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269294u;
        // 0x269298: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269294) {
            ctx->pc = 0x2692B0u;
            goto label_2692b0;
        }
    }
    ctx->pc = 0x26929Cu;
    // 0x26929c: 0x0  nop
    ctx->pc = 0x26929cu;
    // NOP
label_2692a0:
    // 0x2692a0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x2692a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_2692a4:
    // 0x2692a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2692a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2692a8: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x2692a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x2692ac: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2692acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2692b0:
    // 0x2692b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2692b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2692b4:
    // 0x2692b4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x2692b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2692b8: 0x1440fe33  bnez        $v0, . + 4 + (-0x1CD << 2)
    ctx->pc = 0x2692B8u;
    {
        const bool branch_taken_0x2692b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2692BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692B8u;
        // 0x2692bc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692b8) {
            ctx->pc = 0x268B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268b88;
        }
    }
    ctx->pc = 0x2692C0u;
label_2692c0:
    // 0x2692c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2692c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2692c4: 0x504001cf  beql        $v0, $zero, . + 4 + (0x1CF << 2)
    ctx->pc = 0x2692C4u;
    {
        const bool branch_taken_0x2692c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2692c4) {
            ctx->pc = 0x2692C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2692C4u;
            // 0x2692c8: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A04u;
            goto label_269a04;
        }
    }
    ctx->pc = 0x2692CCu;
    // 0x2692cc: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x2692CCu;
    {
        const bool branch_taken_0x2692cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2692cc) {
            ctx->pc = 0x269A18u;
            goto label_269a18;
        }
    }
    ctx->pc = 0x2692D4u;
    // 0x2692d4: 0x0  nop
    ctx->pc = 0x2692d4u;
    // NOP
label_2692d8:
    // 0x2692d8: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x2692D8u;
    {
        const bool branch_taken_0x2692d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692D8u;
        // 0x2692dc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692d8) {
            ctx->pc = 0x2692C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2692c0;
        }
    }
    ctx->pc = 0x2692E0u;
label_2692e0:
    // 0x2692e0: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x2692e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2692e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2692e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2692e8: 0x144001ab  bnez        $v0, . + 4 + (0x1AB << 2)
    ctx->pc = 0x2692E8u;
    {
        const bool branch_taken_0x2692e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2692ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692E8u;
        // 0x2692ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692e8) {
            ctx->pc = 0x269998u;
            goto label_269998;
        }
    }
    ctx->pc = 0x2692F0u;
    // 0x2692f0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2692f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2692f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2692f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2692f8: 0x144001a7  bnez        $v0, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x2692F8u;
    {
        const bool branch_taken_0x2692f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2692FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692F8u;
        // 0x2692fc: 0x24063ff8  addiu       $a2, $zero, 0x3FF8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692f8) {
            ctx->pc = 0x269998u;
            goto label_269998;
        }
    }
    ctx->pc = 0x269300u;
    // 0x269300: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x269300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x269304: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x269304u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x269308: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x269308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x26930c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x269310: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x269310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26931c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x269320: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x269320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269324: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x269324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x269328: 0x10860181  beq         $a0, $a2, . + 4 + (0x181 << 2)
    ctx->pc = 0x269328u;
    {
        const bool branch_taken_0x269328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269328u;
        // 0x26932c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269328) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269330u;
    // 0x269330: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x269330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x269334: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x269334u;
    {
        const bool branch_taken_0x269334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269334u;
        // 0x269338: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269334) {
            ctx->pc = 0x269628u;
            goto label_269628;
        }
    }
    ctx->pc = 0x26933Cu;
    // 0x26933c: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x26933cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x269340: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x269340u;
    {
        const bool branch_taken_0x269340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269340u;
        // 0x269344: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269340) {
            ctx->pc = 0x2694C0u;
            goto label_2694c0;
        }
    }
    ctx->pc = 0x269348u;
    // 0x269348: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x269348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x26934c: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x26934Cu;
    {
        const bool branch_taken_0x26934c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26934Cu;
        // 0x269350: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26934c) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269354u;
    // 0x269354: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x269354u;
    {
        const bool branch_taken_0x269354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269354u;
        // 0x269358: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269354) {
            ctx->pc = 0x269400u;
            goto label_269400;
        }
    }
    ctx->pc = 0x26935Cu;
    // 0x26935c: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x26935cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x269360: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x269360u;
    {
        const bool branch_taken_0x269360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269360u;
        // 0x269364: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269360) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269368u;
    // 0x269368: 0x10820169  beq         $a0, $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x269368u;
    {
        const bool branch_taken_0x269368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269368u;
        // 0x26936c: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269368) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x269370u;
    // 0x269370: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x269370u;
    {
        const bool branch_taken_0x269370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269370u;
        // 0x269374: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269370) {
            ctx->pc = 0x2693B8u;
            goto label_2693b8;
        }
    }
    ctx->pc = 0x269378u;
    // 0x269378: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x269378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26937c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26937Cu;
    {
        const bool branch_taken_0x26937c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26937Cu;
        // 0x269380: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26937c) {
            ctx->pc = 0x2693A0u;
            goto label_2693a0;
        }
    }
    ctx->pc = 0x269384u;
    // 0x269384: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x269384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x269388: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x269388u;
    {
        const bool branch_taken_0x269388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269388u;
        // 0x26938c: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269388) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269390u;
    // 0x269390: 0x10820177  beq         $a0, $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x269390u;
    {
        const bool branch_taken_0x269390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269390) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269398u;
    // 0x269398: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x269398u;
    {
        const bool branch_taken_0x269398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269398) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2693A0u;
label_2693a0:
    // 0x2693a0: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x2693A0u;
    {
        const bool branch_taken_0x2693a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693A0u;
        // 0x2693a4: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693a0) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2693A8u;
    // 0x2693a8: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x2693A8u;
    {
        const bool branch_taken_0x2693a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2693a8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2693B0u;
    // 0x2693b0: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x2693B0u;
    {
        const bool branch_taken_0x2693b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693b0) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x2693B8u;
label_2693b8:
    // 0x2693b8: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x2693B8u;
    {
        const bool branch_taken_0x2693b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2693BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693B8u;
        // 0x2693bc: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693b8) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2693C0u;
    // 0x2693c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2693C0u;
    {
        const bool branch_taken_0x2693c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693C0u;
        // 0x2693c4: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693c0) {
            ctx->pc = 0x2693E8u;
            goto label_2693e8;
        }
    }
    ctx->pc = 0x2693C8u;
    // 0x2693c8: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x2693c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2693cc: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x2693CCu;
    {
        const bool branch_taken_0x2693cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2693D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693CCu;
        // 0x2693d0: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693cc) {
            ctx->pc = 0x269928u;
            goto label_269928;
        }
    }
    ctx->pc = 0x2693D4u;
    // 0x2693d4: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x2693D4u;
    {
        const bool branch_taken_0x2693d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2693D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693D4u;
        // 0x2693d8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693d4) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x2693DCu;
    // 0x2693dc: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x2693DCu;
    {
        const bool branch_taken_0x2693dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693dc) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2693E4u;
    // 0x2693e4: 0x0  nop
    ctx->pc = 0x2693e4u;
    // NOP
label_2693e8:
    // 0x2693e8: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x2693E8u;
    {
        const bool branch_taken_0x2693e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2693ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693E8u;
        // 0x2693ec: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693e8) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x2693F0u;
    // 0x2693f0: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x2693F0u;
    {
        const bool branch_taken_0x2693f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2693f0) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2693F8u;
    // 0x2693f8: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x2693F8u;
    {
        const bool branch_taken_0x2693f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693f8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269400u;
label_269400:
    // 0x269400: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x269400u;
    {
        const bool branch_taken_0x269400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269400u;
        // 0x269404: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269400) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269408u;
    // 0x269408: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269408u;
    {
        const bool branch_taken_0x269408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269408u;
        // 0x26940c: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269408) {
            ctx->pc = 0x269460u;
            goto label_269460;
        }
    }
    ctx->pc = 0x269410u;
    // 0x269410: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x269410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x269414: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x269414u;
    {
        const bool branch_taken_0x269414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269414u;
        // 0x269418: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269414) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x26941Cu;
    // 0x26941c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26941Cu;
    {
        const bool branch_taken_0x26941c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26941Cu;
        // 0x269420: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26941c) {
            ctx->pc = 0x269440u;
            goto label_269440;
        }
    }
    ctx->pc = 0x269424u;
    // 0x269424: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x269428: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x269428u;
    {
        const bool branch_taken_0x269428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269428u;
        // 0x26942c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269428) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269430u;
    // 0x269430: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x269430u;
    {
        const bool branch_taken_0x269430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269430u;
        // 0x269434: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269430) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269438u;
    // 0x269438: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x269438u;
    {
        const bool branch_taken_0x269438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269438) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269440u;
label_269440:
    // 0x269440: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x269440u;
    {
        const bool branch_taken_0x269440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269440u;
        // 0x269444: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269440) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269448u;
    // 0x269448: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x269448u;
    {
        const bool branch_taken_0x269448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269448u;
        // 0x26944c: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269448) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269450u;
    // 0x269450: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x269450u;
    {
        const bool branch_taken_0x269450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269450u;
        // 0x269454: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269450) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269458u;
    // 0x269458: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x269458u;
    {
        const bool branch_taken_0x269458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269458) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269460u;
label_269460:
    // 0x269460: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269460u;
    {
        const bool branch_taken_0x269460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269460u;
        // 0x269464: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269460) {
            ctx->pc = 0x269488u;
            goto label_269488;
        }
    }
    ctx->pc = 0x269468u;
    // 0x269468: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x269468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26946c: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26946Cu;
    {
        const bool branch_taken_0x26946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26946Cu;
        // 0x269470: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26946c) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269474u;
    // 0x269474: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x269474u;
    {
        const bool branch_taken_0x269474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269474) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x26947Cu;
    // 0x26947c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26947Cu;
    {
        const bool branch_taken_0x26947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26947c) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269484u;
    // 0x269484: 0x0  nop
    ctx->pc = 0x269484u;
    // NOP
label_269488:
    // 0x269488: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x269488u;
    {
        const bool branch_taken_0x269488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269488u;
        // 0x26948c: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269488) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269490u;
    // 0x269490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269490u;
    {
        const bool branch_taken_0x269490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269490u;
        // 0x269494: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269490) {
            ctx->pc = 0x2694B0u;
            goto label_2694b0;
        }
    }
    ctx->pc = 0x269498u;
    // 0x269498: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26949c: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26949Cu;
    {
        const bool branch_taken_0x26949c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2694A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26949Cu;
        // 0x2694a0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26949c) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x2694A4u;
    // 0x2694a4: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2694A4u;
    {
        const bool branch_taken_0x2694a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2694a4) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2694ACu;
    // 0x2694ac: 0x0  nop
    ctx->pc = 0x2694acu;
    // NOP
label_2694b0:
    // 0x2694b0: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x2694B0u;
    {
        const bool branch_taken_0x2694b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2694b0) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2694B8u;
    // 0x2694b8: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x2694B8u;
    {
        const bool branch_taken_0x2694b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2694b8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2694C0u;
label_2694c0:
    // 0x2694c0: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x2694C0u;
    {
        const bool branch_taken_0x2694c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2694C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694C0u;
        // 0x2694c4: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694c0) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2694C8u;
    // 0x2694c8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2694C8u;
    {
        const bool branch_taken_0x2694c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2694CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694C8u;
        // 0x2694cc: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694c8) {
            ctx->pc = 0x269588u;
            goto label_269588;
        }
    }
    ctx->pc = 0x2694D0u;
    // 0x2694d0: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x2694d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x2694d4: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x2694D4u;
    {
        const bool branch_taken_0x2694d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2694D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694D4u;
        // 0x2694d8: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694d4) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2694DCu;
    // 0x2694dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2694DCu;
    {
        const bool branch_taken_0x2694dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694DCu;
        // 0x2694e0: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694dc) {
            ctx->pc = 0x269528u;
            goto label_269528;
        }
    }
    ctx->pc = 0x2694E4u;
    // 0x2694e4: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x2694e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x2694e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2694E8u;
    {
        const bool branch_taken_0x2694e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2694ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694E8u;
        // 0x2694ec: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694e8) {
            ctx->pc = 0x269510u;
            goto label_269510;
        }
    }
    ctx->pc = 0x2694F0u;
    // 0x2694f0: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x2694f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x2694f4: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x2694F4u;
    {
        const bool branch_taken_0x2694f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694F4u;
        // 0x2694f8: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694f4) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2694FCu;
    // 0x2694fc: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x2694FCu;
    {
        const bool branch_taken_0x2694fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2694fc) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269504u;
    // 0x269504: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x269504u;
    {
        const bool branch_taken_0x269504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269504) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x26950Cu;
    // 0x26950c: 0x0  nop
    ctx->pc = 0x26950cu;
    // NOP
label_269510:
    // 0x269510: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x269510u;
    {
        const bool branch_taken_0x269510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269510u;
        // 0x269514: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269510) {
            ctx->pc = 0x2698F8u;
            goto label_2698f8;
        }
    }
    ctx->pc = 0x269518u;
    // 0x269518: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x269518u;
    {
        const bool branch_taken_0x269518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269518u;
        // 0x26951c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269518) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269520u;
    // 0x269520: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x269520u;
    {
        const bool branch_taken_0x269520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269520) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269528u;
label_269528:
    // 0x269528: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269528u;
    {
        const bool branch_taken_0x269528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269528u;
        // 0x26952c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269528) {
            ctx->pc = 0x269550u;
            goto label_269550;
        }
    }
    ctx->pc = 0x269530u;
    // 0x269530: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x269530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x269534: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x269534u;
    {
        const bool branch_taken_0x269534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269534u;
        // 0x269538: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269534) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x26953Cu;
    // 0x26953c: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x26953Cu;
    {
        const bool branch_taken_0x26953c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26953c) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269544u;
    // 0x269544: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x269544u;
    {
        const bool branch_taken_0x269544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269544) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x26954Cu;
    // 0x26954c: 0x0  nop
    ctx->pc = 0x26954cu;
    // NOP
label_269550:
    // 0x269550: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x269550u;
    {
        const bool branch_taken_0x269550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269550u;
        // 0x269554: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269550) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269558u;
    // 0x269558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269558u;
    {
        const bool branch_taken_0x269558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269558u;
        // 0x26955c: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269558) {
            ctx->pc = 0x269578u;
            goto label_269578;
        }
    }
    ctx->pc = 0x269560u;
    // 0x269560: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x269560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x269564: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x269564u;
    {
        const bool branch_taken_0x269564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269564u;
        // 0x269568: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269564) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x26956Cu;
    // 0x26956c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26956Cu;
    {
        const bool branch_taken_0x26956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26956c) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269574u;
    // 0x269574: 0x0  nop
    ctx->pc = 0x269574u;
    // NOP
label_269578:
    // 0x269578: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x269578u;
    {
        const bool branch_taken_0x269578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269578) {
            ctx->pc = 0x26957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269578u;
            // 0x26957c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269580u;
    // 0x269580: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x269580u;
    {
        const bool branch_taken_0x269580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269580) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269588u;
label_269588:
    // 0x269588: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269588u;
    {
        const bool branch_taken_0x269588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269588u;
        // 0x26958c: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269588) {
            ctx->pc = 0x2695E0u;
            goto label_2695e0;
        }
    }
    ctx->pc = 0x269590u;
    // 0x269590: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x269590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x269594: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x269594u;
    {
        const bool branch_taken_0x269594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269594u;
        // 0x269598: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269594) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x26959Cu;
    // 0x26959c: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26959Cu;
    {
        const bool branch_taken_0x26959c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2695A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26959Cu;
        // 0x2695a0: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26959c) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2695A4u;
    // 0x2695a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2695A4u;
    {
        const bool branch_taken_0x2695a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695A4u;
        // 0x2695a8: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695a4) {
            ctx->pc = 0x2695C8u;
            goto label_2695c8;
        }
    }
    ctx->pc = 0x2695ACu;
    // 0x2695ac: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x2695acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x2695b0: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2695B0u;
    {
        const bool branch_taken_0x2695b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695B0u;
        // 0x2695b4: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695b0) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2695B8u;
    // 0x2695b8: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2695B8u;
    {
        const bool branch_taken_0x2695b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2695b8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2695C0u;
    // 0x2695c0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x2695C0u;
    {
        const bool branch_taken_0x2695c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695c0) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2695C8u;
label_2695c8:
    // 0x2695c8: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2695C8u;
    {
        const bool branch_taken_0x2695c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2695CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695C8u;
        // 0x2695cc: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695c8) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2695D0u;
    // 0x2695d0: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2695D0u;
    {
        const bool branch_taken_0x2695d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2695d0) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2695D8u;
    // 0x2695d8: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2695D8u;
    {
        const bool branch_taken_0x2695d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695d8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2695E0u;
label_2695e0:
    // 0x2695e0: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2695E0u;
    {
        const bool branch_taken_0x2695e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2695E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695E0u;
        // 0x2695e4: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695e0) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2695E8u;
    // 0x2695e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2695E8u;
    {
        const bool branch_taken_0x2695e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695E8u;
        // 0x2695ec: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695e8) {
            ctx->pc = 0x269610u;
            goto label_269610;
        }
    }
    ctx->pc = 0x2695F0u;
    // 0x2695f0: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x2695f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x2695f4: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2695F4u;
    {
        const bool branch_taken_0x2695f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2695F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695F4u;
        // 0x2695f8: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695f4) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2695FCu;
    // 0x2695fc: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x2695FCu;
    {
        const bool branch_taken_0x2695fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695FCu;
        // 0x269600: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695fc) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269604u;
    // 0x269604: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x269604u;
    {
        const bool branch_taken_0x269604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269604) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x26960Cu;
    // 0x26960c: 0x0  nop
    ctx->pc = 0x26960cu;
    // NOP
label_269610:
    // 0x269610: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x269610u;
    {
        const bool branch_taken_0x269610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269610u;
        // 0x269614: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269610) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269618u;
    // 0x269618: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x269618u;
    {
        const bool branch_taken_0x269618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269618) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269620u;
    // 0x269620: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x269620u;
    {
        const bool branch_taken_0x269620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269620) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269628u;
label_269628:
    // 0x269628: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x269628u;
    {
        const bool branch_taken_0x269628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269628u;
        // 0x26962c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269628) {
            ctx->pc = 0x269928u;
            goto label_269928;
        }
    }
    ctx->pc = 0x269630u;
    // 0x269630: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x269630u;
    {
        const bool branch_taken_0x269630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269630u;
        // 0x269634: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269630) {
            ctx->pc = 0x269788u;
            goto label_269788;
        }
    }
    ctx->pc = 0x269638u;
    // 0x269638: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x269638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x26963c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26963Cu;
    {
        const bool branch_taken_0x26963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26963Cu;
        // 0x269640: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26963c) {
            ctx->pc = 0x2696E0u;
            goto label_2696e0;
        }
    }
    ctx->pc = 0x269644u;
    // 0x269644: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x269644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x269648: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x269648u;
    {
        const bool branch_taken_0x269648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269648u;
        // 0x26964c: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269648) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269650u;
    // 0x269650: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x269650u;
    {
        const bool branch_taken_0x269650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269650u;
        // 0x269654: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269650) {
            ctx->pc = 0x269698u;
            goto label_269698;
        }
    }
    ctx->pc = 0x269658u;
    // 0x269658: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x269658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x26965c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x26965Cu;
    {
        const bool branch_taken_0x26965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26965Cu;
        // 0x269660: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26965c) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269664u;
    // 0x269664: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x269664u;
    {
        const bool branch_taken_0x269664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269664u;
        // 0x269668: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269664) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x26966Cu;
    // 0x26966c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26966Cu;
    {
        const bool branch_taken_0x26966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26966Cu;
        // 0x269670: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26966c) {
            ctx->pc = 0x269688u;
            goto label_269688;
        }
    }
    ctx->pc = 0x269674u;
    // 0x269674: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x269674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x269678: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x269678u;
    {
        const bool branch_taken_0x269678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269678u;
        // 0x26967c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269678) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269680u;
    // 0x269680: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x269680u;
    {
        const bool branch_taken_0x269680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269680) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269688u;
label_269688:
    // 0x269688: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x269688u;
    {
        const bool branch_taken_0x269688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269688) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269690u;
    // 0x269690: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x269690u;
    {
        const bool branch_taken_0x269690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269690) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269698u;
label_269698:
    // 0x269698: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x269698u;
    {
        const bool branch_taken_0x269698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269698u;
        // 0x26969c: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269698) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2696A0u;
    // 0x2696a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2696A0u;
    {
        const bool branch_taken_0x2696a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696A0u;
        // 0x2696a4: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696a0) {
            ctx->pc = 0x2696C8u;
            goto label_2696c8;
        }
    }
    ctx->pc = 0x2696A8u;
    // 0x2696a8: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x2696a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x2696ac: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2696ACu;
    {
        const bool branch_taken_0x2696ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696ACu;
        // 0x2696b0: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696ac) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2696B4u;
    // 0x2696b4: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2696B4u;
    {
        const bool branch_taken_0x2696b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696B4u;
        // 0x2696b8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696b4) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x2696BCu;
    // 0x2696bc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2696BCu;
    {
        const bool branch_taken_0x2696bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2696bc) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2696C4u;
    // 0x2696c4: 0x0  nop
    ctx->pc = 0x2696c4u;
    // NOP
label_2696c8:
    // 0x2696c8: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2696C8u;
    {
        const bool branch_taken_0x2696c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696C8u;
        // 0x2696cc: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696c8) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2696D0u;
    // 0x2696d0: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2696D0u;
    {
        const bool branch_taken_0x2696d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2696d0) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2696D8u;
    // 0x2696d8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2696D8u;
    {
        const bool branch_taken_0x2696d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2696d8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2696E0u;
label_2696e0:
    // 0x2696e0: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2696E0u;
    {
        const bool branch_taken_0x2696e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E0u;
        // 0x2696e4: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696e0) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2696E8u;
    // 0x2696e8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2696E8u;
    {
        const bool branch_taken_0x2696e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E8u;
        // 0x2696ec: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696e8) {
            ctx->pc = 0x269740u;
            goto label_269740;
        }
    }
    ctx->pc = 0x2696F0u;
    // 0x2696f0: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x2696f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x2696f4: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2696F4u;
    {
        const bool branch_taken_0x2696f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2696F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696F4u;
        // 0x2696f8: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696f4) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2696FCu;
    // 0x2696fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2696FCu;
    {
        const bool branch_taken_0x2696fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696FCu;
        // 0x269700: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696fc) {
            ctx->pc = 0x269720u;
            goto label_269720;
        }
    }
    ctx->pc = 0x269704u;
    // 0x269704: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x269704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x269708: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x269708u;
    {
        const bool branch_taken_0x269708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269708u;
        // 0x26970c: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269708) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269710u;
    // 0x269710: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x269710u;
    {
        const bool branch_taken_0x269710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269710u;
        // 0x269714: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269710) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269718u;
    // 0x269718: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x269718u;
    {
        const bool branch_taken_0x269718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269718) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269720u;
label_269720:
    // 0x269720: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x269720u;
    {
        const bool branch_taken_0x269720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269720u;
        // 0x269724: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269720) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269728u;
    // 0x269728: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x269728u;
    {
        const bool branch_taken_0x269728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269728u;
        // 0x26972c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269728) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269730u;
    // 0x269730: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x269730u;
    {
        const bool branch_taken_0x269730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269730u;
        // 0x269734: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269730) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269738u;
    // 0x269738: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x269738u;
    {
        const bool branch_taken_0x269738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269738) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269740u;
label_269740:
    // 0x269740: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269740u;
    {
        const bool branch_taken_0x269740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269740u;
        // 0x269744: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269740) {
            ctx->pc = 0x269768u;
            goto label_269768;
        }
    }
    ctx->pc = 0x269748u;
    // 0x269748: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x269748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x26974c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x26974Cu;
    {
        const bool branch_taken_0x26974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26974Cu;
        // 0x269750: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26974c) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269754u;
    // 0x269754: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x269754u;
    {
        const bool branch_taken_0x269754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269754) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x26975Cu;
    // 0x26975c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26975Cu;
    {
        const bool branch_taken_0x26975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26975c) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269764u;
    // 0x269764: 0x0  nop
    ctx->pc = 0x269764u;
    // NOP
label_269768:
    // 0x269768: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x269768u;
    {
        const bool branch_taken_0x269768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269768u;
        // 0x26976c: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269768) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x269770u;
    // 0x269770: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x269770u;
    {
        const bool branch_taken_0x269770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269770u;
        // 0x269774: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269770) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269778u;
    // 0x269778: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x269778u;
    {
        const bool branch_taken_0x269778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269778) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269780u;
    // 0x269780: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x269780u;
    {
        const bool branch_taken_0x269780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269780) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x269788u;
label_269788:
    // 0x269788: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x269788u;
    {
        const bool branch_taken_0x269788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269788u;
        // 0x26978c: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269788) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269790u;
    // 0x269790: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x269790u;
    {
        const bool branch_taken_0x269790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269790) {
            ctx->pc = 0x269848u;
            goto label_269848;
        }
    }
    ctx->pc = 0x269798u;
    // 0x269798: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x269798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26979c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26979Cu;
    {
        const bool branch_taken_0x26979c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26979Cu;
        // 0x2697a0: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26979c) {
            ctx->pc = 0x2697F0u;
            goto label_2697f0;
        }
    }
    ctx->pc = 0x2697A4u;
    // 0x2697a4: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x2697a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x2697a8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2697A8u;
    {
        const bool branch_taken_0x2697a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697A8u;
        // 0x2697ac: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697a8) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2697B0u;
    // 0x2697b0: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2697B0u;
    {
        const bool branch_taken_0x2697b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2697B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697B0u;
        // 0x2697b4: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697b0) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2697B8u;
    // 0x2697b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2697B8u;
    {
        const bool branch_taken_0x2697b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697B8u;
        // 0x2697bc: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697b8) {
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x2697C0u;
    // 0x2697c0: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x2697c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x2697c4: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2697C4u;
    {
        const bool branch_taken_0x2697c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2697c4) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x2697CCu;
    // 0x2697cc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2697CCu;
    {
        const bool branch_taken_0x2697cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697cc) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2697D4u;
    // 0x2697d4: 0x0  nop
    ctx->pc = 0x2697d4u;
    // NOP
label_2697d8:
    // 0x2697d8: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2697D8u;
    {
        const bool branch_taken_0x2697d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2697DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697D8u;
        // 0x2697dc: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697d8) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2697E0u;
    // 0x2697e0: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2697E0u;
    {
        const bool branch_taken_0x2697e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2697e0) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x2697E8u;
    // 0x2697e8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2697E8u;
    {
        const bool branch_taken_0x2697e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697e8) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2697F0u;
label_2697f0:
    // 0x2697f0: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2697F0u;
    {
        const bool branch_taken_0x2697f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2697F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697F0u;
        // 0x2697f4: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697f0) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2697F8u;
    // 0x2697f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2697F8u;
    {
        const bool branch_taken_0x2697f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697F8u;
        // 0x2697fc: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697f8) {
            ctx->pc = 0x269820u;
            goto label_269820;
        }
    }
    ctx->pc = 0x269800u;
    // 0x269800: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x269804: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x269804u;
    {
        const bool branch_taken_0x269804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269804u;
        // 0x269808: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269804) {
            ctx->pc = 0x269910u;
            goto label_269910;
        }
    }
    ctx->pc = 0x26980Cu;
    // 0x26980c: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26980Cu;
    {
        const bool branch_taken_0x26980c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26980Cu;
        // 0x269810: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26980c) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269814u;
    // 0x269814: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x269814u;
    {
        const bool branch_taken_0x269814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269814) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x26981Cu;
    // 0x26981c: 0x0  nop
    ctx->pc = 0x26981cu;
    // NOP
label_269820:
    // 0x269820: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x269820u;
    {
        const bool branch_taken_0x269820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269820u;
        // 0x269824: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269820) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269828u;
    // 0x269828: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x269828u;
    {
        const bool branch_taken_0x269828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269828u;
        // 0x26982c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269828) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269830u;
    // 0x269830: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x269830u;
    {
        const bool branch_taken_0x269830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269830u;
        // 0x269834: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269830) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269838u;
    // 0x269838: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x269838u;
    {
        const bool branch_taken_0x269838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269838) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269840u;
    // 0x269840: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x269840u;
    {
        const bool branch_taken_0x269840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269840) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269848u;
label_269848:
    // 0x269848: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x269848u;
    {
        const bool branch_taken_0x269848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269848u;
        // 0x26984c: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269848) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269850u;
    // 0x269850: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x269850u;
    {
        const bool branch_taken_0x269850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269850u;
        // 0x269854: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269850) {
            ctx->pc = 0x2698A0u;
            goto label_2698a0;
        }
    }
    ctx->pc = 0x269858u;
    // 0x269858: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x269858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26985c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26985Cu;
    {
        const bool branch_taken_0x26985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26985Cu;
        // 0x269860: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26985c) {
            ctx->pc = 0x269888u;
            goto label_269888;
        }
    }
    ctx->pc = 0x269864u;
    // 0x269864: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x269864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x269868: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x269868u;
    {
        const bool branch_taken_0x269868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269868u;
        // 0x26986c: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269868) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269870u;
    // 0x269870: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x269870u;
    {
        const bool branch_taken_0x269870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269870u;
        // 0x269874: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269870) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269878u;
    // 0x269878: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x269878u;
    {
        const bool branch_taken_0x269878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269878) {
            ctx->pc = 0x269970u;
            goto label_269970;
        }
    }
    ctx->pc = 0x269880u;
    // 0x269880: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x269880u;
    {
        const bool branch_taken_0x269880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269880) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269888u;
label_269888:
    // 0x269888: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x269888u;
    {
        const bool branch_taken_0x269888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269888u;
        // 0x26988c: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269888) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x269890u;
    // 0x269890: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x269890u;
    {
        const bool branch_taken_0x269890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269890u;
        // 0x269894: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269890) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x269898u;
    // 0x269898: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x269898u;
    {
        const bool branch_taken_0x269898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269898) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2698A0u;
label_2698a0:
    // 0x2698a0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2698a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2698a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2698A4u;
    {
        const bool branch_taken_0x2698a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698A4u;
        // 0x2698a8: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698a4) {
            ctx->pc = 0x2698E0u;
            goto label_2698e0;
        }
    }
    ctx->pc = 0x2698ACu;
    // 0x2698ac: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x2698acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x2698b0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2698b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2698b4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2698B4u;
    {
        const bool branch_taken_0x2698b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B4u;
        // 0x2698b8: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698b4) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2698BCu;
    // 0x2698bc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2698bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2698c0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2698C0u;
    {
        const bool branch_taken_0x2698c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2698C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698C0u;
        // 0x2698c4: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698c0) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2698C8u;
    // 0x2698c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2698c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2698cc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2698CCu;
    {
        const bool branch_taken_0x2698cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2698cc) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2698D4u;
    // 0x2698d4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2698D4u;
    {
        const bool branch_taken_0x2698d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2698d4) {
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2698DCu;
    // 0x2698dc: 0x0  nop
    ctx->pc = 0x2698dcu;
    // NOP
label_2698e0:
    // 0x2698e0: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2698E0u;
    {
        const bool branch_taken_0x2698e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698E0u;
        // 0x2698e4: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698e0) {
            ctx->pc = 0x269930u;
            goto label_269930;
        }
    }
    ctx->pc = 0x2698E8u;
    // 0x2698e8: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2698E8u;
    {
        const bool branch_taken_0x2698e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2698ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698E8u;
        // 0x2698ec: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698e8) {
            ctx->pc = 0x269934u;
            goto label_269934;
        }
    }
    ctx->pc = 0x2698F0u;
    // 0x2698f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2698F0u;
    {
        const bool branch_taken_0x2698f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2698f0) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x2698F8u;
label_2698f8:
    // 0x2698f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2698F8u;
    SET_GPR_U32(ctx, 31, 0x269900u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2698F8u, 0x269900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269900u;
label_269900:
    // 0x269900: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x269900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x269904: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x269904u;
    {
        const bool branch_taken_0x269904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269904u;
        // 0x269908: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269904) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x26990Cu;
    // 0x26990c: 0x0  nop
    ctx->pc = 0x26990cu;
    // NOP
label_269910:
    // 0x269910: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x269910u;
    SET_GPR_U32(ctx, 31, 0x269918u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x269910u, 0x269918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269918u;
label_269918:
    // 0x269918: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x269918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26991c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26991Cu;
    {
        const bool branch_taken_0x26991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26991Cu;
        // 0x269920: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26991c) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269924u;
    // 0x269924: 0x0  nop
    ctx->pc = 0x269924u;
    // NOP
label_269928:
    // 0x269928: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x269928u;
    {
        const bool branch_taken_0x269928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269928u;
        // 0x26992c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269928) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269930u;
label_269930:
    // 0x269930: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x269930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_269934:
    // 0x269934: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x269934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x269938: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x269938u;
    {
        const bool branch_taken_0x269938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269938u;
        // 0x26993c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269938) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269940u;
    // 0x269940: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x269940u;
    SET_GPR_U32(ctx, 31, 0x269948u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x269940u, 0x269948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269948u;
label_269948:
    // 0x269948: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26994c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26994Cu;
    {
        const bool branch_taken_0x26994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26994Cu;
        // 0x269950: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26994c) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x269954u;
    // 0x269954: 0x0  nop
    ctx->pc = 0x269954u;
    // NOP
label_269958:
    // 0x269958: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x269958u;
    SET_GPR_U32(ctx, 31, 0x269960u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x269958u, 0x269960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269960u;
label_269960:
    // 0x269960: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269964u;
    {
        const bool branch_taken_0x269964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269964u;
        // 0x269968: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269964) {
            ctx->pc = 0x269980u;
            goto label_269980;
        }
    }
    ctx->pc = 0x26996Cu;
    // 0x26996c: 0x0  nop
    ctx->pc = 0x26996cu;
    // NOP
label_269970:
    // 0x269970: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x269970u;
    SET_GPR_U32(ctx, 31, 0x269978u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x269970u, 0x269978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269978u;
label_269978:
    // 0x269978: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26997c: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26997cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_269980:
    // 0x269980: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x269980u;
    {
        const bool branch_taken_0x269980 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x269984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269980u;
        // 0x269984: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269980) {
            ctx->pc = 0x269998u;
            goto label_269998;
        }
    }
    ctx->pc = 0x269988u;
    // 0x269988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26998c: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26998Cu;
    SET_GPR_U32(ctx, 31, 0x269994u);
    ctx->pc = 0x269990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26998Cu;
    // 0x269990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26998Cu, 0x269994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269994u;
label_269994:
    // 0x269994: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_269998:
    // 0x269998: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x269998u;
    {
        const bool branch_taken_0x269998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269998u;
        // 0x26999c: 0x2aa200b4  slti        $v0, $s5, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269998) {
            ctx->pc = 0x269A00u;
            goto label_269a00;
        }
    }
    ctx->pc = 0x2699A0u;
    // 0x2699a0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2699A0u;
    {
        const bool branch_taken_0x2699a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2699a0) {
            ctx->pc = 0x2699A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2699A0u;
            // 0x2699a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A88u;
            goto label_269a88;
        }
    }
    ctx->pc = 0x2699A8u;
    // 0x2699a8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2699a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2699ac: 0xc09905e  jal         func_264178
    ctx->pc = 0x2699ACu;
    SET_GPR_U32(ctx, 31, 0x2699B4u);
    ctx->pc = 0x2699B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699ACu;
    // 0x2699b0: 0x96250008  lhu         $a1, 0x8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x2699ACu, 0x2699B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2699B4u;
label_2699b4:
    // 0x2699b4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2699b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2699b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2699b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699bc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x2699bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x2699c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2699c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2699c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2699c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2699c8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2699C8u;
    {
        const bool branch_taken_0x2699c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2699c8) {
            ctx->pc = 0x2699CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2699C8u;
            // 0x2699cc: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A04u;
            goto label_269a04;
        }
    }
    ctx->pc = 0x2699D0u;
    // 0x2699d0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2699D0u;
    {
        const bool branch_taken_0x2699d0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699D0u;
        // 0x2699d4: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699d0) {
            ctx->pc = 0x2699F0u;
            goto label_2699f0;
        }
    }
    ctx->pc = 0x2699D8u;
    // 0x2699d8: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2699d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2699dc: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2699DCu;
    {
        const bool branch_taken_0x2699dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2699dc) {
            ctx->pc = 0x2699E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2699DCu;
            // 0x2699e0: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2699F4u;
            goto label_2699f4;
        }
    }
    ctx->pc = 0x2699E4u;
    // 0x2699e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2699E4u;
    {
        const bool branch_taken_0x2699e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E4u;
        // 0x2699e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699e4) {
            ctx->pc = 0x269A00u;
            goto label_269a00;
        }
    }
    ctx->pc = 0x2699ECu;
    // 0x2699ec: 0x0  nop
    ctx->pc = 0x2699ecu;
    // NOP
label_2699f0:
    // 0x2699f0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x2699f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_2699f4:
    // 0x2699f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2699f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2699f8: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x2699f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x2699fc: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2699fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_269a00:
    // 0x269a00: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_269a04:
    // 0x269a04: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x269a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x269a08: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x269a08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x269a0c: 0x1462fc50  bne         $v1, $v0, . + 4 + (-0x3B0 << 2)
    ctx->pc = 0x269A0Cu;
    {
        const bool branch_taken_0x269a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x269A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A0Cu;
        // 0x269a10: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a0c) {
            ctx->pc = 0x268B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268b50;
        }
    }
    ctx->pc = 0x269A14u;
label_269a14:
    // 0x269a14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_269a18:
    // 0x269a18: 0x144003d1  bnez        $v0, . + 4 + (0x3D1 << 2)
    ctx->pc = 0x269A18u;
    {
        const bool branch_taken_0x269a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A18u;
        // 0x269a1c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a18) {
            ctx->pc = 0x26A960u;
            goto label_26a960;
        }
    }
    ctx->pc = 0x269A20u;
    // 0x269a20: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x269a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x269a24: 0x86630096  lh          $v1, 0x96($s3)
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 150)));
    // 0x269a28: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x269a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269a2c: 0x544003cc  bnel        $v0, $zero, . + 4 + (0x3CC << 2)
    ctx->pc = 0x269A2Cu;
    {
        const bool branch_taken_0x269a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269a2c) {
            ctx->pc = 0x269A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269A2Cu;
            // 0x269a30: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A960u;
            goto label_26a960;
        }
    }
    ctx->pc = 0x269A34u;
    // 0x269a34: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x269a34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x269a38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x269a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x269a3c: 0x544003c8  bnel        $v0, $zero, . + 4 + (0x3C8 << 2)
    ctx->pc = 0x269A3Cu;
    {
        const bool branch_taken_0x269a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269a3c) {
            ctx->pc = 0x269A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269A3Cu;
            // 0x269a40: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A960u;
            goto label_26a960;
        }
    }
    ctx->pc = 0x269A44u;
    // 0x269a44: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x269a44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x269a48: 0xc09905e  jal         func_264178
    ctx->pc = 0x269A48u;
    SET_GPR_U32(ctx, 31, 0x269A50u);
    ctx->pc = 0x269A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269A48u;
    // 0x269a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x269A48u, 0x269A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A50u;
label_269a50:
    // 0x269a50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x269a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a54: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x269a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x269a58: 0x506203c1  beql        $v1, $v0, . + 4 + (0x3C1 << 2)
    ctx->pc = 0x269A58u;
    {
        const bool branch_taken_0x269a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x269a58) {
            ctx->pc = 0x269A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269A58u;
            // 0x269a5c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A960u;
            goto label_26a960;
        }
    }
    ctx->pc = 0x269A60u;
    // 0x269a60: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x269a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x269a64: 0x8e6400bc  lw          $a0, 0xBC($s3)
    ctx->pc = 0x269a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x269a68: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x269a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x269a6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269A6Cu;
    {
        const bool branch_taken_0x269a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A6Cu;
        // 0x269a70: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a6c) {
            ctx->pc = 0x269A90u;
            goto label_269a90;
        }
    }
    ctx->pc = 0x269A74u;
    // 0x269a74: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x269a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x269a78: 0xae6200bc  sw          $v0, 0xBC($s3)
    ctx->pc = 0x269a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
    // 0x269a7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x269A7Cu;
    {
        const bool branch_taken_0x269a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A7Cu;
        // 0x269a80: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a7c) {
            ctx->pc = 0x269A98u;
            goto label_269a98;
        }
    }
    ctx->pc = 0x269A84u;
    // 0x269a84: 0x0  nop
    ctx->pc = 0x269a84u;
    // NOP
label_269a88:
    // 0x269a88: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x269A88u;
    {
        const bool branch_taken_0x269a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A88u;
        // 0x269a8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a88) {
            ctx->pc = 0x269A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269a14;
        }
    }
    ctx->pc = 0x269A90u;
label_269a90:
    // 0x269a90: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x269a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x269a94: 0xae640054  sw          $a0, 0x54($s3)
    ctx->pc = 0x269a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 4));
label_269a98:
    // 0x269a98: 0x100003aa  b           . + 4 + (0x3AA << 2)
    ctx->pc = 0x269A98u;
    {
        const bool branch_taken_0x269a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A98u;
        // 0x269a9c: 0x8c710014  lw          $s1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a98) {
            ctx->pc = 0x26A944u;
            goto label_26a944;
        }
    }
    ctx->pc = 0x269AA0u;
label_269aa0:
    // 0x269aa0: 0x546201e3  bnel        $v1, $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x269AA0u;
    {
        const bool branch_taken_0x269aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269aa0) {
            ctx->pc = 0x269AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269AA0u;
            // 0x269aa4: 0x96220010  lhu         $v0, 0x10($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A230u;
            goto label_26a230;
        }
    }
    ctx->pc = 0x269AA8u;
    // 0x269aa8: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x269aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x269aac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x269aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ab0: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x269ab0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x269ab4: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x269ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x269ab8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x269ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x269abc: 0x96360014  lhu         $s6, 0x14($s1)
    ctx->pc = 0x269abcu;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x269ac0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x269ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x269ac4: 0x8ca301b0  lw          $v1, 0x1B0($a1)
    ctx->pc = 0x269ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x269ac8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x269ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x269acc: 0x12c001cc  beqz        $s6, . + 4 + (0x1CC << 2)
    ctx->pc = 0x269ACCu;
    {
        const bool branch_taken_0x269acc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269ACCu;
        // 0x269ad0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269acc) {
            ctx->pc = 0x26A200u;
            goto label_26a200;
        }
    }
    ctx->pc = 0x269AD4u;
    // 0x269ad4: 0x0  nop
    ctx->pc = 0x269ad4u;
    // NOP
label_269ad8:
    // 0x269ad8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x269ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x269adc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x269adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x269ae0: 0x104001a9  beqz        $v0, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x269AE0u;
    {
        const bool branch_taken_0x269ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AE0u;
        // 0x269ae4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ae0) {
            ctx->pc = 0x26A188u;
            goto label_26a188;
        }
    }
    ctx->pc = 0x269AE8u;
    // 0x269ae8: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x269ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x269aec: 0x24063ff8  addiu       $a2, $zero, 0x3FF8
    ctx->pc = 0x269aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
    // 0x269af0: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x269af0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x269af4: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x269af4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x269af8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x269af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x269afc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x269afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269b08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x269b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x269b0c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x269b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x269b10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x269b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x269b14: 0x10860182  beq         $a0, $a2, . + 4 + (0x182 << 2)
    ctx->pc = 0x269B14u;
    {
        const bool branch_taken_0x269b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x269B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B14u;
        // 0x269b18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b14) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269B1Cu;
    // 0x269b1c: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x269b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x269b20: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x269B20u;
    {
        const bool branch_taken_0x269b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B20u;
        // 0x269b24: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b20) {
            ctx->pc = 0x269E18u;
            goto label_269e18;
        }
    }
    ctx->pc = 0x269B28u;
    // 0x269b28: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x269b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x269b2c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x269B2Cu;
    {
        const bool branch_taken_0x269b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B2Cu;
        // 0x269b30: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b2c) {
            ctx->pc = 0x269CB0u;
            goto label_269cb0;
        }
    }
    ctx->pc = 0x269B34u;
    // 0x269b34: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x269b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x269b38: 0x10400183  beqz        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x269B38u;
    {
        const bool branch_taken_0x269b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B38u;
        // 0x269b3c: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b38) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269B40u;
    // 0x269b40: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x269B40u;
    {
        const bool branch_taken_0x269b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B40u;
        // 0x269b44: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b40) {
            ctx->pc = 0x269BF0u;
            goto label_269bf0;
        }
    }
    ctx->pc = 0x269B48u;
    // 0x269b48: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x269b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x269b4c: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x269B4Cu;
    {
        const bool branch_taken_0x269b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B4Cu;
        // 0x269b50: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b4c) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269B54u;
    // 0x269b54: 0x1082016a  beq         $a0, $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x269B54u;
    {
        const bool branch_taken_0x269b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B54u;
        // 0x269b58: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b54) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269B5Cu;
    // 0x269b5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x269B5Cu;
    {
        const bool branch_taken_0x269b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B5Cu;
        // 0x269b60: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b5c) {
            ctx->pc = 0x269BA8u;
            goto label_269ba8;
        }
    }
    ctx->pc = 0x269B64u;
    // 0x269b64: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x269b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x269b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269B68u;
    {
        const bool branch_taken_0x269b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B68u;
        // 0x269b6c: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b68) {
            ctx->pc = 0x269B90u;
            goto label_269b90;
        }
    }
    ctx->pc = 0x269B70u;
    // 0x269b70: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x269b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x269b74: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x269B74u;
    {
        const bool branch_taken_0x269b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B74u;
        // 0x269b78: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b74) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269B7Cu;
    // 0x269b7c: 0x10820178  beq         $a0, $v0, . + 4 + (0x178 << 2)
    ctx->pc = 0x269B7Cu;
    {
        const bool branch_taken_0x269b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269b7c) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269B84u;
    // 0x269b84: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x269B84u;
    {
        const bool branch_taken_0x269b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269b84) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269B8Cu;
    // 0x269b8c: 0x0  nop
    ctx->pc = 0x269b8cu;
    // NOP
label_269b90:
    // 0x269b90: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x269B90u;
    {
        const bool branch_taken_0x269b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B90u;
        // 0x269b94: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b90) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269B98u;
    // 0x269b98: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x269B98u;
    {
        const bool branch_taken_0x269b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269b98) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269BA0u;
    // 0x269ba0: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x269BA0u;
    {
        const bool branch_taken_0x269ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ba0) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269BA8u;
label_269ba8:
    // 0x269ba8: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x269BA8u;
    {
        const bool branch_taken_0x269ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BA8u;
        // 0x269bac: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ba8) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269BB0u;
    // 0x269bb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269BB0u;
    {
        const bool branch_taken_0x269bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BB0u;
        // 0x269bb4: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bb0) {
            ctx->pc = 0x269BD8u;
            goto label_269bd8;
        }
    }
    ctx->pc = 0x269BB8u;
    // 0x269bb8: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x269bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x269bbc: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x269BBCu;
    {
        const bool branch_taken_0x269bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BBCu;
        // 0x269bc0: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bbc) {
            ctx->pc = 0x26A118u;
            goto label_26a118;
        }
    }
    ctx->pc = 0x269BC4u;
    // 0x269bc4: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x269BC4u;
    {
        const bool branch_taken_0x269bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BC4u;
        // 0x269bc8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bc4) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269BCCu;
    // 0x269bcc: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x269BCCu;
    {
        const bool branch_taken_0x269bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269bcc) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269BD4u;
    // 0x269bd4: 0x0  nop
    ctx->pc = 0x269bd4u;
    // NOP
label_269bd8:
    // 0x269bd8: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x269BD8u;
    {
        const bool branch_taken_0x269bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BD8u;
        // 0x269bdc: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bd8) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269BE0u;
    // 0x269be0: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x269BE0u;
    {
        const bool branch_taken_0x269be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269be0) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269BE8u;
    // 0x269be8: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x269BE8u;
    {
        const bool branch_taken_0x269be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269be8) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269BF0u;
label_269bf0:
    // 0x269bf0: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x269BF0u;
    {
        const bool branch_taken_0x269bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BF0u;
        // 0x269bf4: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bf0) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269BF8u;
    // 0x269bf8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269BF8u;
    {
        const bool branch_taken_0x269bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BF8u;
        // 0x269bfc: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bf8) {
            ctx->pc = 0x269C50u;
            goto label_269c50;
        }
    }
    ctx->pc = 0x269C00u;
    // 0x269c00: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x269c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x269c04: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x269C04u;
    {
        const bool branch_taken_0x269c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C04u;
        // 0x269c08: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c04) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269C0Cu;
    // 0x269c0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269C0Cu;
    {
        const bool branch_taken_0x269c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C0Cu;
        // 0x269c10: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c0c) {
            ctx->pc = 0x269C30u;
            goto label_269c30;
        }
    }
    ctx->pc = 0x269C14u;
    // 0x269c14: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x269c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x269c18: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x269C18u;
    {
        const bool branch_taken_0x269c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C18u;
        // 0x269c1c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c18) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269C20u;
    // 0x269c20: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x269C20u;
    {
        const bool branch_taken_0x269c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C20u;
        // 0x269c24: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c20) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269C28u;
    // 0x269c28: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x269C28u;
    {
        const bool branch_taken_0x269c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c28) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269C30u;
label_269c30:
    // 0x269c30: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x269C30u;
    {
        const bool branch_taken_0x269c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C30u;
        // 0x269c34: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c30) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269C38u;
    // 0x269c38: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x269C38u;
    {
        const bool branch_taken_0x269c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C38u;
        // 0x269c3c: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c38) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269C40u;
    // 0x269c40: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x269C40u;
    {
        const bool branch_taken_0x269c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C40u;
        // 0x269c44: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c40) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269C48u;
    // 0x269c48: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x269C48u;
    {
        const bool branch_taken_0x269c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c48) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269C50u;
label_269c50:
    // 0x269c50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269C50u;
    {
        const bool branch_taken_0x269c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C50u;
        // 0x269c54: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c50) {
            ctx->pc = 0x269C78u;
            goto label_269c78;
        }
    }
    ctx->pc = 0x269C58u;
    // 0x269c58: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x269c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x269c5c: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x269C5Cu;
    {
        const bool branch_taken_0x269c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C5Cu;
        // 0x269c60: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c5c) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269C64u;
    // 0x269c64: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x269C64u;
    {
        const bool branch_taken_0x269c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269c64) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269C6Cu;
    // 0x269c6c: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x269C6Cu;
    {
        const bool branch_taken_0x269c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c6c) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269C74u;
    // 0x269c74: 0x0  nop
    ctx->pc = 0x269c74u;
    // NOP
label_269c78:
    // 0x269c78: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x269C78u;
    {
        const bool branch_taken_0x269c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C78u;
        // 0x269c7c: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c78) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269C80u;
    // 0x269c80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269C80u;
    {
        const bool branch_taken_0x269c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C80u;
        // 0x269c84: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c80) {
            ctx->pc = 0x269CA0u;
            goto label_269ca0;
        }
    }
    ctx->pc = 0x269C88u;
    // 0x269c88: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x269c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x269c8c: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x269C8Cu;
    {
        const bool branch_taken_0x269c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C8Cu;
        // 0x269c90: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c8c) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269C94u;
    // 0x269c94: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x269C94u;
    {
        const bool branch_taken_0x269c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c94) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269C9Cu;
    // 0x269c9c: 0x0  nop
    ctx->pc = 0x269c9cu;
    // NOP
label_269ca0:
    // 0x269ca0: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x269CA0u;
    {
        const bool branch_taken_0x269ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269ca0) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269CA8u;
    // 0x269ca8: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x269CA8u;
    {
        const bool branch_taken_0x269ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ca8) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269CB0u;
label_269cb0:
    // 0x269cb0: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x269CB0u;
    {
        const bool branch_taken_0x269cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CB0u;
        // 0x269cb4: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cb0) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269CB8u;
    // 0x269cb8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x269CB8u;
    {
        const bool branch_taken_0x269cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CB8u;
        // 0x269cbc: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cb8) {
            ctx->pc = 0x269D78u;
            goto label_269d78;
        }
    }
    ctx->pc = 0x269CC0u;
    // 0x269cc0: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x269cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x269cc4: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x269CC4u;
    {
        const bool branch_taken_0x269cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CC4u;
        // 0x269cc8: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cc4) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269CCCu;
    // 0x269ccc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x269CCCu;
    {
        const bool branch_taken_0x269ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CCCu;
        // 0x269cd0: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ccc) {
            ctx->pc = 0x269D18u;
            goto label_269d18;
        }
    }
    ctx->pc = 0x269CD4u;
    // 0x269cd4: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x269cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x269cd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269CD8u;
    {
        const bool branch_taken_0x269cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CD8u;
        // 0x269cdc: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269cd8) {
            ctx->pc = 0x269D00u;
            goto label_269d00;
        }
    }
    ctx->pc = 0x269CE0u;
    // 0x269ce0: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x269ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x269ce4: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x269CE4u;
    {
        const bool branch_taken_0x269ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269CE4u;
        // 0x269ce8: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ce4) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269CECu;
    // 0x269cec: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x269CECu;
    {
        const bool branch_taken_0x269cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269cec) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269CF4u;
    // 0x269cf4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x269CF4u;
    {
        const bool branch_taken_0x269cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269cf4) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269CFCu;
    // 0x269cfc: 0x0  nop
    ctx->pc = 0x269cfcu;
    // NOP
label_269d00:
    // 0x269d00: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x269D00u;
    {
        const bool branch_taken_0x269d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D00u;
        // 0x269d04: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d00) {
            ctx->pc = 0x26A0E8u;
            goto label_26a0e8;
        }
    }
    ctx->pc = 0x269D08u;
    // 0x269d08: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x269D08u;
    {
        const bool branch_taken_0x269d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D08u;
        // 0x269d0c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d08) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269D10u;
    // 0x269d10: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x269D10u;
    {
        const bool branch_taken_0x269d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d10) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269D18u;
label_269d18:
    // 0x269d18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269D18u;
    {
        const bool branch_taken_0x269d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D18u;
        // 0x269d1c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d18) {
            ctx->pc = 0x269D40u;
            goto label_269d40;
        }
    }
    ctx->pc = 0x269D20u;
    // 0x269d20: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x269d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x269d24: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x269D24u;
    {
        const bool branch_taken_0x269d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D24u;
        // 0x269d28: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d24) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269D2Cu;
    // 0x269d2c: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x269D2Cu;
    {
        const bool branch_taken_0x269d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269d2c) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269D34u;
    // 0x269d34: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x269D34u;
    {
        const bool branch_taken_0x269d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d34) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269D3Cu;
    // 0x269d3c: 0x0  nop
    ctx->pc = 0x269d3cu;
    // NOP
label_269d40:
    // 0x269d40: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x269D40u;
    {
        const bool branch_taken_0x269d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D40u;
        // 0x269d44: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d40) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269D48u;
    // 0x269d48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269D48u;
    {
        const bool branch_taken_0x269d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D48u;
        // 0x269d4c: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d48) {
            ctx->pc = 0x269D68u;
            goto label_269d68;
        }
    }
    ctx->pc = 0x269D50u;
    // 0x269d50: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x269d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x269d54: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x269D54u;
    {
        const bool branch_taken_0x269d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D54u;
        // 0x269d58: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d54) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269D5Cu;
    // 0x269d5c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x269D5Cu;
    {
        const bool branch_taken_0x269d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d5c) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269D64u;
    // 0x269d64: 0x0  nop
    ctx->pc = 0x269d64u;
    // NOP
label_269d68:
    // 0x269d68: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x269D68u;
    {
        const bool branch_taken_0x269d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269d68) {
            ctx->pc = 0x269D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269D68u;
            // 0x269d6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269D70u;
    // 0x269d70: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x269D70u;
    {
        const bool branch_taken_0x269d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269d70) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269D78u;
label_269d78:
    // 0x269d78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269D78u;
    {
        const bool branch_taken_0x269d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D78u;
        // 0x269d7c: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d78) {
            ctx->pc = 0x269DD0u;
            goto label_269dd0;
        }
    }
    ctx->pc = 0x269D80u;
    // 0x269d80: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x269d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x269d84: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x269D84u;
    {
        const bool branch_taken_0x269d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D84u;
        // 0x269d88: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d84) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269D8Cu;
    // 0x269d8c: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x269D8Cu;
    {
        const bool branch_taken_0x269d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D8Cu;
        // 0x269d90: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d8c) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269D94u;
    // 0x269d94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269D94u;
    {
        const bool branch_taken_0x269d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D94u;
        // 0x269d98: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d94) {
            ctx->pc = 0x269DB8u;
            goto label_269db8;
        }
    }
    ctx->pc = 0x269D9Cu;
    // 0x269d9c: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x269d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x269da0: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x269DA0u;
    {
        const bool branch_taken_0x269da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DA0u;
        // 0x269da4: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269da0) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269DA8u;
    // 0x269da8: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x269DA8u;
    {
        const bool branch_taken_0x269da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269da8) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269DB0u;
    // 0x269db0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x269DB0u;
    {
        const bool branch_taken_0x269db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269db0) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269DB8u;
label_269db8:
    // 0x269db8: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x269DB8u;
    {
        const bool branch_taken_0x269db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DB8u;
        // 0x269dbc: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269db8) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269DC0u;
    // 0x269dc0: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x269DC0u;
    {
        const bool branch_taken_0x269dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269dc0) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269DC8u;
    // 0x269dc8: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x269DC8u;
    {
        const bool branch_taken_0x269dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269dc8) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269DD0u;
label_269dd0:
    // 0x269dd0: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x269DD0u;
    {
        const bool branch_taken_0x269dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DD0u;
        // 0x269dd4: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dd0) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269DD8u;
    // 0x269dd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269DD8u;
    {
        const bool branch_taken_0x269dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DD8u;
        // 0x269ddc: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dd8) {
            ctx->pc = 0x269E00u;
            goto label_269e00;
        }
    }
    ctx->pc = 0x269DE0u;
    // 0x269de0: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x269de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x269de4: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x269DE4u;
    {
        const bool branch_taken_0x269de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DE4u;
        // 0x269de8: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269de4) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269DECu;
    // 0x269dec: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x269DECu;
    {
        const bool branch_taken_0x269dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DECu;
        // 0x269df0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269dec) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269DF4u;
    // 0x269df4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x269DF4u;
    {
        const bool branch_taken_0x269df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269df4) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269DFCu;
    // 0x269dfc: 0x0  nop
    ctx->pc = 0x269dfcu;
    // NOP
label_269e00:
    // 0x269e00: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x269E00u;
    {
        const bool branch_taken_0x269e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E00u;
        // 0x269e04: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e00) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269E08u;
    // 0x269e08: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x269E08u;
    {
        const bool branch_taken_0x269e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269e08) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269E10u;
    // 0x269e10: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x269E10u;
    {
        const bool branch_taken_0x269e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e10) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269E18u;
label_269e18:
    // 0x269e18: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x269E18u;
    {
        const bool branch_taken_0x269e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E18u;
        // 0x269e1c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e18) {
            ctx->pc = 0x26A118u;
            goto label_26a118;
        }
    }
    ctx->pc = 0x269E20u;
    // 0x269e20: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x269E20u;
    {
        const bool branch_taken_0x269e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E20u;
        // 0x269e24: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e20) {
            ctx->pc = 0x269F78u;
            goto label_269f78;
        }
    }
    ctx->pc = 0x269E28u;
    // 0x269e28: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x269e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x269e2c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x269E2Cu;
    {
        const bool branch_taken_0x269e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E2Cu;
        // 0x269e30: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e2c) {
            ctx->pc = 0x269ED0u;
            goto label_269ed0;
        }
    }
    ctx->pc = 0x269E34u;
    // 0x269e34: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x269e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x269e38: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x269E38u;
    {
        const bool branch_taken_0x269e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E38u;
        // 0x269e3c: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e38) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269E40u;
    // 0x269e40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x269E40u;
    {
        const bool branch_taken_0x269e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E40u;
        // 0x269e44: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e40) {
            ctx->pc = 0x269E88u;
            goto label_269e88;
        }
    }
    ctx->pc = 0x269E48u;
    // 0x269e48: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x269e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x269e4c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x269E4Cu;
    {
        const bool branch_taken_0x269e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E4Cu;
        // 0x269e50: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e4c) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269E54u;
    // 0x269e54: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x269E54u;
    {
        const bool branch_taken_0x269e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E54u;
        // 0x269e58: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e54) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269E5Cu;
    // 0x269e5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269E5Cu;
    {
        const bool branch_taken_0x269e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E5Cu;
        // 0x269e60: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e5c) {
            ctx->pc = 0x269E78u;
            goto label_269e78;
        }
    }
    ctx->pc = 0x269E64u;
    // 0x269e64: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x269e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x269e68: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x269E68u;
    {
        const bool branch_taken_0x269e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E68u;
        // 0x269e6c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e68) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269E70u;
    // 0x269e70: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x269E70u;
    {
        const bool branch_taken_0x269e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e70) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269E78u;
label_269e78:
    // 0x269e78: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x269E78u;
    {
        const bool branch_taken_0x269e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269e78) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269E80u;
    // 0x269e80: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x269E80u;
    {
        const bool branch_taken_0x269e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269e80) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269E88u;
label_269e88:
    // 0x269e88: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x269E88u;
    {
        const bool branch_taken_0x269e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E88u;
        // 0x269e8c: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e88) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269E90u;
    // 0x269e90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269E90u;
    {
        const bool branch_taken_0x269e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E90u;
        // 0x269e94: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e90) {
            ctx->pc = 0x269EB8u;
            goto label_269eb8;
        }
    }
    ctx->pc = 0x269E98u;
    // 0x269e98: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x269e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x269e9c: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x269E9Cu;
    {
        const bool branch_taken_0x269e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E9Cu;
        // 0x269ea0: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e9c) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269EA4u;
    // 0x269ea4: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x269EA4u;
    {
        const bool branch_taken_0x269ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EA4u;
        // 0x269ea8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ea4) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269EACu;
    // 0x269eac: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x269EACu;
    {
        const bool branch_taken_0x269eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269eac) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269EB4u;
    // 0x269eb4: 0x0  nop
    ctx->pc = 0x269eb4u;
    // NOP
label_269eb8:
    // 0x269eb8: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x269EB8u;
    {
        const bool branch_taken_0x269eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EB8u;
        // 0x269ebc: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269eb8) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269EC0u;
    // 0x269ec0: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x269EC0u;
    {
        const bool branch_taken_0x269ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269ec0) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269EC8u;
    // 0x269ec8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x269EC8u;
    {
        const bool branch_taken_0x269ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ec8) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269ED0u;
label_269ed0:
    // 0x269ed0: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x269ED0u;
    {
        const bool branch_taken_0x269ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269ED0u;
        // 0x269ed4: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ed0) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269ED8u;
    // 0x269ed8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x269ED8u;
    {
        const bool branch_taken_0x269ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269ED8u;
        // 0x269edc: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ed8) {
            ctx->pc = 0x269F30u;
            goto label_269f30;
        }
    }
    ctx->pc = 0x269EE0u;
    // 0x269ee0: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x269ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x269ee4: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x269EE4u;
    {
        const bool branch_taken_0x269ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EE4u;
        // 0x269ee8: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ee4) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269EECu;
    // 0x269eec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269EECu;
    {
        const bool branch_taken_0x269eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EECu;
        // 0x269ef0: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269eec) {
            ctx->pc = 0x269F10u;
            goto label_269f10;
        }
    }
    ctx->pc = 0x269EF4u;
    // 0x269ef4: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x269ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x269ef8: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x269EF8u;
    {
        const bool branch_taken_0x269ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EF8u;
        // 0x269efc: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ef8) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269F00u;
    // 0x269f00: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x269F00u;
    {
        const bool branch_taken_0x269f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F00u;
        // 0x269f04: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f00) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269F08u;
    // 0x269f08: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x269F08u;
    {
        const bool branch_taken_0x269f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f08) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269F10u;
label_269f10:
    // 0x269f10: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x269F10u;
    {
        const bool branch_taken_0x269f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F10u;
        // 0x269f14: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f10) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269F18u;
    // 0x269f18: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x269F18u;
    {
        const bool branch_taken_0x269f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F18u;
        // 0x269f1c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f18) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269F20u;
    // 0x269f20: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x269F20u;
    {
        const bool branch_taken_0x269f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F20u;
        // 0x269f24: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f20) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x269F28u;
    // 0x269f28: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x269F28u;
    {
        const bool branch_taken_0x269f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f28) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269F30u;
label_269f30:
    // 0x269f30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269F30u;
    {
        const bool branch_taken_0x269f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F30u;
        // 0x269f34: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f30) {
            ctx->pc = 0x269F58u;
            goto label_269f58;
        }
    }
    ctx->pc = 0x269F38u;
    // 0x269f38: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x269f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x269f3c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x269F3Cu;
    {
        const bool branch_taken_0x269f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F3Cu;
        // 0x269f40: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f3c) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269F44u;
    // 0x269f44: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x269F44u;
    {
        const bool branch_taken_0x269f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269f44) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269F4Cu;
    // 0x269f4c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x269F4Cu;
    {
        const bool branch_taken_0x269f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f4c) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269F54u;
    // 0x269f54: 0x0  nop
    ctx->pc = 0x269f54u;
    // NOP
label_269f58:
    // 0x269f58: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x269F58u;
    {
        const bool branch_taken_0x269f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F58u;
        // 0x269f5c: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f58) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269F60u;
    // 0x269f60: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x269F60u;
    {
        const bool branch_taken_0x269f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F60u;
        // 0x269f64: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f60) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269F68u;
    // 0x269f68: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x269F68u;
    {
        const bool branch_taken_0x269f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269f68) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269F70u;
    // 0x269f70: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x269F70u;
    {
        const bool branch_taken_0x269f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269f70) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269F78u;
label_269f78:
    // 0x269f78: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x269F78u;
    {
        const bool branch_taken_0x269f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F78u;
        // 0x269f7c: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f78) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269F80u;
    // 0x269f80: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x269F80u;
    {
        const bool branch_taken_0x269f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F80u;
        // 0x269f84: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f80) {
            ctx->pc = 0x26A038u;
            goto label_26a038;
        }
    }
    ctx->pc = 0x269F88u;
    // 0x269f88: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x269f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x269f8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x269F8Cu;
    {
        const bool branch_taken_0x269f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F8Cu;
        // 0x269f90: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f8c) {
            ctx->pc = 0x269FE0u;
            goto label_269fe0;
        }
    }
    ctx->pc = 0x269F94u;
    // 0x269f94: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x269f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x269f98: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x269F98u;
    {
        const bool branch_taken_0x269f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F98u;
        // 0x269f9c: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f98) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x269FA0u;
    // 0x269fa0: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x269FA0u;
    {
        const bool branch_taken_0x269fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FA0u;
        // 0x269fa4: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fa0) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269FA8u;
    // 0x269fa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269FA8u;
    {
        const bool branch_taken_0x269fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FA8u;
        // 0x269fac: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fa8) {
            ctx->pc = 0x269FC8u;
            goto label_269fc8;
        }
    }
    ctx->pc = 0x269FB0u;
    // 0x269fb0: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x269fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x269fb4: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x269FB4u;
    {
        const bool branch_taken_0x269fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269fb4) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269FBCu;
    // 0x269fbc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x269FBCu;
    {
        const bool branch_taken_0x269fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fbc) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269FC4u;
    // 0x269fc4: 0x0  nop
    ctx->pc = 0x269fc4u;
    // NOP
label_269fc8:
    // 0x269fc8: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x269FC8u;
    {
        const bool branch_taken_0x269fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FC8u;
        // 0x269fcc: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fc8) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269FD0u;
    // 0x269fd0: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x269FD0u;
    {
        const bool branch_taken_0x269fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269fd0) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x269FD8u;
    // 0x269fd8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x269FD8u;
    {
        const bool branch_taken_0x269fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fd8) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x269FE0u;
label_269fe0:
    // 0x269fe0: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x269FE0u;
    {
        const bool branch_taken_0x269fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FE0u;
        // 0x269fe4: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fe0) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x269FE8u;
    // 0x269fe8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269FE8u;
    {
        const bool branch_taken_0x269fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FE8u;
        // 0x269fec: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fe8) {
            ctx->pc = 0x26A010u;
            goto label_26a010;
        }
    }
    ctx->pc = 0x269FF0u;
    // 0x269ff0: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x269ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x269ff4: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x269FF4u;
    {
        const bool branch_taken_0x269ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x269FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FF4u;
        // 0x269ff8: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ff4) {
            ctx->pc = 0x26A100u;
            goto label_26a100;
        }
    }
    ctx->pc = 0x269FFCu;
    // 0x269ffc: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x269FFCu;
    {
        const bool branch_taken_0x269ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FFCu;
        // 0x26a000: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ffc) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x26A004u;
    // 0x26a004: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26A004u;
    {
        const bool branch_taken_0x26a004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a004) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A00Cu;
    // 0x26a00c: 0x0  nop
    ctx->pc = 0x26a00cu;
    // NOP
label_26a010:
    // 0x26a010: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26A010u;
    {
        const bool branch_taken_0x26a010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A010u;
        // 0x26a014: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a010) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x26A018u;
    // 0x26a018: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26A018u;
    {
        const bool branch_taken_0x26a018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A018u;
        // 0x26a01c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a018) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A020u;
    // 0x26a020: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26A020u;
    {
        const bool branch_taken_0x26a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A020u;
        // 0x26a024: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a020) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A028u;
    // 0x26a028: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26A028u;
    {
        const bool branch_taken_0x26a028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a028) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A030u;
    // 0x26a030: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26A030u;
    {
        const bool branch_taken_0x26a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a030) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x26A038u;
label_26a038:
    // 0x26a038: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26A038u;
    {
        const bool branch_taken_0x26a038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A038u;
        // 0x26a03c: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a038) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x26A040u;
    // 0x26a040: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26A040u;
    {
        const bool branch_taken_0x26a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A040u;
        // 0x26a044: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a040) {
            ctx->pc = 0x26A090u;
            goto label_26a090;
        }
    }
    ctx->pc = 0x26A048u;
    // 0x26a048: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x26a048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26a04c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26A04Cu;
    {
        const bool branch_taken_0x26a04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A04Cu;
        // 0x26a050: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a04c) {
            ctx->pc = 0x26A078u;
            goto label_26a078;
        }
    }
    ctx->pc = 0x26A054u;
    // 0x26a054: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26a054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x26a058: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26A058u;
    {
        const bool branch_taken_0x26a058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A058u;
        // 0x26a05c: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a058) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x26A060u;
    // 0x26a060: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26A060u;
    {
        const bool branch_taken_0x26a060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A060u;
        // 0x26a064: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a060) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x26A068u;
    // 0x26a068: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26A068u;
    {
        const bool branch_taken_0x26a068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a068) {
            ctx->pc = 0x26A160u;
            goto label_26a160;
        }
    }
    ctx->pc = 0x26A070u;
    // 0x26a070: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26A070u;
    {
        const bool branch_taken_0x26a070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a070) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A078u;
label_26a078:
    // 0x26a078: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26A078u;
    {
        const bool branch_taken_0x26a078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A078u;
        // 0x26a07c: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a078) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x26A080u;
    // 0x26a080: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26A080u;
    {
        const bool branch_taken_0x26a080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A080u;
        // 0x26a084: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a080) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x26A088u;
    // 0x26a088: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26A088u;
    {
        const bool branch_taken_0x26a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a088) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A090u;
label_26a090:
    // 0x26a090: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26a090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26a094: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26A094u;
    {
        const bool branch_taken_0x26a094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A094u;
        // 0x26a098: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a094) {
            ctx->pc = 0x26A0D0u;
            goto label_26a0d0;
        }
    }
    ctx->pc = 0x26A09Cu;
    // 0x26a09c: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26a09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x26a0a0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26a0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a0a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26A0A4u;
    {
        const bool branch_taken_0x26a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0A4u;
        // 0x26a0a8: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0a4) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x26A0ACu;
    // 0x26a0ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26a0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26a0b0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26A0B0u;
    {
        const bool branch_taken_0x26a0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0B0u;
        // 0x26a0b4: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0b0) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A0B8u;
    // 0x26a0b8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26a0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a0bc: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26A0BCu;
    {
        const bool branch_taken_0x26a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a0bc) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A0C4u;
    // 0x26a0c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26A0C4u;
    {
        const bool branch_taken_0x26a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a0c4) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x26A0CCu;
    // 0x26a0cc: 0x0  nop
    ctx->pc = 0x26a0ccu;
    // NOP
label_26a0d0:
    // 0x26a0d0: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26A0D0u;
    {
        const bool branch_taken_0x26a0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0D0u;
        // 0x26a0d4: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0d0) {
            ctx->pc = 0x26A120u;
            goto label_26a120;
        }
    }
    ctx->pc = 0x26A0D8u;
    // 0x26a0d8: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A0D8u;
    {
        const bool branch_taken_0x26a0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0D8u;
        // 0x26a0dc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0d8) {
            ctx->pc = 0x26A124u;
            goto label_26a124;
        }
    }
    ctx->pc = 0x26A0E0u;
    // 0x26a0e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26A0E0u;
    {
        const bool branch_taken_0x26a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a0e0) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A0E8u;
label_26a0e8:
    // 0x26a0e8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A0E8u;
    SET_GPR_U32(ctx, 31, 0x26A0F0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A0E8u, 0x26A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0F0u;
label_26a0f0:
    // 0x26a0f0: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x26a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x26a0f4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26A0F4u;
    {
        const bool branch_taken_0x26a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0F4u;
        // 0x26a0f8: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0f4) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A0FCu;
    // 0x26a0fc: 0x0  nop
    ctx->pc = 0x26a0fcu;
    // NOP
label_26a100:
    // 0x26a100: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A100u;
    SET_GPR_U32(ctx, 31, 0x26A108u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A100u, 0x26A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A108u;
label_26a108:
    // 0x26a108: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x26a108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26a10c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26A10Cu;
    {
        const bool branch_taken_0x26a10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A10Cu;
        // 0x26a110: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a10c) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A114u;
    // 0x26a114: 0x0  nop
    ctx->pc = 0x26a114u;
    // NOP
label_26a118:
    // 0x26a118: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26A118u;
    {
        const bool branch_taken_0x26a118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A118u;
        // 0x26a11c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a118) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A120u;
label_26a120:
    // 0x26a120: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26a124:
    // 0x26a124: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26a124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26a128: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A128u;
    {
        const bool branch_taken_0x26a128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A128u;
        // 0x26a12c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a128) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A130u;
    // 0x26a130: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A130u;
    SET_GPR_U32(ctx, 31, 0x26A138u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A130u, 0x26A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A138u;
label_26a138:
    // 0x26a138: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a13c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26A13Cu;
    {
        const bool branch_taken_0x26a13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A13Cu;
        // 0x26a140: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a13c) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A144u;
    // 0x26a144: 0x0  nop
    ctx->pc = 0x26a144u;
    // NOP
label_26a148:
    // 0x26a148: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A148u;
    SET_GPR_U32(ctx, 31, 0x26A150u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A148u, 0x26A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A150u;
label_26a150:
    // 0x26a150: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A154u;
    {
        const bool branch_taken_0x26a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A154u;
        // 0x26a158: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a154) {
            ctx->pc = 0x26A170u;
            goto label_26a170;
        }
    }
    ctx->pc = 0x26A15Cu;
    // 0x26a15c: 0x0  nop
    ctx->pc = 0x26a15cu;
    // NOP
label_26a160:
    // 0x26a160: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A160u;
    SET_GPR_U32(ctx, 31, 0x26A168u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A160u, 0x26A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A168u;
label_26a168:
    // 0x26a168: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a16c: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26a16cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_26a170:
    // 0x26a170: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A170u;
    {
        const bool branch_taken_0x26a170 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A170u;
        // 0x26a174: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a170) {
            ctx->pc = 0x26A188u;
            goto label_26a188;
        }
    }
    ctx->pc = 0x26A178u;
    // 0x26a178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a17c: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26A17Cu;
    SET_GPR_U32(ctx, 31, 0x26A184u);
    ctx->pc = 0x26A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A17Cu;
    // 0x26a180: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26A17Cu, 0x26A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A184u;
label_26a184:
    // 0x26a184: 0x2f02b  sltu        $fp, $zero, $v0
    ctx->pc = 0x26a184u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a188:
    // 0x26a188: 0x13c00019  beqz        $fp, . + 4 + (0x19 << 2)
    ctx->pc = 0x26A188u;
    {
        const bool branch_taken_0x26a188 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A188u;
        // 0x26a18c: 0x2aa200b4  slti        $v0, $s5, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a188) {
            ctx->pc = 0x26A1F0u;
            goto label_26a1f0;
        }
    }
    ctx->pc = 0x26A190u;
    // 0x26a190: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26A190u;
    {
        const bool branch_taken_0x26a190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A190u;
        // 0x26a194: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a190) {
            ctx->pc = 0x26A218u;
            goto label_26a218;
        }
    }
    ctx->pc = 0x26A198u;
    // 0x26a198: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26a198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26a19c: 0xc09905e  jal         func_264178
    ctx->pc = 0x26A19Cu;
    SET_GPR_U32(ctx, 31, 0x26A1A4u);
    ctx->pc = 0x26A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A19Cu;
    // 0x26a1a0: 0x96050008  lhu         $a1, 0x8($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26A19Cu, 0x26A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1A4u;
label_26a1a4:
    // 0x26a1a4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x26a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x26a1a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1ac: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x26a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x26a1b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26a1b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a1b8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26A1B8u;
    {
        const bool branch_taken_0x26a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a1b8) {
            ctx->pc = 0x26A1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A1B8u;
            // 0x26a1bc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1F4u;
            goto label_26a1f4;
        }
    }
    ctx->pc = 0x26A1C0u;
    // 0x26a1c0: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A1C0u;
    {
        const bool branch_taken_0x26a1c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1C0u;
        // 0x26a1c4: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1c0) {
            ctx->pc = 0x26A1E0u;
            goto label_26a1e0;
        }
    }
    ctx->pc = 0x26A1C8u;
    // 0x26a1c8: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x26a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x26a1cc: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A1CCu;
    {
        const bool branch_taken_0x26a1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26a1cc) {
            ctx->pc = 0x26A1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A1CCu;
            // 0x26a1d0: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1E4u;
            goto label_26a1e4;
        }
    }
    ctx->pc = 0x26A1D4u;
    // 0x26a1d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A1D4u;
    {
        const bool branch_taken_0x26a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1D4u;
        // 0x26a1d8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1d4) {
            ctx->pc = 0x26A1F0u;
            goto label_26a1f0;
        }
    }
    ctx->pc = 0x26A1DCu;
    // 0x26a1dc: 0x0  nop
    ctx->pc = 0x26a1dcu;
    // NOP
label_26a1e0:
    // 0x26a1e0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x26a1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_26a1e4:
    // 0x26a1e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26a1e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26a1e8: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x26a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x26a1ec: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x26a1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_26a1f0:
    // 0x26a1f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x26a1f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_26a1f4:
    // 0x26a1f4: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x26a1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x26a1f8: 0x1440fe37  bnez        $v0, . + 4 + (-0x1C9 << 2)
    ctx->pc = 0x26A1F8u;
    {
        const bool branch_taken_0x26a1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1F8u;
        // 0x26a1fc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1f8) {
            ctx->pc = 0x269AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269ad8;
        }
    }
    ctx->pc = 0x26A200u;
label_26a200:
    // 0x26a200: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a204: 0x504001cf  beql        $v0, $zero, . + 4 + (0x1CF << 2)
    ctx->pc = 0x26A204u;
    {
        const bool branch_taken_0x26a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a204) {
            ctx->pc = 0x26A208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A204u;
            // 0x26a208: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A944u;
            goto label_26a944;
        }
    }
    ctx->pc = 0x26A20Cu;
    // 0x26a20c: 0x100001d2  b           . + 4 + (0x1D2 << 2)
    ctx->pc = 0x26A20Cu;
    {
        const bool branch_taken_0x26a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A20Cu;
        // 0x26a210: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a20c) {
            ctx->pc = 0x26A958u;
            goto label_26a958;
        }
    }
    ctx->pc = 0x26A214u;
    // 0x26a214: 0x0  nop
    ctx->pc = 0x26a214u;
    // NOP
label_26a218:
    // 0x26a218: 0x0  nop
    ctx->pc = 0x26a218u;
    // NOP
    // 0x26a21c: 0x0  nop
    ctx->pc = 0x26a21cu;
    // NOP
    // 0x26a220: 0x0  nop
    ctx->pc = 0x26a220u;
    // NOP
    // 0x26a224: 0x0  nop
    ctx->pc = 0x26a224u;
    // NOP
    // 0x26a228: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x26A228u;
    {
        const bool branch_taken_0x26a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A228u;
        // 0x26a22c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a228) {
            ctx->pc = 0x26A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26a200;
        }
    }
    ctx->pc = 0x26A230u;
label_26a230:
    // 0x26a230: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26a230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26a234: 0x104001a8  beqz        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x26A234u;
    {
        const bool branch_taken_0x26a234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A234u;
        // 0x26a238: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a234) {
            ctx->pc = 0x26A8D8u;
            goto label_26a8d8;
        }
    }
    ctx->pc = 0x26A23Cu;
    // 0x26a23c: 0x8f85aa7c  lw          $a1, -0x5584($gp)
    ctx->pc = 0x26a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26a240: 0x24063ff8  addiu       $a2, $zero, 0x3FF8
    ctx->pc = 0x26a240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16376));
    // 0x26a244: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x26a244u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26a248: 0x84a3003e  lh          $v1, 0x3E($a1)
    ctx->pc = 0x26a248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x26a24c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x26a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x26a250: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a254: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a25c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26a260: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26a264: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26a268: 0x10860181  beq         $a0, $a2, . + 4 + (0x181 << 2)
    ctx->pc = 0x26A268u;
    {
        const bool branch_taken_0x26a268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A268u;
        // 0x26a26c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a268) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A270u;
    // 0x26a270: 0x2c823ff9  sltiu       $v0, $a0, 0x3FF9
    ctx->pc = 0x26a270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16377) ? 1 : 0);
    // 0x26a274: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x26A274u;
    {
        const bool branch_taken_0x26a274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A274u;
        // 0x26a278: 0x240266d3  addiu       $v0, $zero, 0x66D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26323));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a274) {
            ctx->pc = 0x26A568u;
            goto label_26a568;
        }
    }
    ctx->pc = 0x26A27Cu;
    // 0x26a27c: 0x2c821995  sltiu       $v0, $a0, 0x1995
    ctx->pc = 0x26a27cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6549) ? 1 : 0);
    // 0x26a280: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26A280u;
    {
        const bool branch_taken_0x26a280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A280u;
        // 0x26a284: 0x24022fa2  addiu       $v0, $zero, 0x2FA2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a280) {
            ctx->pc = 0x26A400u;
            goto label_26a400;
        }
    }
    ctx->pc = 0x26A288u;
    // 0x26a288: 0x2c821993  sltiu       $v0, $a0, 0x1993
    ctx->pc = 0x26a288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6547) ? 1 : 0);
    // 0x26a28c: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x26A28Cu;
    {
        const bool branch_taken_0x26a28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A28Cu;
        // 0x26a290: 0x2c820901  sltiu       $v0, $a0, 0x901 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2305) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a28c) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A294u;
    // 0x26a294: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26A294u;
    {
        const bool branch_taken_0x26a294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A294u;
        // 0x26a298: 0x24021126  addiu       $v0, $zero, 0x1126 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a294) {
            ctx->pc = 0x26A340u;
            goto label_26a340;
        }
    }
    ctx->pc = 0x26A29Cu;
    // 0x26a29c: 0x2c8208fe  sltiu       $v0, $a0, 0x8FE
    ctx->pc = 0x26a29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2302) ? 1 : 0);
    // 0x26a2a0: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
    ctx->pc = 0x26A2A0u;
    {
        const bool branch_taken_0x26a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2A0u;
        // 0x26a2a4: 0x24020147  addiu       $v0, $zero, 0x147 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2a0) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A2A8u;
    // 0x26a2a8: 0x10820169  beq         $a0, $v0, . + 4 + (0x169 << 2)
    ctx->pc = 0x26A2A8u;
    {
        const bool branch_taken_0x26a2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2A8u;
        // 0x26a2ac: 0x2c820148  sltiu       $v0, $a0, 0x148 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)328) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2a8) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A2B0u;
    // 0x26a2b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A2B0u;
    {
        const bool branch_taken_0x26a2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2B0u;
        // 0x26a2b4: 0x24020183  addiu       $v0, $zero, 0x183 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2b0) {
            ctx->pc = 0x26A2F8u;
            goto label_26a2f8;
        }
    }
    ctx->pc = 0x26A2B8u;
    // 0x26a2b8: 0x2c820138  sltiu       $v0, $a0, 0x138
    ctx->pc = 0x26a2b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26a2bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A2BCu;
    {
        const bool branch_taken_0x26a2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2BCu;
        // 0x26a2c0: 0x2c820146  sltiu       $v0, $a0, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)326) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2bc) {
            ctx->pc = 0x26A2E0u;
            goto label_26a2e0;
        }
    }
    ctx->pc = 0x26A2C4u;
    // 0x26a2c4: 0x2c820135  sltiu       $v0, $a0, 0x135
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)309) ? 1 : 0);
    // 0x26a2c8: 0x10400173  beqz        $v0, . + 4 + (0x173 << 2)
    ctx->pc = 0x26A2C8u;
    {
        const bool branch_taken_0x26a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2C8u;
        // 0x26a2cc: 0x240200c4  addiu       $v0, $zero, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2c8) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A2D0u;
    // 0x26a2d0: 0x10820177  beq         $a0, $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x26A2D0u;
    {
        const bool branch_taken_0x26a2d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a2d0) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A2D8u;
    // 0x26a2d8: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x26A2D8u;
    {
        const bool branch_taken_0x26a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2d8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A2E0u;
label_26a2e0:
    // 0x26a2e0: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x26A2E0u;
    {
        const bool branch_taken_0x26a2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2E0u;
        // 0x26a2e4: 0x2c820144  sltiu       $v0, $a0, 0x144 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2e0) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A2E8u;
    // 0x26a2e8: 0x14400175  bnez        $v0, . + 4 + (0x175 << 2)
    ctx->pc = 0x26A2E8u;
    {
        const bool branch_taken_0x26a2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a2e8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A2F0u;
    // 0x26a2f0: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x26A2F0u;
    {
        const bool branch_taken_0x26a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2f0) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A2F8u;
label_26a2f8:
    // 0x26a2f8: 0x1082015d  beq         $a0, $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x26A2F8u;
    {
        const bool branch_taken_0x26a2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2F8u;
        // 0x26a2fc: 0x2c820184  sltiu       $v0, $a0, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2f8) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A300u;
    // 0x26a300: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A300u;
    {
        const bool branch_taken_0x26a300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A300u;
        // 0x26a304: 0x240201e1  addiu       $v0, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a300) {
            ctx->pc = 0x26A328u;
            goto label_26a328;
        }
    }
    ctx->pc = 0x26A308u;
    // 0x26a308: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x26a308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x26a30c: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26A30Cu;
    {
        const bool branch_taken_0x26a30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A30Cu;
        // 0x26a310: 0x24020177  addiu       $v0, $zero, 0x177 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a30c) {
            ctx->pc = 0x26A868u;
            goto label_26a868;
        }
    }
    ctx->pc = 0x26A314u;
    // 0x26a314: 0x10820157  beq         $a0, $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x26A314u;
    {
        const bool branch_taken_0x26a314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A314u;
        // 0x26a318: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a314) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A31Cu;
    // 0x26a31c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x26A31Cu;
    {
        const bool branch_taken_0x26a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a31c) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A324u;
    // 0x26a324: 0x0  nop
    ctx->pc = 0x26a324u;
    // NOP
label_26a328:
    // 0x26a328: 0x10820149  beq         $a0, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x26A328u;
    {
        const bool branch_taken_0x26a328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A328u;
        // 0x26a32c: 0x24020893  addiu       $v0, $zero, 0x893 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a328) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A330u;
    // 0x26a330: 0x1082015f  beq         $a0, $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x26A330u;
    {
        const bool branch_taken_0x26a330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a330) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A338u;
    // 0x26a338: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x26A338u;
    {
        const bool branch_taken_0x26a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a338) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A340u;
label_26a340:
    // 0x26a340: 0x1082014b  beq         $a0, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x26A340u;
    {
        const bool branch_taken_0x26a340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A340u;
        // 0x26a344: 0x2c821127  sltiu       $v0, $a0, 0x1127 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4391) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a340) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A348u;
    // 0x26a348: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A348u;
    {
        const bool branch_taken_0x26a348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A348u;
        // 0x26a34c: 0x2c8218a4  sltiu       $v0, $a0, 0x18A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a348) {
            ctx->pc = 0x26A3A0u;
            goto label_26a3a0;
        }
    }
    ctx->pc = 0x26A350u;
    // 0x26a350: 0x2402105d  addiu       $v0, $zero, 0x105D
    ctx->pc = 0x26a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4189));
    // 0x26a354: 0x10820156  beq         $a0, $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x26A354u;
    {
        const bool branch_taken_0x26a354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A354u;
        // 0x26a358: 0x2c82105e  sltiu       $v0, $a0, 0x105E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4190) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a354) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A35Cu;
    // 0x26a35c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A35Cu;
    {
        const bool branch_taken_0x26a35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A35Cu;
        // 0x26a360: 0x2c8210c2  sltiu       $v0, $a0, 0x10C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4290) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a35c) {
            ctx->pc = 0x26A380u;
            goto label_26a380;
        }
    }
    ctx->pc = 0x26A364u;
    // 0x26a364: 0x24020975  addiu       $v0, $zero, 0x975
    ctx->pc = 0x26a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2421));
    // 0x26a368: 0x10820141  beq         $a0, $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x26A368u;
    {
        const bool branch_taken_0x26a368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A368u;
        // 0x26a36c: 0x24020984  addiu       $v0, $zero, 0x984 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2436));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a368) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A370u;
    // 0x26a370: 0x10820140  beq         $a0, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x26A370u;
    {
        const bool branch_taken_0x26a370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A370u;
        // 0x26a374: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a370) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A378u;
    // 0x26a378: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x26A378u;
    {
        const bool branch_taken_0x26a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a378) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A380u;
label_26a380:
    // 0x26a380: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x26A380u;
    {
        const bool branch_taken_0x26a380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A380u;
        // 0x26a384: 0x2c8210c5  sltiu       $v0, $a0, 0x10C5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4293) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a380) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A388u;
    // 0x26a388: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x26A388u;
    {
        const bool branch_taken_0x26a388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A388u;
        // 0x26a38c: 0x24021114  addiu       $v0, $zero, 0x1114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a388) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A390u;
    // 0x26a390: 0x10820138  beq         $a0, $v0, . + 4 + (0x138 << 2)
    ctx->pc = 0x26A390u;
    {
        const bool branch_taken_0x26a390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A390u;
        // 0x26a394: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a390) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A398u;
    // 0x26a398: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x26A398u;
    {
        const bool branch_taken_0x26a398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a398) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A3A0u;
label_26a3a0:
    // 0x26a3a0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A3A0u;
    {
        const bool branch_taken_0x26a3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3A0u;
        // 0x26a3a4: 0x24021904  addiu       $v0, $zero, 0x1904 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3a0) {
            ctx->pc = 0x26A3C8u;
            goto label_26a3c8;
        }
    }
    ctx->pc = 0x26A3A8u;
    // 0x26a3a8: 0x2c8218a1  sltiu       $v0, $a0, 0x18A1
    ctx->pc = 0x26a3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6305) ? 1 : 0);
    // 0x26a3ac: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x26A3ACu;
    {
        const bool branch_taken_0x26a3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3ACu;
        // 0x26a3b0: 0x24021830  addiu       $v0, $zero, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3ac) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A3B4u;
    // 0x26a3b4: 0x1082013e  beq         $a0, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x26A3B4u;
    {
        const bool branch_taken_0x26a3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a3b4) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A3BCu;
    // 0x26a3bc: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x26A3BCu;
    {
        const bool branch_taken_0x26a3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3bc) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A3C4u;
    // 0x26a3c4: 0x0  nop
    ctx->pc = 0x26a3c4u;
    // NOP
label_26a3c8:
    // 0x26a3c8: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26A3C8u;
    {
        const bool branch_taken_0x26a3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3C8u;
        // 0x26a3cc: 0x2c821905  sltiu       $v0, $a0, 0x1905 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6405) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3c8) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A3D0u;
    // 0x26a3d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A3D0u;
    {
        const bool branch_taken_0x26a3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3D0u;
        // 0x26a3d4: 0x24021991  addiu       $v0, $zero, 0x1991 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3d0) {
            ctx->pc = 0x26A3F0u;
            goto label_26a3f0;
        }
    }
    ctx->pc = 0x26A3D8u;
    // 0x26a3d8: 0x240218ec  addiu       $v0, $zero, 0x18EC
    ctx->pc = 0x26a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6380));
    // 0x26a3dc: 0x10820125  beq         $a0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x26A3DCu;
    {
        const bool branch_taken_0x26a3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3DCu;
        // 0x26a3e0: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3dc) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A3E4u;
    // 0x26a3e4: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x26A3E4u;
    {
        const bool branch_taken_0x26a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3e4) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A3ECu;
    // 0x26a3ec: 0x0  nop
    ctx->pc = 0x26a3ecu;
    // NOP
label_26a3f0:
    // 0x26a3f0: 0x10820129  beq         $a0, $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x26A3F0u;
    {
        const bool branch_taken_0x26a3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a3f0) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A3F8u;
    // 0x26a3f8: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x26A3F8u;
    {
        const bool branch_taken_0x26a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a3f8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A400u;
label_26a400:
    // 0x26a400: 0x1082012b  beq         $a0, $v0, . + 4 + (0x12B << 2)
    ctx->pc = 0x26A400u;
    {
        const bool branch_taken_0x26a400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A400u;
        // 0x26a404: 0x2c822fa3  sltiu       $v0, $a0, 0x2FA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a400) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A408u;
    // 0x26a408: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26A408u;
    {
        const bool branch_taken_0x26a408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A408u;
        // 0x26a40c: 0x2c8237e0  sltiu       $v0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a408) {
            ctx->pc = 0x26A4C8u;
            goto label_26a4c8;
        }
    }
    ctx->pc = 0x26A410u;
    // 0x26a410: 0x240220e4  addiu       $v0, $zero, 0x20E4
    ctx->pc = 0x26a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8420));
    // 0x26a414: 0x10820116  beq         $a0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x26A414u;
    {
        const bool branch_taken_0x26a414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A414u;
        // 0x26a418: 0x2c8220e5  sltiu       $v0, $a0, 0x20E5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8421) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a414) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A41Cu;
    // 0x26a41c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A41Cu;
    {
        const bool branch_taken_0x26a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A41Cu;
        // 0x26a420: 0x2c822842  sltiu       $v0, $a0, 0x2842 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a41c) {
            ctx->pc = 0x26A468u;
            goto label_26a468;
        }
    }
    ctx->pc = 0x26A424u;
    // 0x26a424: 0x2c82207f  sltiu       $v0, $a0, 0x207F
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8319) ? 1 : 0);
    // 0x26a428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A428u;
    {
        const bool branch_taken_0x26a428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A428u;
        // 0x26a42c: 0x2402209d  addiu       $v0, $zero, 0x209D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8349));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a428) {
            ctx->pc = 0x26A450u;
            goto label_26a450;
        }
    }
    ctx->pc = 0x26A430u;
    // 0x26a430: 0x2c82207c  sltiu       $v0, $a0, 0x207C
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8316) ? 1 : 0);
    // 0x26a434: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x26A434u;
    {
        const bool branch_taken_0x26a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A434u;
        // 0x26a438: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a434) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A43Cu;
    // 0x26a43c: 0x1082011c  beq         $a0, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x26A43Cu;
    {
        const bool branch_taken_0x26a43c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a43c) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A444u;
    // 0x26a444: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x26A444u;
    {
        const bool branch_taken_0x26a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a444) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A44Cu;
    // 0x26a44c: 0x0  nop
    ctx->pc = 0x26a44cu;
    // NOP
label_26a450:
    // 0x26a450: 0x108200f9  beq         $a0, $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x26A450u;
    {
        const bool branch_taken_0x26a450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A450u;
        // 0x26a454: 0x240220cb  addiu       $v0, $zero, 0x20CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a450) {
            ctx->pc = 0x26A838u;
            goto label_26a838;
        }
    }
    ctx->pc = 0x26A458u;
    // 0x26a458: 0x10820106  beq         $a0, $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x26A458u;
    {
        const bool branch_taken_0x26a458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A458u;
        // 0x26a45c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a458) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A460u;
    // 0x26a460: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x26A460u;
    {
        const bool branch_taken_0x26a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a460) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A468u;
label_26a468:
    // 0x26a468: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A468u;
    {
        const bool branch_taken_0x26a468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A468u;
        // 0x26a46c: 0x240228cf  addiu       $v0, $zero, 0x28CF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10447));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a468) {
            ctx->pc = 0x26A490u;
            goto label_26a490;
        }
    }
    ctx->pc = 0x26A470u;
    // 0x26a470: 0x2c82283f  sltiu       $v0, $a0, 0x283F
    ctx->pc = 0x26a470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10303) ? 1 : 0);
    // 0x26a474: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x26A474u;
    {
        const bool branch_taken_0x26a474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A474u;
        // 0x26a478: 0x240227d3  addiu       $v0, $zero, 0x27D3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a474) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A47Cu;
    // 0x26a47c: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x26A47Cu;
    {
        const bool branch_taken_0x26a47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a47c) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A484u;
    // 0x26a484: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x26A484u;
    {
        const bool branch_taken_0x26a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a484) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A48Cu;
    // 0x26a48c: 0x0  nop
    ctx->pc = 0x26a48cu;
    // NOP
label_26a490:
    // 0x26a490: 0x108200f7  beq         $a0, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x26A490u;
    {
        const bool branch_taken_0x26a490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A490u;
        // 0x26a494: 0x2c8228d0  sltiu       $v0, $a0, 0x28D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10448) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a490) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A498u;
    // 0x26a498: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A498u;
    {
        const bool branch_taken_0x26a498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A498u;
        // 0x26a49c: 0x240228fd  addiu       $v0, $zero, 0x28FD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10493));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a498) {
            ctx->pc = 0x26A4B8u;
            goto label_26a4b8;
        }
    }
    ctx->pc = 0x26A4A0u;
    // 0x26a4a0: 0x240228c2  addiu       $v0, $zero, 0x28C2
    ctx->pc = 0x26a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10434));
    // 0x26a4a4: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26A4A4u;
    {
        const bool branch_taken_0x26a4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A4u;
        // 0x26a4a8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4a4) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A4ACu;
    // 0x26a4ac: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x26A4ACu;
    {
        const bool branch_taken_0x26a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4ac) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A4B4u;
    // 0x26a4b4: 0x0  nop
    ctx->pc = 0x26a4b4u;
    // NOP
label_26a4b8:
    // 0x26a4b8: 0x50820101  beql        $a0, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x26A4B8u;
    {
        const bool branch_taken_0x26a4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a4b8) {
            ctx->pc = 0x26A4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4B8u;
            // 0x26a4bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A4C0u;
    // 0x26a4c0: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x26A4C0u;
    {
        const bool branch_taken_0x26a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4c0) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A4C8u;
label_26a4c8:
    // 0x26a4c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A4C8u;
    {
        const bool branch_taken_0x26a4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4C8u;
        // 0x26a4cc: 0x24023f46  addiu       $v0, $zero, 0x3F46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4c8) {
            ctx->pc = 0x26A520u;
            goto label_26a520;
        }
    }
    ctx->pc = 0x26A4D0u;
    // 0x26a4d0: 0x2c8237dd  sltiu       $v0, $a0, 0x37DD
    ctx->pc = 0x26a4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14301) ? 1 : 0);
    // 0x26a4d4: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x26A4D4u;
    {
        const bool branch_taken_0x26a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D4u;
        // 0x26a4d8: 0x2402307d  addiu       $v0, $zero, 0x307D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4d4) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A4DCu;
    // 0x26a4dc: 0x108200e4  beq         $a0, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x26A4DCu;
    {
        const bool branch_taken_0x26a4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4DCu;
        // 0x26a4e0: 0x2c82307e  sltiu       $v0, $a0, 0x307E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12414) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4dc) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A4E4u;
    // 0x26a4e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A4E4u;
    {
        const bool branch_taken_0x26a4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4E4u;
        // 0x26a4e8: 0x24023088  addiu       $v0, $zero, 0x3088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4e4) {
            ctx->pc = 0x26A508u;
            goto label_26a508;
        }
    }
    ctx->pc = 0x26A4ECu;
    // 0x26a4ec: 0x2c82300e  sltiu       $v0, $a0, 0x300E
    ctx->pc = 0x26a4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12302) ? 1 : 0);
    // 0x26a4f0: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x26A4F0u;
    {
        const bool branch_taken_0x26a4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4F0u;
        // 0x26a4f4: 0x2c82300b  sltiu       $v0, $a0, 0x300B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4f0) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A4F8u;
    // 0x26a4f8: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x26A4F8u;
    {
        const bool branch_taken_0x26a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a4f8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A500u;
    // 0x26a500: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x26A500u;
    {
        const bool branch_taken_0x26a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a500) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A508u;
label_26a508:
    // 0x26a508: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26A508u;
    {
        const bool branch_taken_0x26a508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A508u;
        // 0x26a50c: 0x24023771  addiu       $v0, $zero, 0x3771 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a508) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A510u;
    // 0x26a510: 0x108200e7  beq         $a0, $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x26A510u;
    {
        const bool branch_taken_0x26a510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a510) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A518u;
    // 0x26a518: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x26A518u;
    {
        const bool branch_taken_0x26a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a518) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A520u;
label_26a520:
    // 0x26a520: 0x108200e3  beq         $a0, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x26A520u;
    {
        const bool branch_taken_0x26a520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A520u;
        // 0x26a524: 0x2c823f47  sltiu       $v0, $a0, 0x3F47 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16199) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a520) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A528u;
    // 0x26a528: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A528u;
    {
        const bool branch_taken_0x26a528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A528u;
        // 0x26a52c: 0x2c823fad  sltiu       $v0, $a0, 0x3FAD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16301) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a528) {
            ctx->pc = 0x26A550u;
            goto label_26a550;
        }
    }
    ctx->pc = 0x26A530u;
    // 0x26a530: 0x2402383d  addiu       $v0, $zero, 0x383D
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14397));
    // 0x26a534: 0x108200ce  beq         $a0, $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x26A534u;
    {
        const bool branch_taken_0x26a534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A534u;
        // 0x26a538: 0x240238ca  addiu       $v0, $zero, 0x38CA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14538));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a534) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A53Cu;
    // 0x26a53c: 0x108200cd  beq         $a0, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x26A53Cu;
    {
        const bool branch_taken_0x26a53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A53Cu;
        // 0x26a540: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a53c) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A544u;
    // 0x26a544: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x26A544u;
    {
        const bool branch_taken_0x26a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a544) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A54Cu;
    // 0x26a54c: 0x0  nop
    ctx->pc = 0x26a54cu;
    // NOP
label_26a550:
    // 0x26a550: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x26A550u;
    {
        const bool branch_taken_0x26a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A550u;
        // 0x26a554: 0x2c823faa  sltiu       $v0, $a0, 0x3FAA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16298) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a550) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A558u;
    // 0x26a558: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x26A558u;
    {
        const bool branch_taken_0x26a558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a558) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A560u;
    // 0x26a560: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26A560u;
    {
        const bool branch_taken_0x26a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a560) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A568u;
label_26a568:
    // 0x26a568: 0x108200bf  beq         $a0, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x26A568u;
    {
        const bool branch_taken_0x26a568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A568u;
        // 0x26a56c: 0x2c8266d4  sltiu       $v0, $a0, 0x66D4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26324) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a568) {
            ctx->pc = 0x26A868u;
            goto label_26a868;
        }
    }
    ctx->pc = 0x26A570u;
    // 0x26a570: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26A570u;
    {
        const bool branch_taken_0x26a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A570u;
        // 0x26a574: 0x240276b1  addiu       $v0, $zero, 0x76B1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a570) {
            ctx->pc = 0x26A6C8u;
            goto label_26a6c8;
        }
    }
    ctx->pc = 0x26A578u;
    // 0x26a578: 0x2c825711  sltiu       $v0, $a0, 0x5711
    ctx->pc = 0x26a578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22289) ? 1 : 0);
    // 0x26a57c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26A57Cu;
    {
        const bool branch_taken_0x26a57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A57Cu;
        // 0x26a580: 0x24025f6d  addiu       $v0, $zero, 0x5F6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a57c) {
            ctx->pc = 0x26A620u;
            goto label_26a620;
        }
    }
    ctx->pc = 0x26A584u;
    // 0x26a584: 0x2c82570e  sltiu       $v0, $a0, 0x570E
    ctx->pc = 0x26a584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22286) ? 1 : 0);
    // 0x26a588: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x26A588u;
    {
        const bool branch_taken_0x26a588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A588u;
        // 0x26a58c: 0x2c824779  sltiu       $v0, $a0, 0x4779 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18297) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a588) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A590u;
    // 0x26a590: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A590u;
    {
        const bool branch_taken_0x26a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A590u;
        // 0x26a594: 0x24024f94  addiu       $v0, $zero, 0x4F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a590) {
            ctx->pc = 0x26A5D8u;
            goto label_26a5d8;
        }
    }
    ctx->pc = 0x26A598u;
    // 0x26a598: 0x2c824776  sltiu       $v0, $a0, 0x4776
    ctx->pc = 0x26a598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18294) ? 1 : 0);
    // 0x26a59c: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x26A59Cu;
    {
        const bool branch_taken_0x26a59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A59Cu;
        // 0x26a5a0: 0x2402470e  addiu       $v0, $zero, 0x470E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a59c) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A5A4u;
    // 0x26a5a4: 0x108200c2  beq         $a0, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x26A5A4u;
    {
        const bool branch_taken_0x26a5a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5A4u;
        // 0x26a5a8: 0x2c82470f  sltiu       $v0, $a0, 0x470F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5a4) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A5ACu;
    // 0x26a5ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A5ACu;
    {
        const bool branch_taken_0x26a5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5ACu;
        // 0x26a5b0: 0x2c824773  sltiu       $v0, $a0, 0x4773 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18291) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5ac) {
            ctx->pc = 0x26A5C8u;
            goto label_26a5c8;
        }
    }
    ctx->pc = 0x26A5B4u;
    // 0x26a5b4: 0x24024009  addiu       $v0, $zero, 0x4009
    ctx->pc = 0x26a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16393));
    // 0x26a5b8: 0x108200ae  beq         $a0, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x26A5B8u;
    {
        const bool branch_taken_0x26a5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5B8u;
        // 0x26a5bc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5b8) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A5C0u;
    // 0x26a5c0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x26A5C0u;
    {
        const bool branch_taken_0x26a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a5c0) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A5C8u;
label_26a5c8:
    // 0x26a5c8: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x26A5C8u;
    {
        const bool branch_taken_0x26a5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a5c8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A5D0u;
    // 0x26a5d0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x26A5D0u;
    {
        const bool branch_taken_0x26a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a5d0) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A5D8u;
label_26a5d8:
    // 0x26a5d8: 0x108200a5  beq         $a0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26A5D8u;
    {
        const bool branch_taken_0x26a5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5D8u;
        // 0x26a5dc: 0x2c824f95  sltiu       $v0, $a0, 0x4F95 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20373) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5d8) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A5E0u;
    // 0x26a5e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A5E0u;
    {
        const bool branch_taken_0x26a5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E0u;
        // 0x26a5e4: 0x24024f9f  addiu       $v0, $zero, 0x4F9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20383));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5e0) {
            ctx->pc = 0x26A608u;
            goto label_26a608;
        }
    }
    ctx->pc = 0x26A5E8u;
    // 0x26a5e8: 0x240247fd  addiu       $v0, $zero, 0x47FD
    ctx->pc = 0x26a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18429));
    // 0x26a5ec: 0x108200a0  beq         $a0, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x26A5ECu;
    {
        const bool branch_taken_0x26a5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5ECu;
        // 0x26a5f0: 0x24024818  addiu       $v0, $zero, 0x4818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5ec) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A5F4u;
    // 0x26a5f4: 0x1082009f  beq         $a0, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x26A5F4u;
    {
        const bool branch_taken_0x26a5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5F4u;
        // 0x26a5f8: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5f4) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A5FCu;
    // 0x26a5fc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x26A5FCu;
    {
        const bool branch_taken_0x26a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a5fc) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A604u;
    // 0x26a604: 0x0  nop
    ctx->pc = 0x26a604u;
    // NOP
label_26a608:
    // 0x26a608: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x26A608u;
    {
        const bool branch_taken_0x26a608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A608u;
        // 0x26a60c: 0x240256a8  addiu       $v0, $zero, 0x56A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a608) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A610u;
    // 0x26a610: 0x108200a7  beq         $a0, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26A610u;
    {
        const bool branch_taken_0x26a610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a610) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A618u;
    // 0x26a618: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26A618u;
    {
        const bool branch_taken_0x26a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a618) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A620u;
label_26a620:
    // 0x26a620: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x26A620u;
    {
        const bool branch_taken_0x26a620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A620u;
        // 0x26a624: 0x2c825f6e  sltiu       $v0, $a0, 0x5F6E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24430) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a620) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A628u;
    // 0x26a628: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A628u;
    {
        const bool branch_taken_0x26a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A628u;
        // 0x26a62c: 0x2c8266c2  sltiu       $v0, $a0, 0x66C2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a628) {
            ctx->pc = 0x26A680u;
            goto label_26a680;
        }
    }
    ctx->pc = 0x26A630u;
    // 0x26a630: 0x24025e80  addiu       $v0, $zero, 0x5E80
    ctx->pc = 0x26a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24192));
    // 0x26a634: 0x1082009e  beq         $a0, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x26A634u;
    {
        const bool branch_taken_0x26a634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A634u;
        // 0x26a638: 0x2c825e81  sltiu       $v0, $a0, 0x5E81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a634) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A63Cu;
    // 0x26a63c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A63Cu;
    {
        const bool branch_taken_0x26a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A63Cu;
        // 0x26a640: 0x2c825ef0  sltiu       $v0, $a0, 0x5EF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24304) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a63c) {
            ctx->pc = 0x26A660u;
            goto label_26a660;
        }
    }
    ctx->pc = 0x26A644u;
    // 0x26a644: 0x24025762  addiu       $v0, $zero, 0x5762
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22370));
    // 0x26a648: 0x10820089  beq         $a0, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x26A648u;
    {
        const bool branch_taken_0x26a648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A648u;
        // 0x26a64c: 0x24025766  addiu       $v0, $zero, 0x5766 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22374));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a648) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A650u;
    // 0x26a650: 0x10820088  beq         $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x26A650u;
    {
        const bool branch_taken_0x26a650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A650u;
        // 0x26a654: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a650) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A658u;
    // 0x26a658: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x26A658u;
    {
        const bool branch_taken_0x26a658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a658) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A660u;
label_26a660:
    // 0x26a660: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x26A660u;
    {
        const bool branch_taken_0x26a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A660u;
        // 0x26a664: 0x2c825ef3  sltiu       $v0, $a0, 0x5EF3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24307) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a660) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A668u;
    // 0x26a668: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x26A668u;
    {
        const bool branch_taken_0x26a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A668u;
        // 0x26a66c: 0x24025f62  addiu       $v0, $zero, 0x5F62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24418));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a668) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A670u;
    // 0x26a670: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x26A670u;
    {
        const bool branch_taken_0x26a670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A670u;
        // 0x26a674: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a670) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A678u;
    // 0x26a678: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26A678u;
    {
        const bool branch_taken_0x26a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a678) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A680u;
label_26a680:
    // 0x26a680: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A680u;
    {
        const bool branch_taken_0x26a680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A680u;
        // 0x26a684: 0x240266c4  addiu       $v0, $zero, 0x66C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a680) {
            ctx->pc = 0x26A6A8u;
            goto label_26a6a8;
        }
    }
    ctx->pc = 0x26A688u;
    // 0x26a688: 0x2c8266bf  sltiu       $v0, $a0, 0x66BF
    ctx->pc = 0x26a688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26303) ? 1 : 0);
    // 0x26a68c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x26A68Cu;
    {
        const bool branch_taken_0x26a68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A68Cu;
        // 0x26a690: 0x24026653  addiu       $v0, $zero, 0x6653 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a68c) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A694u;
    // 0x26a694: 0x10820086  beq         $a0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x26A694u;
    {
        const bool branch_taken_0x26a694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a694) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A69Cu;
    // 0x26a69c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26A69Cu;
    {
        const bool branch_taken_0x26a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a69c) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A6A4u;
    // 0x26a6a4: 0x0  nop
    ctx->pc = 0x26a6a4u;
    // NOP
label_26a6a8:
    // 0x26a6a8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26A6A8u;
    {
        const bool branch_taken_0x26a6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6A8u;
        // 0x26a6ac: 0x2c8266c4  sltiu       $v0, $a0, 0x66C4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26308) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6a8) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A6B0u;
    // 0x26a6b0: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x26A6B0u;
    {
        const bool branch_taken_0x26a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6B0u;
        // 0x26a6b4: 0x2c8266d1  sltiu       $v0, $a0, 0x66D1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26321) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6b0) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A6B8u;
    // 0x26a6b8: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x26A6B8u;
    {
        const bool branch_taken_0x26a6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a6b8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A6C0u;
    // 0x26a6c0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x26A6C0u;
    {
        const bool branch_taken_0x26a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a6c0) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A6C8u;
label_26a6c8:
    // 0x26a6c8: 0x10820069  beq         $a0, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x26A6C8u;
    {
        const bool branch_taken_0x26a6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6C8u;
        // 0x26a6cc: 0x2c8276b2  sltiu       $v0, $a0, 0x76B2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6c8) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A6D0u;
    // 0x26a6d0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26A6D0u;
    {
        const bool branch_taken_0x26a6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6D0u;
        // 0x26a6d4: 0x34028596  ori         $v0, $zero, 0x8596 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34198);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6d0) {
            ctx->pc = 0x26A788u;
            goto label_26a788;
        }
    }
    ctx->pc = 0x26A6D8u;
    // 0x26a6d8: 0x2c826e84  sltiu       $v0, $a0, 0x6E84
    ctx->pc = 0x26a6d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28292) ? 1 : 0);
    // 0x26a6dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26A6DCu;
    {
        const bool branch_taken_0x26a6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6DCu;
        // 0x26a6e0: 0x24026ecb  addiu       $v0, $zero, 0x6ECB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28363));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6dc) {
            ctx->pc = 0x26A730u;
            goto label_26a730;
        }
    }
    ctx->pc = 0x26A6E4u;
    // 0x26a6e4: 0x2c826e81  sltiu       $v0, $a0, 0x6E81
    ctx->pc = 0x26a6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28289) ? 1 : 0);
    // 0x26a6e8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x26A6E8u;
    {
        const bool branch_taken_0x26a6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6E8u;
        // 0x26a6ec: 0x24026705  addiu       $v0, $zero, 0x6705 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26373));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6e8) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A6F0u;
    // 0x26a6f0: 0x1082005f  beq         $a0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x26A6F0u;
    {
        const bool branch_taken_0x26a6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6F0u;
        // 0x26a6f4: 0x2c826706  sltiu       $v0, $a0, 0x6706 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26374) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6f0) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A6F8u;
    // 0x26a6f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A6F8u;
    {
        const bool branch_taken_0x26a6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6F8u;
        // 0x26a6fc: 0x24026710  addiu       $v0, $zero, 0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6f8) {
            ctx->pc = 0x26A718u;
            goto label_26a718;
        }
    }
    ctx->pc = 0x26A700u;
    // 0x26a700: 0x240266e0  addiu       $v0, $zero, 0x66E0
    ctx->pc = 0x26a700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26336));
    // 0x26a704: 0x10820052  beq         $a0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x26A704u;
    {
        const bool branch_taken_0x26a704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a704) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A70Cu;
    // 0x26a70c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x26A70Cu;
    {
        const bool branch_taken_0x26a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a70c) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A714u;
    // 0x26a714: 0x0  nop
    ctx->pc = 0x26a714u;
    // NOP
label_26a718:
    // 0x26a718: 0x10820055  beq         $a0, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26A718u;
    {
        const bool branch_taken_0x26a718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A718u;
        // 0x26a71c: 0x24026e1c  addiu       $v0, $zero, 0x6E1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a718) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A720u;
    // 0x26a720: 0x10820063  beq         $a0, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26A720u;
    {
        const bool branch_taken_0x26a720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a720) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A728u;
    // 0x26a728: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x26A728u;
    {
        const bool branch_taken_0x26a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a728) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A730u;
label_26a730:
    // 0x26a730: 0x1082004f  beq         $a0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x26A730u;
    {
        const bool branch_taken_0x26a730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A730u;
        // 0x26a734: 0x2c826ecc  sltiu       $v0, $a0, 0x6ECC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)28364) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a730) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A738u;
    // 0x26a738: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A738u;
    {
        const bool branch_taken_0x26a738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A738u;
        // 0x26a73c: 0x240275f3  addiu       $v0, $zero, 0x75F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a738) {
            ctx->pc = 0x26A760u;
            goto label_26a760;
        }
    }
    ctx->pc = 0x26A740u;
    // 0x26a740: 0x24026ea1  addiu       $v0, $zero, 0x6EA1
    ctx->pc = 0x26a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28321));
    // 0x26a744: 0x10820042  beq         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x26A744u;
    {
        const bool branch_taken_0x26a744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A744u;
        // 0x26a748: 0x24026ebe  addiu       $v0, $zero, 0x6EBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a744) {
            ctx->pc = 0x26A850u;
            goto label_26a850;
        }
    }
    ctx->pc = 0x26A74Cu;
    // 0x26a74c: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26A74Cu;
    {
        const bool branch_taken_0x26a74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A74Cu;
        // 0x26a750: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a74c) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A754u;
    // 0x26a754: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26A754u;
    {
        const bool branch_taken_0x26a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a754) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A75Cu;
    // 0x26a75c: 0x0  nop
    ctx->pc = 0x26a75cu;
    // NOP
label_26a760:
    // 0x26a760: 0x10820053  beq         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26A760u;
    {
        const bool branch_taken_0x26a760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A760u;
        // 0x26a764: 0x2c8275f3  sltiu       $v0, $a0, 0x75F3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a760) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A768u;
    // 0x26a768: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x26A768u;
    {
        const bool branch_taken_0x26a768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A768u;
        // 0x26a76c: 0x2c827662  sltiu       $v0, $a0, 0x7662 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30306) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a768) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A770u;
    // 0x26a770: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x26A770u;
    {
        const bool branch_taken_0x26a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A770u;
        // 0x26a774: 0x2c82765f  sltiu       $v0, $a0, 0x765F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30303) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a770) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A778u;
    // 0x26a778: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x26A778u;
    {
        const bool branch_taken_0x26a778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a778) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A780u;
    // 0x26a780: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x26A780u;
    {
        const bool branch_taken_0x26a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a780) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A788u;
label_26a788:
    // 0x26a788: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x26A788u;
    {
        const bool branch_taken_0x26a788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A788u;
        // 0x26a78c: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a788) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A790u;
    // 0x26a790: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26A790u;
    {
        const bool branch_taken_0x26a790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A790u;
        // 0x26a794: 0x34028625  ori         $v0, $zero, 0x8625 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34341);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a790) {
            ctx->pc = 0x26A7E0u;
            goto label_26a7e0;
        }
    }
    ctx->pc = 0x26A798u;
    // 0x26a798: 0x2c827e74  sltiu       $v0, $a0, 0x7E74
    ctx->pc = 0x26a798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32372) ? 1 : 0);
    // 0x26a79c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26A79Cu;
    {
        const bool branch_taken_0x26a79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A79Cu;
        // 0x26a7a0: 0x24027ef9  addiu       $v0, $zero, 0x7EF9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32505));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a79c) {
            ctx->pc = 0x26A7C8u;
            goto label_26a7c8;
        }
    }
    ctx->pc = 0x26A7A4u;
    // 0x26a7a4: 0x2c827e71  sltiu       $v0, $a0, 0x7E71
    ctx->pc = 0x26a7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32369) ? 1 : 0);
    // 0x26a7a8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26A7A8u;
    {
        const bool branch_taken_0x26a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7A8u;
        // 0x26a7ac: 0x240276bb  addiu       $v0, $zero, 0x76BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30395));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7a8) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A7B0u;
    // 0x26a7b0: 0x1082002f  beq         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26A7B0u;
    {
        const bool branch_taken_0x26a7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7B0u;
        // 0x26a7b4: 0x24027de3  addiu       $v0, $zero, 0x7DE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7b0) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A7B8u;
    // 0x26a7b8: 0x1082003d  beq         $a0, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26A7B8u;
    {
        const bool branch_taken_0x26a7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a7b8) {
            ctx->pc = 0x26A8B0u;
            goto label_26a8b0;
        }
    }
    ctx->pc = 0x26A7C0u;
    // 0x26a7c0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x26A7C0u;
    {
        const bool branch_taken_0x26a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a7c0) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A7C8u;
label_26a7c8:
    // 0x26a7c8: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26A7C8u;
    {
        const bool branch_taken_0x26a7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7C8u;
        // 0x26a7cc: 0x24027f0a  addiu       $v0, $zero, 0x7F0A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32522));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7c8) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A7D0u;
    // 0x26a7d0: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26A7D0u;
    {
        const bool branch_taken_0x26a7d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7D0u;
        // 0x26a7d4: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7d0) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A7D8u;
    // 0x26a7d8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26A7D8u;
    {
        const bool branch_taken_0x26a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a7d8) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A7E0u;
label_26a7e0:
    // 0x26a7e0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26a7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26a7e4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26A7E4u;
    {
        const bool branch_taken_0x26a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7E4u;
        // 0x26a7e8: 0x3402865d  ori         $v0, $zero, 0x865D (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34397);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7e4) {
            ctx->pc = 0x26A820u;
            goto label_26a820;
        }
    }
    ctx->pc = 0x26A7ECu;
    // 0x26a7ec: 0x34028623  ori         $v0, $zero, 0x8623
    ctx->pc = 0x26a7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34339);
    // 0x26a7f0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26a7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a7f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26A7F4u;
    {
        const bool branch_taken_0x26a7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7F4u;
        // 0x26a7f8: 0x34028601  ori         $v0, $zero, 0x8601 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34305);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7f4) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A7FCu;
    // 0x26a7fc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x26a7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26a800: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26A800u;
    {
        const bool branch_taken_0x26a800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A800u;
        // 0x26a804: 0x340285ff  ori         $v0, $zero, 0x85FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34303);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a800) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A808u;
    // 0x26a808: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x26a808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26a80c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26A80Cu;
    {
        const bool branch_taken_0x26a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a80c) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A814u;
    // 0x26a814: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26A814u;
    {
        const bool branch_taken_0x26a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a814) {
            ctx->pc = 0x26A898u;
            goto label_26a898;
        }
    }
    ctx->pc = 0x26A81Cu;
    // 0x26a81c: 0x0  nop
    ctx->pc = 0x26a81cu;
    // NOP
label_26a820:
    // 0x26a820: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26A820u;
    {
        const bool branch_taken_0x26a820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A820u;
        // 0x26a824: 0x3402866b  ori         $v0, $zero, 0x866B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34411);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a820) {
            ctx->pc = 0x26A870u;
            goto label_26a870;
        }
    }
    ctx->pc = 0x26A828u;
    // 0x26a828: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A828u;
    {
        const bool branch_taken_0x26a828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A828u;
        // 0x26a82c: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a828) {
            ctx->pc = 0x26A874u;
            goto label_26a874;
        }
    }
    ctx->pc = 0x26A830u;
    // 0x26a830: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x26A830u;
    {
        const bool branch_taken_0x26a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a830) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A838u;
label_26a838:
    // 0x26a838: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A838u;
    SET_GPR_U32(ctx, 31, 0x26A840u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A838u, 0x26A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A840u;
label_26a840:
    // 0x26a840: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x26a840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x26a844: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26A844u;
    {
        const bool branch_taken_0x26a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A844u;
        // 0x26a848: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a844) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A84Cu;
    // 0x26a84c: 0x0  nop
    ctx->pc = 0x26a84cu;
    // NOP
label_26a850:
    // 0x26a850: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A850u;
    SET_GPR_U32(ctx, 31, 0x26A858u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A850u, 0x26A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A858u;
label_26a858:
    // 0x26a858: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x26a858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
    // 0x26a85c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26A85Cu;
    {
        const bool branch_taken_0x26a85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A85Cu;
        // 0x26a860: 0x2c470001  sltiu       $a3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a85c) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A864u;
    // 0x26a864: 0x0  nop
    ctx->pc = 0x26a864u;
    // NOP
label_26a868:
    // 0x26a868: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26A868u;
    {
        const bool branch_taken_0x26a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A868u;
        // 0x26a86c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a868) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A870u;
label_26a870:
    // 0x26a870: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26a874:
    // 0x26a874: 0x8c6203c8  lw          $v0, 0x3C8($v1)
    ctx->pc = 0x26a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x26a878: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26A878u;
    {
        const bool branch_taken_0x26a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A878u;
        // 0x26a87c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a878) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A880u;
    // 0x26a880: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A880u;
    SET_GPR_U32(ctx, 31, 0x26A888u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A880u, 0x26A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A888u;
label_26a888:
    // 0x26a888: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a88c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26A88Cu;
    {
        const bool branch_taken_0x26a88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A88Cu;
        // 0x26a890: 0x28470400  slti        $a3, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a88c) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A894u;
    // 0x26a894: 0x0  nop
    ctx->pc = 0x26a894u;
    // NOP
label_26a898:
    // 0x26a898: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A898u;
    SET_GPR_U32(ctx, 31, 0x26A8A0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A898u, 0x26A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8A0u;
label_26a8a0:
    // 0x26a8a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a8a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A8A4u;
    {
        const bool branch_taken_0x26a8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8A4u;
        // 0x26a8a8: 0x284700cc  slti        $a3, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8a4) {
            ctx->pc = 0x26A8C0u;
            goto label_26a8c0;
        }
    }
    ctx->pc = 0x26A8ACu;
    // 0x26a8ac: 0x0  nop
    ctx->pc = 0x26a8acu;
    // NOP
label_26a8b0:
    // 0x26a8b0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26A8B0u;
    SET_GPR_U32(ctx, 31, 0x26A8B8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26A8B0u, 0x26A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8B8u;
label_26a8b8:
    // 0x26a8b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a8bc: 0x28470199  slti        $a3, $v0, 0x199
    ctx->pc = 0x26a8bcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)409) ? 1 : 0);
label_26a8c0:
    // 0x26a8c0: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A8C0u;
    {
        const bool branch_taken_0x26a8c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8C0u;
        // 0x26a8c4: 0x8f86aa80  lw          $a2, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8c0) {
            ctx->pc = 0x26A8D8u;
            goto label_26a8d8;
        }
    }
    ctx->pc = 0x26A8C8u;
    // 0x26a8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8cc: 0xc09fad8  jal         func_27EB60
    ctx->pc = 0x26A8CCu;
    SET_GPR_U32(ctx, 31, 0x26A8D4u);
    ctx->pc = 0x26A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A8CCu;
    // 0x26a8d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB60u, 0x26A8CCu, 0x26A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8D4u;
label_26a8d4:
    // 0x26a8d4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x26a8d4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26a8d8:
    // 0x26a8d8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x26A8D8u;
    {
        const bool branch_taken_0x26a8d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8D8u;
        // 0x26a8dc: 0x2aa200b4  slti        $v0, $s5, 0xB4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)180) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a8d8) {
            ctx->pc = 0x26A940u;
            goto label_26a940;
        }
    }
    ctx->pc = 0x26A8E0u;
    // 0x26a8e0: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x26A8E0u;
    {
        const bool branch_taken_0x26a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a8e0) {
            ctx->pc = 0x26A8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A8E0u;
            // 0x26a8e4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A958u;
            goto label_26a958;
        }
    }
    ctx->pc = 0x26A8E8u;
    // 0x26a8e8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26a8ec: 0xc09905e  jal         func_264178
    ctx->pc = 0x26A8ECu;
    SET_GPR_U32(ctx, 31, 0x26A8F4u);
    ctx->pc = 0x26A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A8ECu;
    // 0x26a8f0: 0x96250008  lhu         $a1, 0x8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x26A8ECu, 0x26A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8F4u;
label_26a8f4:
    // 0x26a8f4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x26a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x26a8f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8fc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x26a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x26a900: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26a904: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a908: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x26A908u;
    {
        const bool branch_taken_0x26a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a908) {
            ctx->pc = 0x26A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A908u;
            // 0x26a90c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A944u;
            goto label_26a944;
        }
    }
    ctx->pc = 0x26A910u;
    // 0x26a910: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A910u;
    {
        const bool branch_taken_0x26a910 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A910u;
        // 0x26a914: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a910) {
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A918u;
    // 0x26a918: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x26a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x26a91c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A91Cu;
    {
        const bool branch_taken_0x26a91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x26a91c) {
            ctx->pc = 0x26A920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A91Cu;
            // 0x26a920: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A934u;
            goto label_26a934;
        }
    }
    ctx->pc = 0x26A924u;
    // 0x26a924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26A924u;
    {
        const bool branch_taken_0x26a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A924u;
        // 0x26a928: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a924) {
            ctx->pc = 0x26A940u;
            goto label_26a940;
        }
    }
    ctx->pc = 0x26A92Cu;
    // 0x26a92c: 0x0  nop
    ctx->pc = 0x26a92cu;
    // NOP
label_26a930:
    // 0x26a930: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x26a930u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_26a934:
    // 0x26a934: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x26a934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x26a938: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x26a938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x26a93c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x26a93cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_26a940:
    // 0x26a940: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x26a940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_26a944:
    // 0x26a944: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26a948: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26a948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26a94c: 0x1462fc54  bne         $v1, $v0, . + 4 + (-0x3AC << 2)
    ctx->pc = 0x26A94Cu;
    {
        const bool branch_taken_0x26a94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A94Cu;
        // 0x26a950: 0x34028005  ori         $v0, $zero, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a94c) {
            ctx->pc = 0x269AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269aa0;
        }
    }
    ctx->pc = 0x26A954u;
    // 0x26a954: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26a958:
    // 0x26a958: 0xae6200bc  sw          $v0, 0xBC($s3)
    ctx->pc = 0x26a958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
    // 0x26a95c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26a960:
    // 0x26a960: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x26a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x26a964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A964u;
    {
        const bool branch_taken_0x26a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A964u;
        // 0x26a968: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a964) {
            ctx->pc = 0x26A984u;
            goto label_26a984;
        }
    }
    ctx->pc = 0x26A96Cu;
    // 0x26a96c: 0xac7500a4  sw          $s5, 0xA4($v1)
    ctx->pc = 0x26a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 21));
    // 0x26a970: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26a974: 0xc09af24  jal         func_26BC90
    ctx->pc = 0x26A974u;
    SET_GPR_U32(ctx, 31, 0x26A97Cu);
    ctx->pc = 0x26A978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A974u;
    // 0x26a978: 0x8c4400b4  lw          $a0, 0xB4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC90u, 0x26A974u, 0x26A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A97Cu;
label_26a97c:
    // 0x26a97c: 0x2a2a823  subu        $s5, $s5, $v0
    ctx->pc = 0x26a97cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x26a980: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x26a980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26a984:
    // 0x26a984: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26a984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a988: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26a988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26a98c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26a98cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a990: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x26a990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26a994: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x26a994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a998: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x26a998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26a99c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x26a99cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a9a0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x26a9a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26a9a4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x26a9a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a9a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x26a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x26A9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A9ACu;
        // 0x26a9b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A9B4u;
    // 0x26a9b4: 0x0  nop
    ctx->pc = 0x26a9b4u;
    // NOP
    ctx->pc = 0x26a9b8u;
}
