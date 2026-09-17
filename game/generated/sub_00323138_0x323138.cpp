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

// Function: sub_00323138
// Address: 0x323138 - 0x3231f8
void sub_00323138_0x323138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323138_0x323138");
#endif

    switch (ctx->pc) {
        case 0x323174u: goto label_323174;
        case 0x323198u: goto label_323198;
        case 0x3231a0u: goto label_3231a0;
        case 0x3231d4u: goto label_3231d4;
        case 0x3231e0u: goto label_3231e0;
        default: break;
    }

    ctx->pc = 0x323138u;

    // 0x323138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32313c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32314c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323150: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x323150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x323154: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x323154u;
    {
        const bool branch_taken_0x323154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x323158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323154u;
        // 0x323158: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323154) {
            ctx->pc = 0x3231C8u;
            goto label_3231c8;
        }
    }
    ctx->pc = 0x32315Cu;
    // 0x32315c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32315Cu;
    {
        const bool branch_taken_0x32315c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x323160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32315Cu;
        // 0x323160: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32315c) {
            ctx->pc = 0x323190u;
            goto label_323190;
        }
    }
    ctx->pc = 0x323164u;
    // 0x323164: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x323164u;
    {
        const bool branch_taken_0x323164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323164) {
            ctx->pc = 0x323168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323164u;
            // 0x323168: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3231E4u;
            goto label_3231e4;
        }
    }
    ctx->pc = 0x32316Cu;
    // 0x32316c: 0xc0ca850  jal         func_32A140
    ctx->pc = 0x32316Cu;
    SET_GPR_U32(ctx, 31, 0x323174u);
    ctx->pc = 0x323170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32316Cu;
    // 0x323170: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A140u, 0x32316Cu, 0x323174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323174u;
label_323174:
    // 0x323174: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x323174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x323178: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x323178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x32317c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32317cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323188: 0x80ca91a  j           func_32A468
    ctx->pc = 0x323188u;
    ctx->pc = 0x32318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323188u;
    // 0x32318c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A468u, 0x323188u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323190u;
label_323190:
    // 0x323190: 0xc0ca850  jal         func_32A140
    ctx->pc = 0x323190u;
    SET_GPR_U32(ctx, 31, 0x323198u);
    ctx->pc = 0x323194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323190u;
    // 0x323194: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A140u, 0x323190u, 0x323198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323198u;
label_323198:
    // 0x323198: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x323198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x32319c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x32319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3231a0:
    // 0x3231a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3231a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3231a4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3231a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3231a8: 0x0  nop
    ctx->pc = 0x3231a8u;
    // NOP
    // 0x3231ac: 0x0  nop
    ctx->pc = 0x3231acu;
    // NOP
    // 0x3231b0: 0x0  nop
    ctx->pc = 0x3231b0u;
    // NOP
    // 0x3231b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3231B4u;
    {
        const bool branch_taken_0x3231b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B4u;
        // 0x3231b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231b4) {
            ctx->pc = 0x3231A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3231a0;
        }
    }
    ctx->pc = 0x3231BCu;
    // 0x3231bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3231BCu;
    {
        const bool branch_taken_0x3231bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231BCu;
        // 0x3231c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231bc) {
            ctx->pc = 0x3231E4u;
            goto label_3231e4;
        }
    }
    ctx->pc = 0x3231C4u;
    // 0x3231c4: 0x0  nop
    ctx->pc = 0x3231c4u;
    // NOP
label_3231c8:
    // 0x3231c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3231c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3231cc: 0xc0ca850  jal         func_32A140
    ctx->pc = 0x3231CCu;
    SET_GPR_U32(ctx, 31, 0x3231D4u);
    ctx->pc = 0x3231D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231CCu;
    // 0x3231d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A140u, 0x3231CCu, 0x3231D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231D4u;
label_3231d4:
    // 0x3231d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3231d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3231d8: 0xc0ca86a  jal         func_32A1A8
    ctx->pc = 0x3231D8u;
    SET_GPR_U32(ctx, 31, 0x3231E0u);
    ctx->pc = 0x3231DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231D8u;
    // 0x3231dc: 0x26250024  addiu       $a1, $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1A8u, 0x3231D8u, 0x3231E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231E0u;
label_3231e0:
    // 0x3231e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3231e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3231e4:
    // 0x3231e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3231e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3231e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3231e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3231ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3231ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3231F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231ECu;
        // 0x3231f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3231ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3231F4u;
    // 0x3231f4: 0x0  nop
    ctx->pc = 0x3231f4u;
    // NOP
    ctx->pc = 0x3231f8u;
}
