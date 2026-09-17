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

// Function: sub_00298B08
// Address: 0x298b08 - 0x298dd0
void sub_00298B08_0x298b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298B08_0x298b08");
#endif

    switch (ctx->pc) {
        case 0x298bd8u: goto label_298bd8;
        case 0x298bf0u: goto label_298bf0;
        case 0x298c90u: goto label_298c90;
        case 0x298cc0u: goto label_298cc0;
        case 0x298d30u: goto label_298d30;
        case 0x298d40u: goto label_298d40;
        case 0x298d48u: goto label_298d48;
        case 0x298d58u: goto label_298d58;
        case 0x298d70u: goto label_298d70;
        default: break;
    }

    ctx->pc = 0x298b08u;

    // 0x298b08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x298b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x298b0c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x298b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x298b10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x298b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x298b14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x298b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x298b1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x298b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x298b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x298b24: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x298b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x298b28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x298b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x298b2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x298b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x298b30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x298b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x298b34: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x298b34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x298b38: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x298b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x298b3c: 0x24160027  addiu       $s6, $zero, 0x27
    ctx->pc = 0x298b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x298b40: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x298b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x298b44: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x298b44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298b4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x298b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x298b50: 0xbca021  addu        $s4, $a1, $gp
    ctx->pc = 0x298b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x298b54: 0x8e94a850  lw          $s4, -0x57B0($s4)
    ctx->pc = 0x298b54u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944848)));
    // 0x298b58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x298b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x298b5c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x298b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x298b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x298b64: 0xbc2021  addu        $a0, $a1, $gp
    ctx->pc = 0x298b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 28)));
    // 0x298b68: 0x8c84a858  lw          $a0, -0x57A8($a0)
    ctx->pc = 0x298b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944856)));
    // 0x298b6c: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x298b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x298b70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x298b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298b74: 0x1460008a  bnez        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x298B74u;
    {
        const bool branch_taken_0x298b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B74u;
        // 0x298b78: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b74) {
            ctx->pc = 0x298DA0u;
            goto label_298da0;
        }
    }
    ctx->pc = 0x298B7Cu;
    // 0x298b7c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298B7Cu;
    {
        const bool branch_taken_0x298b7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B7Cu;
        // 0x298b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b7c) {
            ctx->pc = 0x298B94u;
            goto label_298b94;
        }
    }
    ctx->pc = 0x298B84u;
    // 0x298b84: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x298b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x298b88: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x298b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x298b8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x298b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x298b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298b94:
    // 0x298b94: 0x3082a000  andi        $v0, $a0, 0xA000
    ctx->pc = 0x298b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)40960);
    // 0x298b98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x298B98u;
    {
        const bool branch_taken_0x298b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B98u;
        // 0x298b9c: 0x30832000  andi        $v1, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b98) {
            ctx->pc = 0x298BD8u;
            goto label_298bd8;
        }
    }
    ctx->pc = 0x298BA0u;
    // 0x298ba0: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x298ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x298ba4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x298ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x298ba8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x298ba8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x298bac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298bb0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x298bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x298bb4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x298bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x298bb8: 0x44800b  movn        $s0, $v0, $a0
    ctx->pc = 0x298bb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x298bbc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x298bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x298bc0: 0x2a050000  slti        $a1, $s0, 0x0
    ctx->pc = 0x298bc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x298bc4: 0x2a5800b  movn        $s0, $s5, $a1
    ctx->pc = 0x298bc4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 21));
    // 0x298bc8: 0x2b0102a  slt         $v0, $s5, $s0
    ctx->pc = 0x298bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x298bcc: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x298bccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x298bd0: 0xc092940  jal         func_24A500
    ctx->pc = 0x298BD0u;
    SET_GPR_U32(ctx, 31, 0x298BD8u);
    ctx->pc = 0x298BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BD0u;
    // 0x298bd4: 0xacd00000  sw          $s0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x298BD0u, 0x298BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BD8u;
label_298bd8:
    // 0x298bd8: 0x328200f0  andi        $v0, $s4, 0xF0
    ctx->pc = 0x298bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)240);
    // 0x298bdc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x298BDCu;
    {
        const bool branch_taken_0x298bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BDCu;
        // 0x298be0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bdc) {
            ctx->pc = 0x298C74u;
            goto label_298c74;
        }
    }
    ctx->pc = 0x298BE4u;
    // 0x298be4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x298be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x298be8: 0xc092940  jal         func_24A500
    ctx->pc = 0x298BE8u;
    SET_GPR_U32(ctx, 31, 0x298BF0u);
    ctx->pc = 0x298BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BE8u;
    // 0x298bec: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x298BE8u, 0x298BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BF0u;
label_298bf0:
    // 0x298bf0: 0x1616000b  bne         $s0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x298BF0u;
    {
        const bool branch_taken_0x298bf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        if (branch_taken_0x298bf0) {
            ctx->pc = 0x298C20u;
            goto label_298c20;
        }
    }
    ctx->pc = 0x298BF8u;
    // 0x298bf8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x298bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x298bfc: 0x5840001e  blezl       $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x298BFCu;
    {
        const bool branch_taken_0x298bfc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x298bfc) {
            ctx->pc = 0x298C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298BFCu;
            // 0x298c00: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298C78u;
            goto label_298c78;
        }
    }
    ctx->pc = 0x298C04u;
    // 0x298c04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x298c08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x298c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x298c0c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x298c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x298c10: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x298c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x298c14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x298c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x298c18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x298C18u;
    {
        const bool branch_taken_0x298c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C18u;
        // 0x298c1c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c18) {
            ctx->pc = 0x298C74u;
            goto label_298c74;
        }
    }
    ctx->pc = 0x298C20u;
label_298c20:
    // 0x298c20: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298C20u;
    {
        const bool branch_taken_0x298c20 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x298C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C20u;
        // 0x298c24: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c20) {
            ctx->pc = 0x298C34u;
            goto label_298c34;
        }
    }
    ctx->pc = 0x298C28u;
    // 0x298c28: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x298c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x298c2c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x298C2Cu;
    {
        const bool branch_taken_0x298c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c2c) {
            ctx->pc = 0x298C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298C2Cu;
            // 0x298c30: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298C3Cu;
            goto label_298c3c;
        }
    }
    ctx->pc = 0x298C34u;
label_298c34:
    // 0x298c34: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x298c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x298c38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x298c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_298c3c:
    // 0x298c3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x298c40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x298c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x298c44: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x298c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x298c48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x298c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x298c4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x298c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x298c50: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x298c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x298c54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298C54u;
    {
        const bool branch_taken_0x298c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C54u;
        // 0x298c58: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c54) {
            ctx->pc = 0x298C68u;
            goto label_298c68;
        }
    }
    ctx->pc = 0x298C5Cu;
    // 0x298c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298c60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298C60u;
    {
        const bool branch_taken_0x298c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C60u;
        // 0x298c64: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c60) {
            ctx->pc = 0x298C74u;
            goto label_298c74;
        }
    }
    ctx->pc = 0x298C68u;
label_298c68:
    // 0x298c68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x298c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298c6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x298c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x298c70: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x298c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_298c74:
    // 0x298c74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x298c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_298c78:
    // 0x298c78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298c78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298c80: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x298C80u;
    {
        const bool branch_taken_0x298c80 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x298C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C80u;
        // 0x298c84: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c80) {
            ctx->pc = 0x298CA0u;
            goto label_298ca0;
        }
    }
    ctx->pc = 0x298C88u;
    // 0x298c88: 0xc092940  jal         func_24A500
    ctx->pc = 0x298C88u;
    SET_GPR_U32(ctx, 31, 0x298C90u);
    ctx->pc = 0x298C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C88u;
    // 0x298c8c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x298C88u, 0x298C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C90u;
label_298c90:
    // 0x298c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298c94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298c98: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x298c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x298c9c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x298c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_298ca0:
    // 0x298ca0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x298ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x298ca4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x298ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ca8: 0x244abe48  addiu       $t2, $v0, -0x41B8
    ctx->pc = 0x298ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950472));
    // 0x298cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298cb0: 0x2409003e  addiu       $t1, $zero, 0x3E
    ctx->pc = 0x298cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x298cb4: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x298cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x298cb8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x298cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x298cbc: 0x0  nop
    ctx->pc = 0x298cbcu;
    // NOP
label_298cc0:
    // 0x298cc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x298cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x298cc4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x298cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x298cc8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x298cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x298ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x298cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298cd0: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x298CD0u;
    {
        const bool branch_taken_0x298cd0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x298CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CD0u;
        // 0x298cd4: 0x6a1021  addu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298cd0) {
            ctx->pc = 0x298CF8u;
            goto label_298cf8;
        }
    }
    ctx->pc = 0x298CD8u;
    // 0x298cd8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x298cd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298cdc: 0x50890004  beql        $a0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298CDCu;
    {
        const bool branch_taken_0x298cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x298cdc) {
            ctx->pc = 0x298CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298CDCu;
            // 0x298ce0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298CF0u;
            goto label_298cf0;
        }
    }
    ctx->pc = 0x298CE4u;
    // 0x298ce4: 0x14880005  bne         $a0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298CE4u;
    {
        const bool branch_taken_0x298ce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x298CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CE4u;
        // 0x298ce8: 0x2451821  addu        $v1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ce4) {
            ctx->pc = 0x298CFCu;
            goto label_298cfc;
        }
    }
    ctx->pc = 0x298CECu;
    // 0x298cec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x298cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_298cf0:
    // 0x298cf0: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x298cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x298cf4: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x298cf4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_298cf8:
    // 0x298cf8: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_298cfc:
    // 0x298cfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x298d00: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x298d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x298d04: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x298D04u;
    {
        const bool branch_taken_0x298d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D04u;
        // 0x298d08: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d04) {
            ctx->pc = 0x298CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298cc0;
        }
    }
    ctx->pc = 0x298D0Cu;
    // 0x298d0c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x298d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x298d10: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x298D10u;
    {
        const bool branch_taken_0x298d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D10u;
        // 0x298d14: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d10) {
            ctx->pc = 0x298D9Cu;
            goto label_298d9c;
        }
    }
    ctx->pc = 0x298D18u;
    // 0x298d18: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x298d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x298d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298D1Cu;
    {
        const bool branch_taken_0x298d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d1c) {
            ctx->pc = 0x298D38u;
            goto label_298d38;
        }
    }
    ctx->pc = 0x298D24u;
    // 0x298d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d28: 0xc0a6284  jal         func_298A10
    ctx->pc = 0x298D28u;
    SET_GPR_U32(ctx, 31, 0x298D30u);
    ctx->pc = 0x298D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D28u;
    // 0x298d2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298A10u, 0x298D28u, 0x298D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D30u;
label_298d30:
    // 0x298d30: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x298D30u;
    {
        const bool branch_taken_0x298d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298d30) {
            ctx->pc = 0x298D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D30u;
            // 0x298d34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D5Cu;
            goto label_298d5c;
        }
    }
    ctx->pc = 0x298D38u;
label_298d38:
    // 0x298d38: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x298D38u;
    SET_GPR_U32(ctx, 31, 0x298D40u);
    ctx->pc = 0x298D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D38u;
    // 0x298d3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x298D38u, 0x298D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D40u;
label_298d40:
    // 0x298d40: 0xc08e498  jal         func_239260
    ctx->pc = 0x298D40u;
    SET_GPR_U32(ctx, 31, 0x298D48u);
    ctx->pc = 0x298D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D40u;
    // 0x298d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239260u, 0x298D40u, 0x298D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D48u;
label_298d48:
    // 0x298d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d50: 0xc04a58e  jal         func_129638
    ctx->pc = 0x298D50u;
    SET_GPR_U32(ctx, 31, 0x298D58u);
    ctx->pc = 0x298D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D50u;
    // 0x298d54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x298D50u, 0x298D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D58u;
label_298d58:
    // 0x298d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298d5c:
    // 0x298d5c: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x298d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x298d60: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x298d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x298d64: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x298d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x298d68: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x298d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x298d6c: 0x0  nop
    ctx->pc = 0x298d6cu;
    // NOP
label_298d70:
    // 0x298d70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x298d74: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x298d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298d78: 0x10480003  beq         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298D78u;
    {
        const bool branch_taken_0x298d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x298D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D78u;
        // 0x298d7c: 0x28a40003  slti        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d78) {
            ctx->pc = 0x298D88u;
            goto label_298d88;
        }
    }
    ctx->pc = 0x298D80u;
    // 0x298d80: 0x14470002  bne         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x298D80u;
    {
        const bool branch_taken_0x298d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x298d80) {
            ctx->pc = 0x298D8Cu;
            goto label_298d8c;
        }
    }
    ctx->pc = 0x298D88u;
label_298d88:
    // 0x298d88: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x298d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_298d8c:
    // 0x298d8c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x298D8Cu;
    {
        const bool branch_taken_0x298d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x298D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D8Cu;
        // 0x298d90: 0x2451821  addu        $v1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d8c) {
            ctx->pc = 0x298D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298d70;
        }
    }
    ctx->pc = 0x298D94u;
    // 0x298d94: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x298d94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298d98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x298d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298d9c:
    // 0x298d9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x298d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_298da0:
    // 0x298da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298da4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298da8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x298da8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298dac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x298dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298db0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x298db0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298db4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x298db4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298db8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x298db8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298dbc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x298dbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298dc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x298DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DC4u;
        // 0x298dc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298DCCu;
    // 0x298dcc: 0x0  nop
    ctx->pc = 0x298dccu;
    // NOP
    ctx->pc = 0x298dd0u;
}
