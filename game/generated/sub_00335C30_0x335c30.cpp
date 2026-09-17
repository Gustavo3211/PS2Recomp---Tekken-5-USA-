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

// Function: sub_00335C30
// Address: 0x335c30 - 0x335d78
void sub_00335C30_0x335c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335C30_0x335c30");
#endif

    switch (ctx->pc) {
        case 0x335c54u: goto label_335c54;
        default: break;
    }

    ctx->pc = 0x335c30u;

    // 0x335c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335c34: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x335c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x335c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335c3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335c44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x335c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335c4c: 0xc040880  jal         func_102200
    ctx->pc = 0x335C4Cu;
    SET_GPR_U32(ctx, 31, 0x335C54u);
    ctx->pc = 0x335C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C4Cu;
    // 0x335c50: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102200u, 0x335C4Cu, 0x335C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C54u;
label_335c54:
    // 0x335c54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x335c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c58: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x335c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x335c5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335C5Cu;
    {
        const bool branch_taken_0x335c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C5Cu;
        // 0x335c60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335c5c) {
            ctx->pc = 0x335C74u;
            goto label_335c74;
        }
    }
    ctx->pc = 0x335C64u;
    // 0x335c64: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x335c64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x335c68: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x335C68u;
    {
        const bool branch_taken_0x335c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335c68) {
            ctx->pc = 0x335C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335C68u;
            // 0x335c6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335C74u;
            goto label_335c74;
        }
    }
    ctx->pc = 0x335C70u;
    // 0x335c70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x335c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_335c74:
    // 0x335c74: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x335c74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x335c78: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x335c78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x335c7c: 0x24050a00  addiu       $a1, $zero, 0xA00
    ctx->pc = 0x335c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x335c80: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x335c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x335c84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x335c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335c88: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x335c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x335c8c: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x335c8cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335c90: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x335c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x335c94: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x335c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x335c98: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x335c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x335c9c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x335c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x335ca0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x335ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x335ca4: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x335ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x335ca8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335cac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x335cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x335cb0: 0xfe030010  sd          $v1, 0x10($s0)
    ctx->pc = 0x335cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x335cb4: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x335cb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x335cb8: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x335cb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x335cbc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x335CBCu;
    {
        const bool branch_taken_0x335cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335cbc) {
            ctx->pc = 0x335CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335CBCu;
            // 0x335cc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335CC4u;
            goto label_335cc4;
        }
    }
    ctx->pc = 0x335CC4u;
label_335cc4:
    // 0x335cc4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x335cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x335cc8: 0x2812  mflo        $a1
    ctx->pc = 0x335cc8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x335ccc: 0x14460016  bne         $v0, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x335CCCu;
    {
        const bool branch_taken_0x335ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x335CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CCCu;
        // 0x335cd0: 0xa32018  mult        $a0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ccc) {
            ctx->pc = 0x335D28u;
            goto label_335d28;
        }
    }
    ctx->pc = 0x335CD4u;
    // 0x335cd4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x335cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x335cd8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x335cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x335cdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335ce0: 0x84e50004  lh          $a1, 0x4($a3)
    ctx->pc = 0x335ce0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x335ce4: 0x2127a  dsrl        $v0, $v0, 9
    ctx->pc = 0x335ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 9);
    // 0x335ce8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x335ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x335cec: 0x34848290  ori         $a0, $a0, 0x8290
    ctx->pc = 0x335cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33424);
    // 0x335cf0: 0x96260008  lhu         $a2, 0x8($s1)
    ctx->pc = 0x335cf0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x335cf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335cf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x335cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x335cfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335d00: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335D00u;
    {
        const bool branch_taken_0x335d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D00u;
        // 0x335d04: 0x441825  or          $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d00) {
            ctx->pc = 0x335D18u;
            goto label_335d18;
        }
    }
    ctx->pc = 0x335D08u;
    // 0x335d08: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x335d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x335d0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x335D0Cu;
    {
        const bool branch_taken_0x335d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D0Cu;
        // 0x335d10: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d0c) {
            ctx->pc = 0x335D1Cu;
            goto label_335d1c;
        }
    }
    ctx->pc = 0x335D14u;
    // 0x335d14: 0x0  nop
    ctx->pc = 0x335d14u;
    // NOP
label_335d18:
    // 0x335d18: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x335d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_335d1c:
    // 0x335d1c: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x335d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x335d20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x335D20u;
    {
        const bool branch_taken_0x335d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D20u;
        // 0x335d24: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d20) {
            ctx->pc = 0x335D5Cu;
            goto label_335d5c;
        }
    }
    ctx->pc = 0x335D28u;
label_335d28:
    // 0x335d28: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x335d28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x335d2c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x335d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x335d30: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x335d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x335d34: 0x34a54290  ori         $a1, $a1, 0x4290
    ctx->pc = 0x335d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17040);
    // 0x335d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335d3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x335d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335d40: 0x2127a  dsrl        $v0, $v0, 9
    ctx->pc = 0x335d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 9);
    // 0x335d44: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x335d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x335d48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x335d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x335d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335d50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x335d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x335d54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x335d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x335d58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x335d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_335d5c:
    // 0x335d5c: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x335d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x335d60: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x335d60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x335d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335d70: 0x3e00008  jr          $ra
    ctx->pc = 0x335D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D70u;
        // 0x335d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335D78u;
}
