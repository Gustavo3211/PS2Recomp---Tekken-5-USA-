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

// Function: sub_001217B0
// Address: 0x1217b0 - 0x121880
void sub_001217B0_0x1217b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001217B0_0x1217b0");
#endif

    switch (ctx->pc) {
        case 0x12180cu: goto label_12180c;
        case 0x12181cu: goto label_12181c;
        case 0x121834u: goto label_121834;
        case 0x121848u: goto label_121848;
        case 0x121864u: goto label_121864;
        case 0x121874u: goto label_121874;
        default: break;
    }

    ctx->pc = 0x1217b0u;

    // 0x1217b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1217b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1217b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1217b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1217b8: 0x212fa  dsrl        $v0, $v0, 11
    ctx->pc = 0x1217b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 11);
    // 0x1217bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1217bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1217c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1217c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217c4: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1217c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1217c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1217cc: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x1217ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x1217d0: 0x31aba  dsrl        $v1, $v1, 10
    ctx->pc = 0x1217d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 10);
    // 0x1217d4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1217d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1217d8: 0x322207ff  andi        $v0, $s1, 0x7FF
    ctx->pc = 0x1217d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2047);
    // 0x1217dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1217dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1217e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1217e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1217e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1217E4u;
    {
        const bool branch_taken_0x1217e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217E4u;
        // 0x1217e8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217e4) {
            ctx->pc = 0x1217F8u;
            goto label_1217f8;
        }
    }
    ctx->pc = 0x1217ECu;
    // 0x1217ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1217ECu;
    {
        const bool branch_taken_0x1217ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217ECu;
        // 0x1217f0: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217ec) {
            ctx->pc = 0x1217F8u;
            goto label_1217f8;
        }
    }
    ctx->pc = 0x1217F4u;
    // 0x1217f4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1217f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1217f8:
    // 0x1217f8: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x1217f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1217fc: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1217fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x121800: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x121800u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x121804: 0xc048dc6  jal         func_123718
    ctx->pc = 0x121804u;
    SET_GPR_U32(ctx, 31, 0x12180Cu);
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x121804u, 0x12180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12180Cu;
label_12180c:
    // 0x12180c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12180cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121814: 0xc048cc0  jal         func_123300
    ctx->pc = 0x121814u;
    SET_GPR_U32(ctx, 31, 0x12181Cu);
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x121814u, 0x12181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12181Cu;
label_12181c:
    // 0x12181c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12181cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121820: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x121820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x121824: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x121824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x121828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12182c: 0xc048cc0  jal         func_123300
    ctx->pc = 0x12182Cu;
    SET_GPR_U32(ctx, 31, 0x121834u);
    ctx->pc = 0x121830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12182Cu;
    // 0x121830: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123300u, 0x12182Cu, 0x121834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121834u;
label_121834:
    // 0x121834: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x121834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x121838: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x121838u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12183c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12183cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121840: 0xc048dc6  jal         func_123718
    ctx->pc = 0x121840u;
    SET_GPR_U32(ctx, 31, 0x121848u);
    ctx->pc = 0x121844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121840u;
    // 0x121844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123718u, 0x121840u, 0x121848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121848u;
label_121848:
    // 0x121848: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x121848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x12184c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12184cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x121850: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121850u;
    {
        const bool branch_taken_0x121850 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x121850) {
            ctx->pc = 0x121864u;
            goto label_121864;
        }
    }
    ctx->pc = 0x121858u;
    // 0x121858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12185c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12185Cu;
    SET_GPR_U32(ctx, 31, 0x121864u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12185Cu, 0x121864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121864u;
label_121864:
    // 0x121864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12186c: 0xc048c90  jal         func_123240
    ctx->pc = 0x12186Cu;
    SET_GPR_U32(ctx, 31, 0x121874u);
    ctx->pc = 0x123240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123240u, 0x12186Cu, 0x121874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121874u;
label_121874:
    // 0x121874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121878: 0xc048e00  jal         func_123800
    ctx->pc = 0x121878u;
    SET_GPR_U32(ctx, 31, 0x121880u);
    ctx->pc = 0x123800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123800u, 0x121878u, 0x121880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121880u;
}
