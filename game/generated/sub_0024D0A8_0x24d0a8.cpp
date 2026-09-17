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

// Function: sub_0024D0A8
// Address: 0x24d0a8 - 0x24d200
void sub_0024D0A8_0x24d0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D0A8_0x24d0a8");
#endif

    switch (ctx->pc) {
        case 0x24d0f0u: goto label_24d0f0;
        case 0x24d0f8u: goto label_24d0f8;
        case 0x24d104u: goto label_24d104;
        case 0x24d128u: goto label_24d128;
        case 0x24d130u: goto label_24d130;
        case 0x24d160u: goto label_24d160;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d1d4u: goto label_24d1d4;
        default: break;
    }

    ctx->pc = 0x24d0a8u;

    // 0x24d0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24d0ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24d0b0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24d0b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24d0b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d0bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24d0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d0c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24d0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d0cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d0d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24d0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x24d0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x24d0d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x24d0d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24d0e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24d0e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24d0e8: 0xc092eb2  jal         func_24BAC8
    ctx->pc = 0x24D0E8u;
    SET_GPR_U32(ctx, 31, 0x24D0F0u);
    ctx->pc = 0x24D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0E8u;
    // 0x24d0ec: 0xaec200ac  sw          $v0, 0xAC($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAC8u, 0x24D0E8u, 0x24D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0F0u;
label_24d0f0:
    // 0x24d0f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24d0f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0f4: 0x0  nop
    ctx->pc = 0x24d0f4u;
    // NOP
label_24d0f8:
    // 0x24d0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d0fc: 0xc086304  jal         func_218C10
    ctx->pc = 0x24D0FCu;
    SET_GPR_U32(ctx, 31, 0x24D104u);
    ctx->pc = 0x24D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0FCu;
    // 0x24d100: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x24D0FCu, 0x24D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D104u;
label_24d104:
    // 0x24d104: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x24d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24d108: 0x2a040020  slti        $a0, $s0, 0x20
    ctx->pc = 0x24d108u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x24d10c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24D10Cu;
    {
        const bool branch_taken_0x24d10c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D10Cu;
        // 0x24d110: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d10c) {
            ctx->pc = 0x24D0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d0f8;
        }
    }
    ctx->pc = 0x24D114u;
    // 0x24d114: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x24D114u;
    {
        const bool branch_taken_0x24d114 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x24D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D114u;
        // 0x24d118: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d114) {
            ctx->pc = 0x24D14Cu;
            goto label_24d14c;
        }
    }
    ctx->pc = 0x24D11Cu;
    // 0x24d11c: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x24d11cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x24d120: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x24d120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d128:
    // 0x24d128: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x24D128u;
    SET_GPR_U32(ctx, 31, 0x24D130u);
    ctx->pc = 0x24D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D128u;
    // 0x24d12c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x24D128u, 0x24D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D130u;
label_24d130:
    // 0x24d130: 0x212202a  slt         $a0, $s0, $s2
    ctx->pc = 0x24d130u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x24d134: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x24d134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d138: 0x10750002  beq         $v1, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x24D138u;
    {
        const bool branch_taken_0x24d138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x24D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D138u;
        // 0x24d13c: 0x741014  dsllv       $v0, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d138) {
            ctx->pc = 0x24D144u;
            goto label_24d144;
        }
    }
    ctx->pc = 0x24D140u;
    // 0x24d140: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x24d140u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_24d144:
    // 0x24d144: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24D144u;
    {
        const bool branch_taken_0x24d144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D144u;
        // 0x24d148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d144) {
            ctx->pc = 0x24D128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d128;
        }
    }
    ctx->pc = 0x24D14Cu;
label_24d14c:
    // 0x24d14c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24d150: 0xaec000a0  sw          $zero, 0xA0($s6)
    ctx->pc = 0x24d150u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 0));
    // 0x24d154: 0x24528858  addiu       $s2, $v0, -0x77A8
    ctx->pc = 0x24d154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x24d158: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24d158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d15c: 0x0  nop
    ctx->pc = 0x24d15cu;
    // NOP
label_24d160:
    // 0x24d160: 0xa2300023  sb          $s0, 0x23($s1)
    ctx->pc = 0x24d160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 16));
    // 0x24d164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d168: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x24d168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d16c: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x24D16Cu;
    {
        const bool branch_taken_0x24d16c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D16Cu;
        // 0x24d170: 0xa2200021  sb          $zero, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d16c) {
            ctx->pc = 0x24D1ACu;
            goto label_24d1ac;
        }
    }
    ctx->pc = 0x24D174u;
    // 0x24d174: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24D174u;
    SET_GPR_U32(ctx, 31, 0x24D17Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24D174u, 0x24D17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D17Cu;
label_24d17c:
    // 0x24d17c: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x24d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x24d180: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d184: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24d184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24d188: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x24d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x24d18c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d190: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x24d190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24d194: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x24d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x24d198: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x24d198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x24d19c: 0x24447fff  addiu       $a0, $v0, 0x7FFF
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x24d1a0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x24d1a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24d1a4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x24d1a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24d1a8: 0x223c3  sra         $a0, $v0, 15
    ctx->pc = 0x24d1a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 15));
label_24d1ac:
    // 0x24d1ac: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x24d1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x24d1b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24d1b4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x24d1b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24d1b8: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x24d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x24d1bc: 0xfe370028  sd          $s7, 0x28($s1)
    ctx->pc = 0x24d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 23));
    // 0x24d1c0: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x24d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x24d1c4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x24D1C4u;
    {
        const bool branch_taken_0x24d1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1C4u;
        // 0x24d1c8: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1c4) {
            ctx->pc = 0x24D160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d160;
        }
    }
    ctx->pc = 0x24D1CCu;
    // 0x24d1cc: 0xc092eea  jal         func_24BBA8
    ctx->pc = 0x24D1CCu;
    SET_GPR_U32(ctx, 31, 0x24D1D4u);
    ctx->pc = 0x24D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1CCu;
    // 0x24d1d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BBA8u, 0x24D1CCu, 0x24D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1D4u;
label_24d1d4:
    // 0x24d1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d1d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d1dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d1e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d1e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d1e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24d1e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d1e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24d1e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24d1ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24d1ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d1f0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x24d1f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24d1f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24d1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x24D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1F8u;
        // 0x24d1fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D200u;
}
