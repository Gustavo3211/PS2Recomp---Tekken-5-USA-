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

// Function: sub_00286BB8
// Address: 0x286bb8 - 0x286f48
void sub_00286BB8_0x286bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286BB8_0x286bb8");
#endif

    switch (ctx->pc) {
        case 0x286c40u: goto label_286c40;
        case 0x286c70u: goto label_286c70;
        case 0x286cecu: goto label_286cec;
        case 0x286cfcu: goto label_286cfc;
        case 0x286d30u: goto label_286d30;
        case 0x286d40u: goto label_286d40;
        case 0x286dd0u: goto label_286dd0;
        case 0x286de4u: goto label_286de4;
        case 0x286e18u: goto label_286e18;
        case 0x286e80u: goto label_286e80;
        case 0x286e98u: goto label_286e98;
        case 0x286f1cu: goto label_286f1c;
        default: break;
    }

    ctx->pc = 0x286bb8u;

    // 0x286bb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x286bbc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x286bbcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286bc4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x286bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286bcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x286bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x286bd4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x286bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x286bdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x286bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286be0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x286be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x286be4: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x286be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286be8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x286be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x286bec: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x286becu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bf0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x286bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x286bf4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x286bf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bf8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x286bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x286bfc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286c00: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x286C00u;
    {
        const bool branch_taken_0x286c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C00u;
        // 0x286c04: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c00) {
            ctx->pc = 0x286D50u;
            goto label_286d50;
        }
    }
    ctx->pc = 0x286C08u;
    // 0x286c08: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x286c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x286c0c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x286C0Cu;
    {
        const bool branch_taken_0x286c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C0Cu;
        // 0x286c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c0c) {
            ctx->pc = 0x286CB8u;
            goto label_286cb8;
        }
    }
    ctx->pc = 0x286C14u;
    // 0x286c14: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x286c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x286c18: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x286c18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x286c1c: 0x26105c20  addiu       $s0, $s0, 0x5C20
    ctx->pc = 0x286c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23584));
    // 0x286c20: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x286c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x286c24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286c28: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x286c28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c2c: 0x5c3021  addu        $a2, $v0, $gp
    ctx->pc = 0x286c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x286c30: 0x8cc6b318  lw          $a2, -0x4CE8($a2)
    ctx->pc = 0x286c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947608)));
    // 0x286c34: 0x24a53b90  addiu       $a1, $a1, 0x3B90
    ctx->pc = 0x286c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15248));
    // 0x286c38: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x286C38u;
    SET_GPR_U32(ctx, 31, 0x286C40u);
    ctx->pc = 0x286C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C38u;
    // 0x286c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x286C38u, 0x286C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C40u;
label_286c40:
    // 0x286c40: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x286c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x286c44: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x286c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x286c48: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x286c48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x286c4c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x286c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x286c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c54: 0x25295ee0  addiu       $t1, $t1, 0x5EE0
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24288));
    // 0x286c58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286c5c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x286c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286c60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x286c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286c64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x286c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c68: 0xc0d430c  jal         func_350C30
    ctx->pc = 0x286C68u;
    SET_GPR_U32(ctx, 31, 0x286C70u);
    ctx->pc = 0x286C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C68u;
    // 0x286c6c: 0x262a0034  addiu       $t2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350C30u, 0x286C68u, 0x286C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C70u;
label_286c70:
    // 0x286c70: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286C70u;
    {
        const bool branch_taken_0x286c70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C70u;
        // 0x286c74: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c70) {
            ctx->pc = 0x286CA8u;
            goto label_286ca8;
        }
    }
    ctx->pc = 0x286C78u;
    // 0x286c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286c80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286c8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286c90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286c90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286c94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x286c94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286c98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x286c98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286c9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x286c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x286ca0: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286CA0u;
    ctx->pc = 0x286CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CA0u;
    // 0x286ca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x286CA8u;
label_286ca8:
    // 0x286ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286cac: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x286CACu;
    {
        const bool branch_taken_0x286cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CACu;
        // 0x286cb0: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cac) {
            ctx->pc = 0x286F1Cu;
            goto label_286f1c;
        }
    }
    ctx->pc = 0x286CB4u;
    // 0x286cb4: 0x0  nop
    ctx->pc = 0x286cb4u;
    // NOP
label_286cb8:
    // 0x286cb8: 0x54620099  bnel        $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x286CB8u;
    {
        const bool branch_taken_0x286cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x286cb8) {
            ctx->pc = 0x286CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286CB8u;
            // 0x286cbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286F20u;
            goto label_286f20;
        }
    }
    ctx->pc = 0x286CC0u;
    // 0x286cc0: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x286cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x286cc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286cc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286CC8u;
    {
        const bool branch_taken_0x286cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CC8u;
        // 0x286ccc: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cc8) {
            ctx->pc = 0x286CD8u;
            goto label_286cd8;
        }
    }
    ctx->pc = 0x286CD0u;
    // 0x286cd0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x286CD0u;
    {
        const bool branch_taken_0x286cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CD0u;
        // 0x286cd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cd0) {
            ctx->pc = 0x286DDCu;
            goto label_286ddc;
        }
    }
    ctx->pc = 0x286CD8u;
label_286cd8:
    // 0x286cd8: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x286CD8u;
    {
        const bool branch_taken_0x286cd8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x286CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CD8u;
        // 0x286cdc: 0x54800b  movn        $s0, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286cd8) {
            ctx->pc = 0x286D08u;
            goto label_286d08;
        }
    }
    ctx->pc = 0x286CE0u;
    // 0x286ce0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x286ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x286ce4: 0xc0d3031  jal         func_34C0C4
    ctx->pc = 0x286CE4u;
    SET_GPR_U32(ctx, 31, 0x286CECu);
    ctx->pc = 0x286CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CE4u;
    // 0x286ce8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x286CE4u, 0x286CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CECu;
label_286cec:
    // 0x286cec: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286CECu;
    {
        const bool branch_taken_0x286cec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x286cec) {
            ctx->pc = 0x286D08u;
            goto label_286d08;
        }
    }
    ctx->pc = 0x286CF4u;
    // 0x286cf4: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286CF4u;
    SET_GPR_U32(ctx, 31, 0x286CFCu);
    ctx->pc = 0x286CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CF4u;
    // 0x286cf8: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286CF4u, 0x286CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CFCu;
label_286cfc:
    // 0x286cfc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286d00: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x286D00u;
    {
        const bool branch_taken_0x286d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D00u;
        // 0x286d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d00) {
            ctx->pc = 0x286DD8u;
            goto label_286dd8;
        }
    }
    ctx->pc = 0x286D08u;
label_286d08:
    // 0x286d08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286d0c: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x286d10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286d14: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x286d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x286d18: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x286d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x286d1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x286d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x286d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d24: 0x24e75ee0  addiu       $a3, $a3, 0x5EE0
    ctx->pc = 0x286d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24288));
    // 0x286d28: 0xc0d437a  jal         func_350DE8
    ctx->pc = 0x286D28u;
    SET_GPR_U32(ctx, 31, 0x286D30u);
    ctx->pc = 0x286D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D28u;
    // 0x286d2c: 0x26280034  addiu       $t0, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350DE8u, 0x286D28u, 0x286D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D30u;
label_286d30:
    // 0x286d30: 0x441007a  bgez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x286D30u;
    {
        const bool branch_taken_0x286d30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D30u;
        // 0x286d34: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d30) {
            ctx->pc = 0x286F1Cu;
            goto label_286f1c;
        }
    }
    ctx->pc = 0x286D38u;
    // 0x286d38: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286D38u;
    SET_GPR_U32(ctx, 31, 0x286D40u);
    ctx->pc = 0x286D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D38u;
    // 0x286d3c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286D38u, 0x286D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D40u;
label_286d40:
    // 0x286d40: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286d44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x286D44u;
    {
        const bool branch_taken_0x286d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D44u;
        // 0x286d48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d44) {
            ctx->pc = 0x286DD8u;
            goto label_286dd8;
        }
    }
    ctx->pc = 0x286D4Cu;
    // 0x286d4c: 0x0  nop
    ctx->pc = 0x286d4cu;
    // NOP
label_286d50:
    // 0x286d50: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x286d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x286d54: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x286D54u;
    {
        const bool branch_taken_0x286d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286d54) {
            ctx->pc = 0x286DA0u;
            goto label_286da0;
        }
    }
    ctx->pc = 0x286D5Cu;
    // 0x286d5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286d60: 0x2842012d  slti        $v0, $v0, 0x12D
    ctx->pc = 0x286d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x286d64: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x286D64u;
    {
        const bool branch_taken_0x286d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D64u;
        // 0x286d68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d64) {
            ctx->pc = 0x286DA0u;
            goto label_286da0;
        }
    }
    ctx->pc = 0x286D6Cu;
    // 0x286d6c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x286d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x286d70: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286d80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286d84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286d88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x286d88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286d8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x286d8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286d90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x286d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x286d94: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286D94u;
    ctx->pc = 0x286D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D94u;
    // 0x286d98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x286D9Cu;
    // 0x286d9c: 0x0  nop
    ctx->pc = 0x286d9cu;
    // NOP
label_286da0:
    // 0x286da0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x286da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x286da4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x286da8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x286da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x286dac: 0x5082005c  beql        $a0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x286DACu;
    {
        const bool branch_taken_0x286dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x286dac) {
            ctx->pc = 0x286DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286DACu;
            // 0x286db0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286F20u;
            goto label_286f20;
        }
    }
    ctx->pc = 0x286DB4u;
    // 0x286db4: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x286DB4u;
    {
        const bool branch_taken_0x286db4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x286DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DB4u;
        // 0x286db8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286db4) {
            ctx->pc = 0x286DF0u;
            goto label_286df0;
        }
    }
    ctx->pc = 0x286DBCu;
    // 0x286dbc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x286dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x286dc0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x286DC0u;
    {
        const bool branch_taken_0x286dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DC0u;
        // 0x286dc4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dc0) {
            ctx->pc = 0x286DD8u;
            goto label_286dd8;
        }
    }
    ctx->pc = 0x286DC8u;
    // 0x286dc8: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286DC8u;
    SET_GPR_U32(ctx, 31, 0x286DD0u);
    ctx->pc = 0x286DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286DC8u;
    // 0x286dcc: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286DC8u, 0x286DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DD0u;
label_286dd0:
    // 0x286dd0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286dd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x286dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_286dd8:
    // 0x286dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286ddc:
    // 0x286ddc: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286DDCu;
    SET_GPR_U32(ctx, 31, 0x286DE4u);
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286DDCu, 0x286DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DE4u;
label_286de4:
    // 0x286de4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x286DE4u;
    {
        const bool branch_taken_0x286de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DE4u;
        // 0x286de8: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286de4) {
            ctx->pc = 0x286F1Cu;
            goto label_286f1c;
        }
    }
    ctx->pc = 0x286DECu;
    // 0x286dec: 0x0  nop
    ctx->pc = 0x286decu;
    // NOP
label_286df0:
    // 0x286df0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286DF0u;
    {
        const bool branch_taken_0x286df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DF0u;
        // 0x286df4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286df0) {
            ctx->pc = 0x286E10u;
            goto label_286e10;
        }
    }
    ctx->pc = 0x286DF8u;
    // 0x286df8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286dfc: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x286dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x286e00: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x286e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x286e04: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x286e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x286e08: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x286E08u;
    {
        const bool branch_taken_0x286e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E08u;
        // 0x286e0c: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e08) {
            ctx->pc = 0x286F1Cu;
            goto label_286f1c;
        }
    }
    ctx->pc = 0x286E10u;
label_286e10:
    // 0x286e10: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x286E10u;
    SET_GPR_U32(ctx, 31, 0x286E18u);
    ctx->pc = 0x286E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E10u;
    // 0x286e14: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x286E10u, 0x286E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E18u;
label_286e18:
    // 0x286e18: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x286e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x286e1c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x286E1Cu;
    {
        const bool branch_taken_0x286e1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E1Cu;
        // 0x286e20: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e1c) {
            ctx->pc = 0x286E58u;
            goto label_286e58;
        }
    }
    ctx->pc = 0x286E24u;
    // 0x286e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286e2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286e30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286e38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286e3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286e40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x286e40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286e44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x286e44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286e48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x286e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x286e4c: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286E4Cu;
    ctx->pc = 0x286E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E4Cu;
    // 0x286e50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x286E54u;
    // 0x286e54: 0x0  nop
    ctx->pc = 0x286e54u;
    // NOP
label_286e58:
    // 0x286e58: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x286E58u;
    {
        const bool branch_taken_0x286e58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E58u;
        // 0x286e5c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e58) {
            ctx->pc = 0x286F10u;
            goto label_286f10;
        }
    }
    ctx->pc = 0x286E60u;
    // 0x286e60: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x286e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286e64: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x286e64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286e68: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x286E68u;
    {
        const bool branch_taken_0x286e68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E68u;
        // 0x286e6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e68) {
            ctx->pc = 0x286ED4u;
            goto label_286ed4;
        }
    }
    ctx->pc = 0x286E70u;
    // 0x286e70: 0x3c0704c1  lui         $a3, 0x4C1
    ctx->pc = 0x286e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1217 << 16));
    // 0x286e74: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x286e74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x286e78: 0x34e71db7  ori         $a3, $a3, 0x1DB7
    ctx->pc = 0x286e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)7607);
    // 0x286e7c: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x286e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_286e80:
    // 0x286e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x286e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286e88: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x286e8c: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x286e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x286e90: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x286e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x286e94: 0x0  nop
    ctx->pc = 0x286e94u;
    // NOP
label_286e98:
    // 0x286e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286E98u;
    {
        const bool branch_taken_0x286e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E98u;
        // 0x286e9c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e98) {
            ctx->pc = 0x286EA8u;
            goto label_286ea8;
        }
    }
    ctx->pc = 0x286EA0u;
    // 0x286ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286EA0u;
    {
        const bool branch_taken_0x286ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EA0u;
        // 0x286ea4: 0x472026  xor         $a0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ea0) {
            ctx->pc = 0x286EACu;
            goto label_286eac;
        }
    }
    ctx->pc = 0x286EA8u;
label_286ea8:
    // 0x286ea8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x286ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_286eac:
    // 0x286eac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x286eb0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x286eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x286eb4: 0x0  nop
    ctx->pc = 0x286eb4u;
    // NOP
    // 0x286eb8: 0x0  nop
    ctx->pc = 0x286eb8u;
    // NOP
    // 0x286ebc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x286EBCu;
    {
        const bool branch_taken_0x286ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EBCu;
        // 0x286ec0: 0x881024  and         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ebc) {
            ctx->pc = 0x286E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286e98;
        }
    }
    ctx->pc = 0x286EC4u;
    // 0x286ec4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x286ec8: 0xd0102b  sltu        $v0, $a2, $s0
    ctx->pc = 0x286ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x286ecc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x286ECCu;
    {
        const bool branch_taken_0x286ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ECCu;
        // 0x286ed0: 0x2661821  addu        $v1, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ecc) {
            ctx->pc = 0x286E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286e80;
        }
    }
    ctx->pc = 0x286ED4u;
label_286ed4:
    // 0x286ed4: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x286ed4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x286ed8: 0x1122000d  beq         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286ED8u;
    {
        const bool branch_taken_0x286ed8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x286EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286ED8u;
        // 0x286edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ed8) {
            ctx->pc = 0x286F10u;
            goto label_286f10;
        }
    }
    ctx->pc = 0x286EE0u;
    // 0x286ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286ee4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x286ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ee8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286ef0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ef4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286ef8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286ef8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286efc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x286efcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286f00: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x286f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x286f04: 0x80a17e2  j           func_285F88
    ctx->pc = 0x286F04u;
    ctx->pc = 0x286F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F04u;
    // 0x286f08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    sub_00285F88_0x285f88(rdram, ctx, runtime); return;
    ctx->pc = 0x286F0Cu;
    // 0x286f0c: 0x0  nop
    ctx->pc = 0x286f0cu;
    // NOP
label_286f10:
    // 0x286f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x286f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286f14: 0xc0a17e2  jal         func_285F88
    ctx->pc = 0x286F14u;
    SET_GPR_U32(ctx, 31, 0x286F1Cu);
    ctx->pc = 0x286F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286F14u;
    // 0x286f18: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F88u, 0x286F14u, 0x286F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F1Cu;
label_286f1c:
    // 0x286f1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286f20:
    // 0x286f20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286f24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x286f24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286f28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x286f28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x286f2c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x286f2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286f30: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x286f30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x286f34: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x286f34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286f38: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x286f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x286f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x286F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286F3Cu;
        // 0x286f40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286F44u;
    // 0x286f44: 0x0  nop
    ctx->pc = 0x286f44u;
    // NOP
    ctx->pc = 0x286f48u;
}
