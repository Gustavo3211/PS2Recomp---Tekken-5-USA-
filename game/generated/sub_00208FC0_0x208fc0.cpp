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

// Function: sub_00208FC0
// Address: 0x208fc0 - 0x209068
void sub_00208FC0_0x208fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208FC0_0x208fc0");
#endif

    switch (ctx->pc) {
        case 0x209020u: goto label_209020;
        case 0x209030u: goto label_209030;
        case 0x209038u: goto label_209038;
        case 0x209040u: goto label_209040;
        default: break;
    }

    ctx->pc = 0x208fc0u;

    // 0x208fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208fc4: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x208fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x208fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208fd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208fd4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x208fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208fd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x208fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208fdc: 0x3a120001  xori        $s2, $s0, 0x1
    ctx->pc = 0x208fdcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x208fe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x208fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x208fe4: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x208fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x208fe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208fec: 0x24e78858  addiu       $a3, $a3, -0x77A8
    ctx->pc = 0x208fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936664));
    // 0x208ff0: 0x266283c0  addiu       $v0, $s3, -0x7C40
    ctx->pc = 0x208ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x208ff4: 0x90460006  lbu         $a2, 0x6($v0)
    ctx->pc = 0x208ff4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x3A83C6u));
    // 0x208ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ffc: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x208ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x209000: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x209000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x209004: 0x38c60000  xori        $a2, $a2, 0x0
    ctx->pc = 0x209004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)0);
    // 0x209008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x209008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20900c: 0x46880a  movz        $s1, $v0, $a2
    ctx->pc = 0x20900cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x209010: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209010u;
    {
        const bool branch_taken_0x209010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x209014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209010u;
        // 0x209014: 0xace30050  sw          $v1, 0x50($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209010) {
            ctx->pc = 0x209028u;
            goto label_209028;
        }
    }
    ctx->pc = 0x209018u;
    // 0x209018: 0xc0865fe  jal         func_2197F8
    ctx->pc = 0x209018u;
    SET_GPR_U32(ctx, 31, 0x209020u);
    ctx->pc = 0x2197F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2197F8u, 0x209018u, 0x209020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209020u;
label_209020:
    // 0x209020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x209020u;
    {
        const bool branch_taken_0x209020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209020) {
            ctx->pc = 0x209030u;
            goto label_209030;
        }
    }
    ctx->pc = 0x209028u;
label_209028:
    // 0x209028: 0xc0865d8  jal         func_219760
    ctx->pc = 0x209028u;
    SET_GPR_U32(ctx, 31, 0x209030u);
    ctx->pc = 0x20902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209028u;
    // 0x20902c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219760u, 0x209028u, 0x209030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209030u;
label_209030:
    // 0x209030: 0xc0865fe  jal         func_2197F8
    ctx->pc = 0x209030u;
    SET_GPR_U32(ctx, 31, 0x209038u);
    ctx->pc = 0x209034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209030u;
    // 0x209034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2197F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2197F8u, 0x209030u, 0x209038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209038u;
label_209038:
    // 0x209038: 0xc08659e  jal         func_219678
    ctx->pc = 0x209038u;
    SET_GPR_U32(ctx, 31, 0x209040u);
    ctx->pc = 0x20903Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209038u;
    // 0x20903c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219678u, 0x209038u, 0x209040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209040u;
label_209040:
    // 0x209040: 0x266283c0  addiu       $v0, $s3, -0x7C40
    ctx->pc = 0x209040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935488));
    // 0x209044: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x209044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x209048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20904c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20904cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20905c: 0xa0400015  sb          $zero, 0x15($v0)
    ctx->pc = 0x20905cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x209060: 0x3e00008  jr          $ra
    ctx->pc = 0x209060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209060u;
        // 0x209064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209068u;
}
