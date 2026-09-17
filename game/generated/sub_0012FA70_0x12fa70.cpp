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

// Function: sub_0012FA70
// Address: 0x12fa70 - 0x12fbb0
void sub_0012FA70_0x12fa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FA70_0x12fa70");
#endif

    switch (ctx->pc) {
        case 0x12fa94u: goto label_12fa94;
        case 0x12faa4u: goto label_12faa4;
        case 0x12fb24u: goto label_12fb24;
        case 0x12fb40u: goto label_12fb40;
        case 0x12fb80u: goto label_12fb80;
        case 0x12fb90u: goto label_12fb90;
        default: break;
    }

    ctx->pc = 0x12fa70u;

    // 0x12fa70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fa74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12fa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12fa78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12fa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12fa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12fa84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12fa88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12fa8c: 0xc04bdd4  jal         func_12F750
    ctx->pc = 0x12FA8Cu;
    SET_GPR_U32(ctx, 31, 0x12FA94u);
    ctx->pc = 0x12FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA8Cu;
    // 0x12fa90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F750u, 0x12FA8Cu, 0x12FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA94u;
label_12fa94:
    // 0x12fa94: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x12fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x12fa98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12fa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa9c: 0xc04bdd4  jal         func_12F750
    ctx->pc = 0x12FA9Cu;
    SET_GPR_U32(ctx, 31, 0x12FAA4u);
    ctx->pc = 0x12FAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA9Cu;
    // 0x12faa0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F750u, 0x12FA9Cu, 0x12FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAA4u;
label_12faa4:
    // 0x12faa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x12faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12faa8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x12faa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faac: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x12faacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12fab0: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x12fab0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12fab4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x12fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12fab8: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x12fab8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x12fabc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fac0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x12fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12fac4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x12fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x12fac8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x12fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12facc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fad0: 0x22500  sll         $a0, $v0, 20
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x12fad4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12fad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fad8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x12fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12fadc: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x12fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12fae0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FAE0u;
    {
        const bool branch_taken_0x12fae0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAE0u;
        // 0x12fae4: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fae0) {
            ctx->pc = 0x12FB00u;
            goto label_12fb00;
        }
    }
    ctx->pc = 0x12FAE8u;
    // 0x12fae8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12faec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12faf0: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x12faf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x12faf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FAF4u;
    {
        const bool branch_taken_0x12faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAF4u;
        // 0x12faf8: 0x2459025  or          $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faf4) {
            ctx->pc = 0x12FB14u;
            goto label_12fb14;
        }
    }
    ctx->pc = 0x12FAFCu;
    // 0x12fafc: 0x0  nop
    ctx->pc = 0x12fafcu;
    // NOP
label_12fb00:
    // 0x12fb00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12fb04: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12fb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12fb08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12fb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12fb0c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x12fb0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x12fb10: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x12fb10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_12fb14:
    // 0x12fb14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb18: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x12fb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb1c: 0xc048d62  jal         func_123588
    ctx->pc = 0x12FB1Cu;
    SET_GPR_U32(ctx, 31, 0x12FB24u);
    ctx->pc = 0x123588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123588u, 0x12FB1Cu, 0x12FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB24u;
label_12fb24:
    // 0x12fb24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12fb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fb28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12fb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fb2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12fb2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fb30: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12fb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12fb34: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB34u;
        // 0x12fb38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FB3Cu;
    // 0x12fb3c: 0x0  nop
    ctx->pc = 0x12fb3cu;
    // NOP
label_12fb40:
    // 0x12fb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fb48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb4c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x12fb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x12fb50: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x12fb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12fb54: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x12fb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x12fb58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FB58u;
    {
        const bool branch_taken_0x12fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB58u;
        // 0x12fb5c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb58) {
            ctx->pc = 0x12FB78u;
            goto label_12fb78;
        }
    }
    ctx->pc = 0x12FB60u;
    // 0x12fb60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x12fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x12fb64: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12fb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fb6c: 0xdc42f990  ld          $v0, -0x670($v0)
    ctx->pc = 0x12fb6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294965648)));
    // 0x12fb70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12FB70u;
    {
        const bool branch_taken_0x12fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB70u;
        // 0x12fb74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb70) {
            ctx->pc = 0x12FBA4u;
            goto label_12fba4;
        }
    }
    ctx->pc = 0x12FB78u;
label_12fb78:
    // 0x12fb78: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12FB78u;
    {
        const bool branch_taken_0x12fb78 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x12fb78) {
            ctx->pc = 0x12FB9Cu;
            goto label_12fb9c;
        }
    }
    ctx->pc = 0x12FB80u;
label_12fb80:
    // 0x12fb80: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x12fb80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12fb84: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12fb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12fb88: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12FB88u;
    SET_GPR_U32(ctx, 31, 0x12FB90u);
    ctx->pc = 0x12FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB88u;
    // 0x12fb8c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12FB88u, 0x12FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB90u;
label_12fb90:
    // 0x12fb90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb94: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FB94u;
    {
        const bool branch_taken_0x12fb94 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x12fb94) {
            ctx->pc = 0x12FB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fb80;
        }
    }
    ctx->pc = 0x12FB9Cu;
label_12fb9c:
    // 0x12fb9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12fb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12fba4:
    // 0x12fba4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12fba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fba8: 0x3e00008  jr          $ra
    ctx->pc = 0x12FBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBA8u;
        // 0x12fbac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FBB0u;
}
