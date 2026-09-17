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

// Function: sub_00290078
// Address: 0x290078 - 0x2904d8
void sub_00290078_0x290078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290078_0x290078");
#endif

    switch (ctx->pc) {
        case 0x290158u: goto label_290158;
        case 0x29016cu: goto label_29016c;
        case 0x2901d0u: goto label_2901d0;
        case 0x2901f0u: goto label_2901f0;
        case 0x290228u: goto label_290228;
        case 0x29036cu: goto label_29036c;
        case 0x29037cu: goto label_29037c;
        case 0x2903acu: goto label_2903ac;
        case 0x2903c4u: goto label_2903c4;
        case 0x2903d8u: goto label_2903d8;
        case 0x29040cu: goto label_29040c;
        case 0x29041cu: goto label_29041c;
        case 0x290434u: goto label_290434;
        case 0x29044cu: goto label_29044c;
        case 0x290470u: goto label_290470;
        case 0x29048cu: goto label_29048c;
        default: break;
    }

    ctx->pc = 0x290078u;

    // 0x290078: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x290078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29007c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x29007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x290080: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x290080u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290084: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290088: 0x26c4015c  addiu       $a0, $s6, 0x15C
    ctx->pc = 0x290088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 348));
    // 0x29008c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x290090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290094: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x290094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x290098: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x290098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x29009c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x29009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2900a0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2900a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2900a4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2900a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2900a8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2900a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2900ac: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2900acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2900b0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2900b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2900b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2900b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2900b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2900B8u;
    {
        const bool branch_taken_0x2900b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900B8u;
        // 0x2900bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900b8) {
            ctx->pc = 0x2900D0u;
            goto label_2900d0;
        }
    }
    ctx->pc = 0x2900C0u;
    // 0x2900c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2900c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2900c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2900c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2900c8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2900C8u;
    {
        const bool branch_taken_0x2900c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2900c8) {
            ctx->pc = 0x2900CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2900C8u;
            // 0x2900cc: 0x8e4400e4  lw          $a0, 0xE4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900E0u;
            goto label_2900e0;
        }
    }
    ctx->pc = 0x2900D0u;
label_2900d0:
    // 0x2900d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2900d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2900d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2900d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2900d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2900dc: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x2900dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0xE4u));
label_2900e0:
    // 0x2900e0: 0x2406efff  addiu       $a2, $zero, -0x1001
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2900e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2900e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2900e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2900e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2900ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2900ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2900f0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2900f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2900f4: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2900f8: 0x8e4300f4  lw          $v1, 0xF4($s2)
    ctx->pc = 0x2900f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x2900fc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2900fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290100: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290104: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x290104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x290108: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29010c: 0x8e4500e8  lw          $a1, 0xE8($s2)
    ctx->pc = 0x29010cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x290110: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x290110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x290114: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x290114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x290118: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x290118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x29011c: 0x8e4300f8  lw          $v1, 0xF8($s2)
    ctx->pc = 0x29011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x290120: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290124: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290128: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x290128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x29012c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29012cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290130: 0x864300fc  lh          $v1, 0xFC($s2)
    ctx->pc = 0x290130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x290134: 0x1067001a  beq         $v1, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x290134u;
    {
        const bool branch_taken_0x290134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x290138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290134u;
        // 0x290138: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290134) {
            ctx->pc = 0x2901A0u;
            goto label_2901a0;
        }
    }
    ctx->pc = 0x29013Cu;
    // 0x29013c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x29013Cu;
    {
        const bool branch_taken_0x29013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29013Cu;
        // 0x290140: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29013c) {
            ctx->pc = 0x29021Cu;
            goto label_29021c;
        }
    }
    ctx->pc = 0x290144u;
    // 0x290144: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x290144u;
    {
        const bool branch_taken_0x290144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290144u;
        // 0x290148: 0x241e000c  addiu       $fp, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290144) {
            ctx->pc = 0x290220u;
            goto label_290220;
        }
    }
    ctx->pc = 0x29014Cu;
    // 0x29014c: 0x8ec20150  lw          $v0, 0x150($s6)
    ctx->pc = 0x29014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
    // 0x290150: 0xc0a3f4c  jal         func_28FD30
    ctx->pc = 0x290150u;
    SET_GPR_U32(ctx, 31, 0x290158u);
    ctx->pc = 0x290154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290150u;
    // 0x290154: 0x80440020  lb          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FD30u, 0x290150u, 0x290158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290158u;
label_290158:
    // 0x290158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290158u;
    {
        const bool branch_taken_0x290158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290158u;
        // 0x29015c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290158) {
            ctx->pc = 0x290178u;
            goto label_290178;
        }
    }
    ctx->pc = 0x290160u;
    // 0x290160: 0x8ec20154  lw          $v0, 0x154($s6)
    ctx->pc = 0x290160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 340)));
    // 0x290164: 0xc0a3f4c  jal         func_28FD30
    ctx->pc = 0x290164u;
    SET_GPR_U32(ctx, 31, 0x29016Cu);
    ctx->pc = 0x290168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290164u;
    // 0x290168: 0x80440020  lb          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FD30u, 0x290164u, 0x29016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29016Cu;
label_29016c:
    // 0x29016c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29016Cu;
    {
        const bool branch_taken_0x29016c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29016Cu;
        // 0x290170: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29016c) {
            ctx->pc = 0x29018Cu;
            goto label_29018c;
        }
    }
    ctx->pc = 0x290174u;
    // 0x290174: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x290174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_290178:
    // 0x290178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x290178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29017c: 0x8c438868  lw          $v1, -0x7798($v0)
    ctx->pc = 0x29017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936680)));
    // 0x290180: 0x14640026  bne         $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x290180u;
    {
        const bool branch_taken_0x290180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x290184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290180u;
        // 0x290184: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290180) {
            ctx->pc = 0x29021Cu;
            goto label_29021c;
        }
    }
    ctx->pc = 0x290188u;
    // 0x290188: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x290188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29018c:
    // 0x29018c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290190: 0xa64200fe  sh          $v0, 0xFE($s2)
    ctx->pc = 0x290190u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 2));
    // 0x290194: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x290194u;
    {
        const bool branch_taken_0x290194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290194u;
        // 0x290198: 0xa64300fc  sh          $v1, 0xFC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 252), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290194) {
            ctx->pc = 0x290218u;
            goto label_290218;
        }
    }
    ctx->pc = 0x29019Cu;
    // 0x29019c: 0x0  nop
    ctx->pc = 0x29019cu;
    // NOP
label_2901a0:
    // 0x2901a0: 0x864200fe  lh          $v0, 0xFE($s2)
    ctx->pc = 0x2901a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 254)));
    // 0x2901a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2901a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901a8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2901a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2901ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2901acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2901b0: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x2901b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2901b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2901b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2901b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2901b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2901bc: 0x0  nop
    ctx->pc = 0x2901bcu;
    // NOP
    // 0x2901c0: 0x0  nop
    ctx->pc = 0x2901c0u;
    // NOP
    // 0x2901c4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2901c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x2901c8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2901c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2901cc: 0x0  nop
    ctx->pc = 0x2901ccu;
    // NOP
label_2901d0:
    // 0x2901d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2901d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2901d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2901d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2901d8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2901d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2901dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2901DCu;
    {
        const bool branch_taken_0x2901dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901DCu;
        // 0x2901e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901dc) {
            ctx->pc = 0x2901F0u;
            goto label_2901f0;
        }
    }
    ctx->pc = 0x2901E4u;
    // 0x2901e4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2901e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2901e8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2901E8u;
    SET_GPR_U32(ctx, 31, 0x2901F0u);
    ctx->pc = 0x2901ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2901E8u;
    // 0x2901ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2901E8u, 0x2901F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901F0u;
label_2901f0:
    // 0x2901f0: 0x2aa20021  slti        $v0, $s5, 0x21
    ctx->pc = 0x2901f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2901f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2901F4u;
    {
        const bool branch_taken_0x2901f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2901F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2901F4u;
        // 0x2901f8: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901f4) {
            ctx->pc = 0x2901D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2901d0;
        }
    }
    ctx->pc = 0x2901FCu;
    // 0x2901fc: 0x964200fe  lhu         $v0, 0xFE($s2)
    ctx->pc = 0x2901fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 254)));
    // 0x290200: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x290200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x290204: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x290204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x290208: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290208u;
    {
        const bool branch_taken_0x290208 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290208u;
        // 0x29020c: 0xa64200fe  sh          $v0, 0xFE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 254), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290208) {
            ctx->pc = 0x290218u;
            goto label_290218;
        }
    }
    ctx->pc = 0x290210u;
    // 0x290210: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x290210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290214: 0xa64200fc  sh          $v0, 0xFC($s2)
    ctx->pc = 0x290214u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 252), (uint16_t)GPR_U32(ctx, 2));
label_290218:
    // 0x290218: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x290218u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29021c:
    // 0x29021c: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x29021cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_290220:
    // 0x290220: 0x2417efff  addiu       $s7, $zero, -0x1001
    ctx->pc = 0x290220u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x290224: 0x0  nop
    ctx->pc = 0x290224u;
    // NOP
label_290228:
    // 0x290228: 0x56a00002  bnel        $s5, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x290228u;
    {
        const bool branch_taken_0x290228 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x290228) {
            ctx->pc = 0x29022Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290228u;
            // 0x29022c: 0x8ed40154  lw          $s4, 0x154($s6) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290234u;
            goto label_290234;
        }
    }
    ctx->pc = 0x290230u;
    // 0x290230: 0x8ed40150  lw          $s4, 0x150($s6)
    ctx->pc = 0x290230u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
label_290234:
    // 0x290234: 0x82820020  lb          $v0, 0x20($s4)
    ctx->pc = 0x290234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x290238: 0x145e0005  bne         $v0, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x290238u;
    {
        const bool branch_taken_0x290238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x290238) {
            ctx->pc = 0x290250u;
            goto label_290250;
        }
    }
    ctx->pc = 0x290240u;
    // 0x290240: 0x8e5100e8  lw          $s1, 0xE8($s2)
    ctx->pc = 0x290240u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x290244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x290244u;
    {
        const bool branch_taken_0x290244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290244u;
        // 0x290248: 0x8e5300f8  lw          $s3, 0xF8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290244) {
            ctx->pc = 0x290268u;
            goto label_290268;
        }
    }
    ctx->pc = 0x29024Cu;
    // 0x29024c: 0x0  nop
    ctx->pc = 0x29024cu;
    // NOP
label_290250:
    // 0x290250: 0x56a00002  bnel        $s5, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x290250u;
    {
        const bool branch_taken_0x290250 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x290250) {
            ctx->pc = 0x290254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290250u;
            // 0x290254: 0x8e5100e0  lw          $s1, 0xE0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29025Cu;
            goto label_29025c;
        }
    }
    ctx->pc = 0x290258u;
    // 0x290258: 0x8e5100dc  lw          $s1, 0xDC($s2)
    ctx->pc = 0x290258u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_29025c:
    // 0x29025c: 0x56a00002  bnel        $s5, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29025Cu;
    {
        const bool branch_taken_0x29025c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x29025c) {
            ctx->pc = 0x290260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29025Cu;
            // 0x290260: 0x8e5300f0  lw          $s3, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290268u;
            goto label_290268;
        }
    }
    ctx->pc = 0x290264u;
    // 0x290264: 0x8e5300ec  lw          $s3, 0xEC($s2)
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_290268:
    // 0x290268: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x290268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x29026c: 0x24050b0c  addiu       $a1, $zero, 0xB0C
    ctx->pc = 0x29026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2828));
    // 0x290270: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x290270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x290274: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x290274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x290278: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x290278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29027c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290280: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x290280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x290284: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290288: 0x96830020  lhu         $v1, 0x20($s4)
    ctx->pc = 0x290288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x29028c: 0x50650082  beql        $v1, $a1, . + 4 + (0x82 << 2)
    ctx->pc = 0x29028Cu;
    {
        const bool branch_taken_0x29028c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x29028c) {
            ctx->pc = 0x290290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29028Cu;
            // 0x290290: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x290294u;
    // 0x290294: 0x92830020  lbu         $v1, 0x20($s4)
    ctx->pc = 0x290294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x290298: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x290298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x29029c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x29029cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2902a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2902A0u;
    {
        const bool branch_taken_0x2902a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2902a0) {
            ctx->pc = 0x2902A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902A0u;
            // 0x2902a4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2902BCu;
            goto label_2902bc;
        }
    }
    ctx->pc = 0x2902A8u;
    // 0x2902a8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2902a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2902ac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2902acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2902b0: 0x545e0079  bnel        $v0, $fp, . + 4 + (0x79 << 2)
    ctx->pc = 0x2902B0u;
    {
        const bool branch_taken_0x2902b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x2902b0) {
            ctx->pc = 0x2902B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902B0u;
            // 0x2902b4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x2902B8u;
    // 0x2902b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2902b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2902bc:
    // 0x2902bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2902bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2902c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2902c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2902c4: 0x16a2001e  bne         $s5, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2902C4u;
    {
        const bool branch_taken_0x2902c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2902C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2902C4u;
        // 0x2902c8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902c4) {
            ctx->pc = 0x290340u;
            goto label_290340;
        }
    }
    ctx->pc = 0x2902CCu;
    // 0x2902cc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2902ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2902d0: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2902D0u;
    {
        const bool branch_taken_0x2902d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2902d0) {
            ctx->pc = 0x2902D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902D0u;
            // 0x2902d4: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290344u;
            goto label_290344;
        }
    }
    ctx->pc = 0x2902D8u;
    // 0x2902d8: 0x8ec30150  lw          $v1, 0x150($s6)
    ctx->pc = 0x2902d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 336)));
    // 0x2902dc: 0x8ec40154  lw          $a0, 0x154($s6)
    ctx->pc = 0x2902dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 340)));
    // 0x2902e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2902e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2902e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2902e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2902e8: 0x54a20016  bnel        $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2902E8u;
    {
        const bool branch_taken_0x2902e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2902e8) {
            ctx->pc = 0x2902ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2902E8u;
            // 0x2902ec: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290344u;
            goto label_290344;
        }
    }
    ctx->pc = 0x2902F0u;
    // 0x2902f0: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x2902f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2902f4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2902f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2902f8: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2902f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2902fc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2902fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x290300: 0x8e4400e0  lw          $a0, 0xE0($s2)
    ctx->pc = 0x290300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x290304: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290308: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x290308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x29030c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29030cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290310: 0x8e4300ec  lw          $v1, 0xEC($s2)
    ctx->pc = 0x290310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x290314: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290318: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x290318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29031c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x29031cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x290320: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290324: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x290324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x290328: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x290328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29032c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x290330: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x290330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x290334: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x290334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x290338: 0x8e5100e4  lw          $s1, 0xE4($s2)
    ctx->pc = 0x290338u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
    // 0x29033c: 0x8e5300f4  lw          $s3, 0xF4($s2)
    ctx->pc = 0x29033cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_290340:
    // 0x290340: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x290340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_290344:
    // 0x290344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x290348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29034c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x290350: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x290350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x290354: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x290354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x290358: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x290358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29035c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x290360: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x290360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x290364: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x290364u;
    SET_GPR_U32(ctx, 31, 0x29036Cu);
    ctx->pc = 0x290368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290364u;
    // 0x290368: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x290364u, 0x29036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29036Cu;
label_29036c:
    // 0x29036c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29036cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290374: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x290374u;
    SET_GPR_U32(ctx, 31, 0x29037Cu);
    ctx->pc = 0x290378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290374u;
    // 0x290378: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x290374u, 0x29037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29037Cu;
label_29037c:
    // 0x29037c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x290380: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x290380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x290384: 0x3842001e  xori        $v0, $v0, 0x1E
    ctx->pc = 0x290384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)30);
    // 0x290388: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x290388u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x29038c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x29038cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x290390: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x290390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x290394: 0x26100058  addiu       $s0, $s0, 0x58
    ctx->pc = 0x290394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x290398: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x290398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29039c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x29039Cu;
    {
        const bool branch_taken_0x29039c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29039Cu;
        // 0x2903a0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29039c) {
            ctx->pc = 0x2903D0u;
            goto label_2903d0;
        }
    }
    ctx->pc = 0x2903A4u;
    // 0x2903a4: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2903A4u;
    SET_GPR_U32(ctx, 31, 0x2903ACu);
    ctx->pc = 0x2903A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903A4u;
    // 0x2903a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2903A4u, 0x2903ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903ACu;
label_2903ac:
    // 0x2903ac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2903acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2903b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2903b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2903b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2903b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2903b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2903b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2903bc: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2903BCu;
    SET_GPR_U32(ctx, 31, 0x2903C4u);
    ctx->pc = 0x2903C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903BCu;
    // 0x2903c0: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2903BCu, 0x2903C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903C4u;
label_2903c4:
    // 0x2903c4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2903c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2903c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2903c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2903cc: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2903ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2903d0:
    // 0x2903d0: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x2903D0u;
    SET_GPR_U32(ctx, 31, 0x2903D8u);
    ctx->pc = 0x2903D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903D0u;
    // 0x2903d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x2903D0u, 0x2903D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903D8u;
label_2903d8:
    // 0x2903d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903D8u;
    {
        const bool branch_taken_0x2903d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903D8u;
        // 0x2903dc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903d8) {
            ctx->pc = 0x2903F0u;
            goto label_2903f0;
        }
    }
    ctx->pc = 0x2903E0u;
    // 0x2903e0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2903e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2903e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2903E4u;
    {
        const bool branch_taken_0x2903e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903E4u;
        // 0x2903e8: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903e4) {
            ctx->pc = 0x2903F8u;
            goto label_2903f8;
        }
    }
    ctx->pc = 0x2903ECu;
    // 0x2903ec: 0x0  nop
    ctx->pc = 0x2903ecu;
    // NOP
label_2903f0:
    // 0x2903f0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2903f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2903f4: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2903f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_2903f8:
    // 0x2903f8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2903f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2903fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2903fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290400: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x290400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x290404: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x290404u;
    SET_GPR_U32(ctx, 31, 0x29040Cu);
    ctx->pc = 0x290408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290404u;
    // 0x290408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x290404u, 0x29040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29040Cu;
label_29040c:
    // 0x29040c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290410: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290414: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x290414u;
    SET_GPR_U32(ctx, 31, 0x29041Cu);
    ctx->pc = 0x290418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290414u;
    // 0x290418: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x290414u, 0x29041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29041Cu;
label_29041c:
    // 0x29041c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x29041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x290420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x290424: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x290424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x290428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29042c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29042Cu;
    SET_GPR_U32(ctx, 31, 0x290434u);
    ctx->pc = 0x290430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29042Cu;
    // 0x290430: 0x460cab01  sub.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29042Cu, 0x290434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290434u;
label_290434:
    // 0x290434: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x290434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x290438: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x290438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29043c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x29043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x290440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x290440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290444: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x290444u;
    SET_GPR_U32(ctx, 31, 0x29044Cu);
    ctx->pc = 0x290448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290444u;
    // 0x290448: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x290444u, 0x29044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29044Cu;
label_29044c:
    // 0x29044c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x29044cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x290450: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x290454: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x290454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x290458: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x290458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x29045c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x290460: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x290460u;
    {
        const bool branch_taken_0x290460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x290460) {
            ctx->pc = 0x290464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290460u;
            // 0x290464: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x290468u;
    // 0x290468: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x290468u;
    SET_GPR_U32(ctx, 31, 0x290470u);
    ctx->pc = 0x29046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290468u;
    // 0x29046c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x290468u, 0x290470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290470u;
label_290470:
    // 0x290470: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x290470u;
    {
        const bool branch_taken_0x290470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290470) {
            ctx->pc = 0x290474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290470u;
            // 0x290474: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290490u;
            goto label_290490;
        }
    }
    ctx->pc = 0x290478u;
    // 0x290478: 0x8ec40130  lw          $a0, 0x130($s6)
    ctx->pc = 0x290478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x29047c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29047cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290480: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x290480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290484: 0xc0ad7f6  jal         func_2B5FD8
    ctx->pc = 0x290484u;
    SET_GPR_U32(ctx, 31, 0x29048Cu);
    ctx->pc = 0x290488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290484u;
    // 0x290488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FD8u, 0x290484u, 0x29048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29048Cu;
label_29048c:
    // 0x29048c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_290490:
    // 0x290490: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x290490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x290494: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x290494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_290498:
    // 0x290498: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x290498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29049c: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
    ctx->pc = 0x29049Cu;
    {
        const bool branch_taken_0x29049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2904A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29049Cu;
        // 0x2904a0: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29049c) {
            ctx->pc = 0x290228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290228;
        }
    }
    ctx->pc = 0x2904A4u;
    // 0x2904a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2904a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2904a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2904a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2904ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2904acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2904b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2904b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2904b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2904b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2904b8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2904b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2904bc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2904bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2904c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2904c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2904c4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2904c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2904c8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2904c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2904cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2904ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2904d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2904D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2904D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2904D0u;
        // 0x2904d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2904D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2904D8u;
}
