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

// Function: sub_0026FB20
// Address: 0x26fb20 - 0x26ff08
void sub_0026FB20_0x26fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FB20_0x26fb20");
#endif

    switch (ctx->pc) {
        case 0x26fbe0u: goto label_26fbe0;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fca8u: goto label_26fca8;
        case 0x26fd44u: goto label_26fd44;
        case 0x26fd84u: goto label_26fd84;
        case 0x26fdc0u: goto label_26fdc0;
        case 0x26fe58u: goto label_26fe58;
        case 0x26fe84u: goto label_26fe84;
        default: break;
    }

    ctx->pc = 0x26fb20u;

    // 0x26fb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fb24: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fb28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26fb2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26fb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26fb30: 0x8ca2043c  lw          $v0, 0x43C($a1)
    ctx->pc = 0x26fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1084)));
    // 0x26fb34: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x26fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x26fb38: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26fb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26fb3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FB3Cu;
    {
        const bool branch_taken_0x26fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB3Cu;
        // 0x26fb40: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb3c) {
            ctx->pc = 0x26FB50u;
            goto label_26fb50;
        }
    }
    ctx->pc = 0x26FB44u;
    // 0x26fb44: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x26fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x26fb48: 0x1c6000eb  bgtz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x26FB48u;
    {
        const bool branch_taken_0x26fb48 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x26FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB48u;
        // 0x26fb4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb48) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FB50u;
label_26fb50:
    // 0x26fb50: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x26fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x26fb54: 0x58600008  blezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FB54u;
    {
        const bool branch_taken_0x26fb54 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26fb54) {
            ctx->pc = 0x26FB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB54u;
            // 0x26fb58: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FB78u;
            goto label_26fb78;
        }
    }
    ctx->pc = 0x26FB5Cu;
    // 0x26fb5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26fb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fb64: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x26fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
    // 0x26fb68: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fb6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26FB6Cu;
    {
        const bool branch_taken_0x26fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB6Cu;
        // 0x26fb70: 0x94830008  lhu         $v1, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb6c) {
            ctx->pc = 0x26FB8Cu;
            goto label_26fb8c;
        }
    }
    ctx->pc = 0x26FB74u;
    // 0x26fb74: 0x0  nop
    ctx->pc = 0x26fb74u;
    // NOP
label_26fb78:
    // 0x26fb78: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x26fb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x26fb7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FB7Cu;
    {
        const bool branch_taken_0x26fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fb7c) {
            ctx->pc = 0x26FB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FB7Cu;
            // 0x26fb80: 0x8c860018  lw          $a2, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FB98u;
            goto label_26fb98;
        }
    }
    ctx->pc = 0x26FB84u;
    // 0x26fb84: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x26fb84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26fb88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fb8c:
    // 0x26fb8c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x26fb8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x26fb90: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x26FB90u;
    {
        const bool branch_taken_0x26fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB90u;
        // 0x26fb94: 0xa4830006  sh          $v1, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb90) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FB98u;
label_26fb98:
    // 0x26fb98: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x26fb98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26fb9c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x26FB9Cu;
    {
        const bool branch_taken_0x26fb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB9Cu;
        // 0x26fba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb9c) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FBA4u;
    // 0x26fba4: 0x8c8202bc  lw          $v0, 0x2BC($a0)
    ctx->pc = 0x26fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x26fba8: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x26FBA8u;
    {
        const bool branch_taken_0x26fba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBA8u;
        // 0x26fbac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fba8) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FBB0u;
    // 0x26fbb0: 0x8c830254  lw          $v1, 0x254($a0)
    ctx->pc = 0x26fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x26fbb4: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x26fbb8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fbbc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FBBCu;
    {
        const bool branch_taken_0x26fbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fbbc) {
            ctx->pc = 0x26FBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FBBCu;
            // 0x26fbc0: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FBD0u;
            goto label_26fbd0;
        }
    }
    ctx->pc = 0x26FBC4u;
    // 0x26fbc4: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x26FBC4u;
    {
        const bool branch_taken_0x26fbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FBC4u;
        // 0x26fbc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fbc4) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FBCCu;
    // 0x26fbcc: 0x0  nop
    ctx->pc = 0x26fbccu;
    // NOP
label_26fbd0:
    // 0x26fbd0: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x26FBD0u;
    {
        const bool branch_taken_0x26fbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fbd0) {
            ctx->pc = 0x26FBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FBD0u;
            // 0x26fbd4: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FC20u;
            goto label_26fc20;
        }
    }
    ctx->pc = 0x26FBD8u;
    // 0x26fbd8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FBD8u;
    SET_GPR_U32(ctx, 31, 0x26FBE0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FBD8u, 0x26FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FBE0u;
label_26fbe0:
    // 0x26fbe0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x26fbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x26fbe4: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x26fbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x26fbe8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x26fbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26fbec: 0x8cc50064  lw          $a1, 0x64($a2)
    ctx->pc = 0x26fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26fbf0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x26fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26fbf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26fbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fbf8: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x26fbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x26fbfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x26fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26fc00: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x26fc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26fc04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26fc08: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26fc0c: 0x423c3  sra         $a0, $a0, 15
    ctx->pc = 0x26fc0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 15));
    // 0x26fc10: 0x148000b9  bnez        $a0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x26FC10u;
    {
        const bool branch_taken_0x26fc10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC10u;
        // 0x26fc14: 0xacc30064  sw          $v1, 0x64($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc10) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FC18u;
    // 0x26fc18: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fc1c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x26fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_26fc20:
    // 0x26fc20: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26fc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26fc24: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FC24u;
    {
        const bool branch_taken_0x26fc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC24u;
        // 0x26fc28: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc24) {
            ctx->pc = 0x26FC68u;
            goto label_26fc68;
        }
    }
    ctx->pc = 0x26FC2Cu;
    // 0x26fc2c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FC2Cu;
    SET_GPR_U32(ctx, 31, 0x26FC34u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FC2Cu, 0x26FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC34u;
label_26fc34:
    // 0x26fc34: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x26fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x26fc38: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x26fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x26fc3c: 0x8cc40064  lw          $a0, 0x64($a2)
    ctx->pc = 0x26fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26fc40: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x26fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26fc44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26fc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26fc4c: 0x30a57fff  andi        $a1, $a1, 0x7FFF
    ctx->pc = 0x26fc4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x26fc50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26fc54: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x26fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x26fc58: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x26fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26fc5c: 0x10a000a6  beqz        $a1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x26FC5Cu;
    {
        const bool branch_taken_0x26fc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC5Cu;
        // 0x26fc60: 0xacc30064  sw          $v1, 0x64($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc5c) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FC64u;
    // 0x26fc64: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x26fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_26fc68:
    // 0x26fc68: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x26fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x26fc6c: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x26fc6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x26fc70: 0x3402982f  ori         $v0, $zero, 0x982F
    ctx->pc = 0x26fc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38959);
    // 0x26fc74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26fc78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26fc7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x26fc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26fc80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FC80u;
    {
        const bool branch_taken_0x26fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC80u;
        // 0x26fc84: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc80) {
            ctx->pc = 0x26FCA0u;
            goto label_26fca0;
        }
    }
    ctx->pc = 0x26FC88u;
    // 0x26fc88: 0x240267f6  addiu       $v0, $zero, 0x67F6
    ctx->pc = 0x26fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26614));
    // 0x26fc8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC8Cu;
    {
        const bool branch_taken_0x26fc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fc8c) {
            ctx->pc = 0x26FCA0u;
            goto label_26fca0;
        }
    }
    ctx->pc = 0x26FC94u;
    // 0x26fc94: 0x240267f7  addiu       $v0, $zero, 0x67F7
    ctx->pc = 0x26fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26615));
    // 0x26fc98: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26FC98u;
    {
        const bool branch_taken_0x26fc98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC98u;
        // 0x26fc9c: 0x8f85aa78  lw          $a1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc98) {
            ctx->pc = 0x26FCECu;
            goto label_26fcec;
        }
    }
    ctx->pc = 0x26FCA0u;
label_26fca0:
    // 0x26fca0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FCA0u;
    SET_GPR_U32(ctx, 31, 0x26FCA8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FCA0u, 0x26FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCA8u;
label_26fca8:
    // 0x26fca8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x26fcac: 0x8c66888c  lw          $a2, -0x7774($v1)
    ctx->pc = 0x26fcacu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A888Cu));
    // 0x26fcb0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x26fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26fcb4: 0x240703e8  addiu       $a3, $zero, 0x3E8
    ctx->pc = 0x26fcb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x26fcb8: 0x30450fff  andi        $a1, $v0, 0xFFF
    ctx->pc = 0x26fcb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26fcbc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x26fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x26fcc0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26fcc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26fcc8: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x26fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x26fccc: 0x3401a000  ori         $at, $zero, 0xA000
    ctx->pc = 0x26fcccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x26fcd0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x26fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x26fcd4: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x26fcd4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26fcd8: 0x1812  mflo        $v1
    ctx->pc = 0x26fcd8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26fcdc: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x26fcdcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fce0: 0x10a00085  beqz        $a1, . + 4 + (0x85 << 2)
    ctx->pc = 0x26FCE0u;
    {
        const bool branch_taken_0x26fce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCE0u;
        // 0x26fce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fce0) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FCE8u;
    // 0x26fce8: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26fce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26fcec:
    // 0x26fcec: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x26fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x26fcf0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26FCF0u;
    {
        const bool branch_taken_0x26fcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FCF0u;
        // 0x26fcf4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fcf0) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FCF8u;
    // 0x26fcf8: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x26fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x26fcfc: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FCFCu;
    {
        const bool branch_taken_0x26fcfc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26fcfc) {
            ctx->pc = 0x26FD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FCFCu;
            // 0x26fd00: 0x24038000  addiu       $v1, $zero, -0x8000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD24u;
            goto label_26fd24;
        }
    }
    ctx->pc = 0x26FD04u;
    // 0x26fd04: 0x8ca2029c  lw          $v0, 0x29C($a1)
    ctx->pc = 0x26fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 668)));
    // 0x26fd08: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FD08u;
    {
        const bool branch_taken_0x26fd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd08) {
            ctx->pc = 0x26FD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD08u;
            // 0x26fd0c: 0x8c62032c  lw          $v0, 0x32C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD30u;
            goto label_26fd30;
        }
    }
    ctx->pc = 0x26FD10u;
    // 0x26fd10: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x26fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x26fd14: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x26fd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x26fd18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FD18u;
    {
        const bool branch_taken_0x26fd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd18) {
            ctx->pc = 0x26FD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD18u;
            // 0x26fd1c: 0x8c62032c  lw          $v0, 0x32C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD30u;
            goto label_26fd30;
        }
    }
    ctx->pc = 0x26FD20u;
    // 0x26fd20: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x26fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_26fd24:
    // 0x26fd24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fd28: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x26FD28u;
    {
        const bool branch_taken_0x26fd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD28u;
        // 0x26fd2c: 0xa4a30006  sh          $v1, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd28) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FD30u;
label_26fd30:
    // 0x26fd30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x26fd34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26FD34u;
    {
        const bool branch_taken_0x26fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd34) {
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FD3Cu;
    // 0x26fd3c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FD3Cu;
    SET_GPR_U32(ctx, 31, 0x26FD44u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FD3Cu, 0x26FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD44u;
label_26fd44:
    // 0x26fd44: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x26fd44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x26fd48: 0x24c68858  addiu       $a2, $a2, -0x77A8
    ctx->pc = 0x26fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x26fd4c: 0x8cc50064  lw          $a1, 0x64($a2)
    ctx->pc = 0x26fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x26fd50: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x26fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26fd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26fd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd58: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x26fd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x26fd5c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x26fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26fd60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x26fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x26fd64: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x26fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x26fd68: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x26fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26fd6c: 0x28630100  slti        $v1, $v1, 0x100
    ctx->pc = 0x26fd6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x26fd70: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x26FD70u;
    {
        const bool branch_taken_0x26fd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD70u;
        // 0x26fd74: 0xacc40064  sw          $a0, 0x64($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd70) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FD78u;
    // 0x26fd78: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x26fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26fd7c:
    // 0x26fd7c: 0xc09bbc4  jal         func_26EF10
    ctx->pc = 0x26FD7Cu;
    SET_GPR_U32(ctx, 31, 0x26FD84u);
    ctx->pc = 0x26FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD7Cu;
    // 0x26fd80: 0x8ca4008c  lw          $a0, 0x8C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF10u, 0x26FD7Cu, 0x26FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD84u;
label_26fd84:
    // 0x26fd84: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26FD84u;
    {
        const bool branch_taken_0x26fd84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD84u;
        // 0x26fd88: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd84) {
            ctx->pc = 0x26FDB8u;
            goto label_26fdb8;
        }
    }
    ctx->pc = 0x26FD8Cu;
    // 0x26fd8c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x26fd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x26fd90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fd94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fd98: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x26fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x26fd9c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fda0: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x26fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x26fda4: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fda8: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x26fda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x26fdac: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fdb0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26FDB0u;
    {
        const bool branch_taken_0x26fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDB0u;
        // 0x26fdb4: 0xac660064  sw          $a2, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdb0) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FDB8u;
label_26fdb8:
    // 0x26fdb8: 0xc09b4c4  jal         func_26D310
    ctx->pc = 0x26FDB8u;
    SET_GPR_U32(ctx, 31, 0x26FDC0u);
    ctx->pc = 0x26D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D310u, 0x26FDB8u, 0x26FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDC0u;
label_26fdc0:
    // 0x26fdc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26fdc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fdc4: 0x460004c  bltz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x26FDC4u;
    {
        const bool branch_taken_0x26fdc4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdc4) {
            ctx->pc = 0x26FEF8u;
            goto label_26fef8;
        }
    }
    ctx->pc = 0x26FDCCu;
    // 0x26fdcc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fdd0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x26fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26fdd4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fdd8: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x26fddc: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x26fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x26fde0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x26fde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fde4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x26fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26fde8: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x26fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x26fdec: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fdf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26fdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26fdf4: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x26fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x26fdf8: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x26fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x26fdfc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fe00: 0xac470054  sw          $a3, 0x54($v0)
    ctx->pc = 0x26fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 7));
    // 0x26fe04: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fe08: 0xac680064  sw          $t0, 0x64($v1)
    ctx->pc = 0x26fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 8));
    // 0x26fe0c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x26fe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x26fe10: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x26fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x26fe14: 0x8e10f71c  lw          $s0, -0x8E4($s0)
    ctx->pc = 0x26fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965020)));
    // 0x26fe18: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x26fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x26fe1c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x26fe20: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x26fe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x26fe24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE24u;
    {
        const bool branch_taken_0x26fe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE24u;
        // 0x26fe28: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe24) {
            ctx->pc = 0x26FE38u;
            goto label_26fe38;
        }
    }
    ctx->pc = 0x26FE2Cu;
    // 0x26fe2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fe30: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26FE30u;
    {
        const bool branch_taken_0x26fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE30u;
        // 0x26fe34: 0xac620124  sw          $v0, 0x124($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe30) {
            ctx->pc = 0x26FEA0u;
            goto label_26fea0;
        }
    }
    ctx->pc = 0x26FE38u;
label_26fe38:
    // 0x26fe38: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26fe3c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x26fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x26fe40: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x26fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x26fe44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26fe44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26fe48: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26FE48u;
    {
        const bool branch_taken_0x26fe48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe48) {
            ctx->pc = 0x26FE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FE48u;
            // 0x26fe4c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FE6Cu;
            goto label_26fe6c;
        }
    }
    ctx->pc = 0x26FE50u;
    // 0x26fe50: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FE50u;
    SET_GPR_U32(ctx, 31, 0x26FE58u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FE50u, 0x26FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE58u;
label_26fe58:
    // 0x26fe58: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26fe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26fe5c: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x26fe5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26fe60: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26FE60u;
    {
        const bool branch_taken_0x26fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE60u;
        // 0x26fe64: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe60) {
            ctx->pc = 0x26FE98u;
            goto label_26fe98;
        }
    }
    ctx->pc = 0x26FE68u;
    // 0x26fe68: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_26fe6c:
    // 0x26fe6c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26fe70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26fe74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26FE74u;
    {
        const bool branch_taken_0x26fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE74u;
        // 0x26fe78: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe74) {
            ctx->pc = 0x26FEA4u;
            goto label_26fea4;
        }
    }
    ctx->pc = 0x26FE7Cu;
    // 0x26fe7c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26FE7Cu;
    SET_GPR_U32(ctx, 31, 0x26FE84u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26FE7Cu, 0x26FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE84u;
label_26fe84:
    // 0x26fe84: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26fe88: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x26fe88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x26fe8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FE8Cu;
    {
        const bool branch_taken_0x26fe8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE8Cu;
        // 0x26fe90: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe8c) {
            ctx->pc = 0x26FEA4u;
            goto label_26fea4;
        }
    }
    ctx->pc = 0x26FE94u;
    // 0x26fe94: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26fe98:
    // 0x26fe98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fe9c: 0xac620144  sw          $v0, 0x144($v1)
    ctx->pc = 0x26fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
label_26fea0:
    // 0x26fea0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26fea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_26fea4:
    // 0x26fea4: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x26fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x26fea8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26FEA8u;
    {
        const bool branch_taken_0x26fea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEA8u;
        // 0x26feac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fea8) {
            ctx->pc = 0x26FEB4u;
            goto label_26feb4;
        }
    }
    ctx->pc = 0x26FEB0u;
    // 0x26feb0: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x26feb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_26feb4:
    // 0x26feb4: 0x24022821  addiu       $v0, $zero, 0x2821
    ctx->pc = 0x26feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
    // 0x26feb8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FEB8u;
    {
        const bool branch_taken_0x26feb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEB8u;
        // 0x26febc: 0x24023029  addiu       $v0, $zero, 0x3029 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26feb8) {
            ctx->pc = 0x26FEC8u;
            goto label_26fec8;
        }
    }
    ctx->pc = 0x26FEC0u;
    // 0x26fec0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FEC0u;
    {
        const bool branch_taken_0x26fec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26fec0) {
            ctx->pc = 0x26FEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FEC0u;
            // 0x26fec4: 0x96020044  lhu         $v0, 0x44($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FED4u;
            goto label_26fed4;
        }
    }
    ctx->pc = 0x26FEC8u;
label_26fec8:
    // 0x26fec8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26fecc: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x26feccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x26fed0: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x26fed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_26fed4:
    // 0x26fed4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FED4u;
    {
        const bool branch_taken_0x26fed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FED4u;
        // 0x26fed8: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fed4) {
            ctx->pc = 0x26FEF0u;
            goto label_26fef0;
        }
    }
    ctx->pc = 0x26FEDCu;
    // 0x26fedc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x26fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fee0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26fee4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26fee8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26FEE8u;
    {
        const bool branch_taken_0x26fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FEE8u;
        // 0x26feec: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fee8) {
            ctx->pc = 0x26FEF4u;
            goto label_26fef4;
        }
    }
    ctx->pc = 0x26FEF0u;
label_26fef0:
    // 0x26fef0: 0xac500088  sw          $s0, 0x88($v0)
    ctx->pc = 0x26fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 16));
label_26fef4:
    // 0x26fef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fef8:
    // 0x26fef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fefc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26fefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26ff00: 0x3e00008  jr          $ra
    ctx->pc = 0x26FF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF00u;
        // 0x26ff04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FF08u;
}
