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

// Function: sub_002812D8
// Address: 0x2812d8 - 0x281390
void sub_002812D8_0x2812d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002812D8_0x2812d8");
#endif

    switch (ctx->pc) {
        case 0x2812f8u: goto label_2812f8;
        case 0x281318u: goto label_281318;
        case 0x281348u: goto label_281348;
        case 0x281368u: goto label_281368;
        default: break;
    }

    ctx->pc = 0x2812d8u;

    // 0x2812d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2812d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2812dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2812dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2812e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2812e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2812e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2812e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2812e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2812ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2812ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2812f0: 0xc0a04ac  jal         func_2812B0
    ctx->pc = 0x2812F0u;
    SET_GPR_U32(ctx, 31, 0x2812F8u);
    ctx->pc = 0x2812F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2812F0u;
    // 0x2812f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812B0u, 0x2812F0u, 0x2812F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812F8u;
label_2812f8:
    // 0x2812f8: 0xa2200204  sb          $zero, 0x204($s1)
    ctx->pc = 0x2812f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 516), (uint8_t)GPR_U32(ctx, 0));
    // 0x2812fc: 0xae2007c8  sw          $zero, 0x7C8($s1)
    ctx->pc = 0x2812fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 0));
    // 0x281300: 0xae2007f8  sw          $zero, 0x7F8($s1)
    ctx->pc = 0x281300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 0));
    // 0x281304: 0xae2007fc  sw          $zero, 0x7FC($s1)
    ctx->pc = 0x281304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2044), GPR_U32(ctx, 0));
    // 0x281308: 0xae200800  sw          $zero, 0x800($s1)
    ctx->pc = 0x281308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 0));
    // 0x28130c: 0xae200804  sw          $zero, 0x804($s1)
    ctx->pc = 0x28130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2052), GPR_U32(ctx, 0));
    // 0x281310: 0xae2007f0  sw          $zero, 0x7F0($s1)
    ctx->pc = 0x281310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2032), GPR_U32(ctx, 0));
    // 0x281314: 0xae2007d0  sw          $zero, 0x7D0($s1)
    ctx->pc = 0x281314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2000), GPR_U32(ctx, 0));
label_281318:
    // 0x281318: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x281318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28131c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28131cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x281320: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x281320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x281324: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x281324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x281328: 0x0  nop
    ctx->pc = 0x281328u;
    // NOP
    // 0x28132c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28132Cu;
    {
        const bool branch_taken_0x28132c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28132Cu;
        // 0x281330: 0xac4007e0  sw          $zero, 0x7E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28132c) {
            ctx->pc = 0x281318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281318;
        }
    }
    ctx->pc = 0x281334u;
    // 0x281334: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x281334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x281338: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x281338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28133c: 0x24523a80  addiu       $s2, $v0, 0x3A80
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 14976));
    // 0x281340: 0x8e230894  lw          $v1, 0x894($s1)
    ctx->pc = 0x281340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x281344: 0x0  nop
    ctx->pc = 0x281344u;
    // NOP
label_281348:
    // 0x281348: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x281348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x28134c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x281350: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x281354: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x281354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x281358: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x281358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28135c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x28135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x281360: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x281360u;
    SET_GPR_U32(ctx, 31, 0x281368u);
    ctx->pc = 0x281364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281360u;
    // 0x281364: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x281360u, 0x281368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281368u;
label_281368:
    // 0x281368: 0x2a020016  slti        $v0, $s0, 0x16
    ctx->pc = 0x281368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x28136c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x28136Cu;
    {
        const bool branch_taken_0x28136c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28136c) {
            ctx->pc = 0x281370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28136Cu;
            // 0x281370: 0x8e230894  lw          $v1, 0x894($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281348;
        }
    }
    ctx->pc = 0x281374u;
    // 0x281374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x281378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28137c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28137cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281380: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x281380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x281384: 0x3e00008  jr          $ra
    ctx->pc = 0x281384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281384u;
        // 0x281388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28138Cu;
    // 0x28138c: 0x0  nop
    ctx->pc = 0x28138cu;
    // NOP
    ctx->pc = 0x281390u;
}
