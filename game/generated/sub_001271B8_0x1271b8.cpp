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

// Function: sub_001271B8
// Address: 0x1271b8 - 0x127290
void sub_001271B8_0x1271b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001271B8_0x1271b8");
#endif

    ctx->pc = 0x1271b8u;

    // 0x1271b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1271b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1271bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1271bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1271c0: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1271c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1271c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1271c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1271c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1271C8u;
    {
        const bool branch_taken_0x1271c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C8u;
        // 0x1271cc: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271c8) {
            ctx->pc = 0x1271E8u;
            goto label_1271e8;
        }
    }
    ctx->pc = 0x1271D0u;
    // 0x1271d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1271d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1271d4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1271d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1271d8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1271d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1271dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1271DCu;
    {
        const bool branch_taken_0x1271dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1271E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271DCu;
        // 0x1271e0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271dc) {
            ctx->pc = 0x127234u;
            goto label_127234;
        }
    }
    ctx->pc = 0x1271E4u;
    // 0x1271e4: 0x0  nop
    ctx->pc = 0x1271e4u;
    // NOP
label_1271e8:
    // 0x1271e8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1271e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1271ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1271ECu;
    {
        const bool branch_taken_0x1271ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271ec) {
            ctx->pc = 0x1271F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1271ECu;
            // 0x1271f0: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127228u;
            goto label_127228;
        }
    }
    ctx->pc = 0x1271F4u;
    // 0x1271f4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1271f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1271f8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1271F8u;
    {
        const bool branch_taken_0x1271f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271f8) {
            ctx->pc = 0x1271FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1271F8u;
            // 0x1271fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127234u;
            goto label_127234;
        }
    }
    ctx->pc = 0x127200u;
    // 0x127200: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x127200u;
    {
        const bool branch_taken_0x127200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x127200) {
            ctx->pc = 0x127234u;
            goto label_127234;
        }
    }
    ctx->pc = 0x127208u;
    // 0x127208: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x127208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12720c: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x12720cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x127210: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x127210u;
    {
        const bool branch_taken_0x127210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127210) {
            ctx->pc = 0x127214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127210u;
            // 0x127214: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127234u;
            goto label_127234;
        }
    }
    ctx->pc = 0x127218u;
    // 0x127218: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x127218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x12721c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12721Cu;
    {
        const bool branch_taken_0x12721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12721c) {
            ctx->pc = 0x127220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12721Cu;
            // 0x127220: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127230u;
            goto label_127230;
        }
    }
    ctx->pc = 0x127224u;
    // 0x127224: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x127224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_127228:
    // 0x127228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127228u;
    {
        const bool branch_taken_0x127228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127228u;
        // 0x12722c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127228) {
            ctx->pc = 0x127234u;
            goto label_127234;
        }
    }
    ctx->pc = 0x127230u;
label_127230:
    // 0x127230: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x127230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_127234:
    // 0x127234: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x127238: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x127238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12723c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127240: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x127240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x127244: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x127244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x127248: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x127248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x12724c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x12724cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x127250: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x127250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x127254: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x127258: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x127258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12725c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x127260: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x127260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x127264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x127264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x127268: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x127268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x12726c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x12726cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x127270: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x127270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x127274: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127278: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x127278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x12727c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x12727cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x127280: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x127280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x127284: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x127284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x127288: 0x3e00008  jr          $ra
    ctx->pc = 0x127288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127288u;
        // 0x12728c: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127290u;
}
