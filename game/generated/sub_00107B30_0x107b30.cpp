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

// Function: sub_00107B30
// Address: 0x107b30 - 0x107cd0
void sub_00107B30_0x107b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B30_0x107b30");
#endif

    switch (ctx->pc) {
        case 0x107ba0u: goto label_107ba0;
        case 0x107bc4u: goto label_107bc4;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c08u: goto label_107c08;
        case 0x107c8cu: goto label_107c8c;
        default: break;
    }

    ctx->pc = 0x107b30u;

    // 0x107b30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x107b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x107b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107b38: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x107b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x107b3c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x107b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x107b40: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x107b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x107b44: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x107b44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b48: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x107b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x107b4c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x107b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x107b50: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x107b50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b54: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x107b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x107b58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x107b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x107b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x107b60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x107b64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x107b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b68: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x107b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x107b6c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x107b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b70: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x107b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x107b74: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x107b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x107b78: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x107b78u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x107b7c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x107b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x107b80: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x107B80u;
    {
        const bool branch_taken_0x107b80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x107B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B80u;
        // 0x107b84: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b80) {
            ctx->pc = 0x107BB8u;
            goto label_107bb8;
        }
    }
    ctx->pc = 0x107B88u;
    // 0x107b88: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x107B88u;
    {
        const bool branch_taken_0x107b88 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x107b88) {
            ctx->pc = 0x107B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107B88u;
            // 0x107b8c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C64u;
            goto label_107c64;
        }
    }
    ctx->pc = 0x107B90u;
    // 0x107b90: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x107B90u;
    {
        const bool branch_taken_0x107b90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x107b90) {
            ctx->pc = 0x107B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107B90u;
            // 0x107b94: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C64u;
            goto label_107c64;
        }
    }
    ctx->pc = 0x107B98u;
    // 0x107b98: 0xc0421a2  jal         func_108688
    ctx->pc = 0x107B98u;
    SET_GPR_U32(ctx, 31, 0x107BA0u);
    ctx->pc = 0x107B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B98u;
    // 0x107b9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x107B98u, 0x107BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BA0u;
label_107ba0:
    // 0x107ba0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x107ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107ba4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x107ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x107ba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x107bac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x107bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x107bb0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x107BB0u;
    {
        const bool branch_taken_0x107bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BB0u;
        // 0x107bb4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bb0) {
            ctx->pc = 0x107C60u;
            goto label_107c60;
        }
    }
    ctx->pc = 0x107BB8u;
label_107bb8:
    // 0x107bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bbc: 0xc0421a2  jal         func_108688
    ctx->pc = 0x107BBCu;
    SET_GPR_U32(ctx, 31, 0x107BC4u);
    ctx->pc = 0x107BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BBCu;
    // 0x107bc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x107BBCu, 0x107BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BC4u;
label_107bc4:
    // 0x107bc4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x107bc4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x107bc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107bcc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x107bccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x107bd0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x107bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x107bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bd8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x107bdc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x107bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107be0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x107be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x107be4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x107be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107be8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x107be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x107becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bf0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x107bf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bf4: 0xc041dc2  jal         func_107708
    ctx->pc = 0x107BF4u;
    SET_GPR_U32(ctx, 31, 0x107BFCu);
    ctx->pc = 0x107BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF4u;
    // 0x107bf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107708u, 0x107BF4u, 0x107BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BFCu;
label_107bfc:
    // 0x107bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c00: 0xc0421a2  jal         func_108688
    ctx->pc = 0x107C00u;
    SET_GPR_U32(ctx, 31, 0x107C08u);
    ctx->pc = 0x107C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C00u;
    // 0x107c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x107C00u, 0x107C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C08u;
label_107c08:
    // 0x107c08: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x107c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x107c0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x107c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x107c10: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x107c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x107c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c18: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x107c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c1c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x107c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c20: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x107c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c24: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x107c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c28: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x107c28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x107c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107c30: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107c30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107c34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x107c34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c38: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x107c38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107c3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107c3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107c40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107c44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107c44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107c48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x107c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107c4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107c4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107c50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107c54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107c58: 0x8041dc2  j           func_107708
    ctx->pc = 0x107C58u;
    ctx->pc = 0x107C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C58u;
    // 0x107c5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107708u;
    sub_00107708_0x107708(rdram, ctx, runtime); return;
    ctx->pc = 0x107C60u;
label_107c60:
    // 0x107c60: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x107c60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_107c64:
    // 0x107c64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c68: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x107c6c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x107c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x107c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c74: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x107c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c78: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x107c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c7c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x107c7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c84: 0xc041dc2  jal         func_107708
    ctx->pc = 0x107C84u;
    SET_GPR_U32(ctx, 31, 0x107C8Cu);
    ctx->pc = 0x107C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C84u;
    // 0x107c88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107708u, 0x107C84u, 0x107C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C8Cu;
label_107c8c:
    // 0x107c8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107c90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107c94: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x107c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x107c98: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x107c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x107c9c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x107c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107ca0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107ca0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107ca4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x107ca4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107ca8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107ca8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107cac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107cacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107cb0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107cb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107cb4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x107cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107cb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107cbc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107cc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x107CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CC4u;
        // 0x107cc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107CCCu;
    // 0x107ccc: 0x0  nop
    ctx->pc = 0x107cccu;
    // NOP
    ctx->pc = 0x107cd0u;
}
