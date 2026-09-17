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

// Function: sub_00336118
// Address: 0x336118 - 0x336184
void sub_00336118_0x336118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336118_0x336118");
#endif

    switch (ctx->pc) {
        case 0x336174u: goto label_336174;
        case 0x336180u: goto label_336180;
        default: break;
    }

    ctx->pc = 0x336118u;

    // 0x336118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33611c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33611cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x336120: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x336120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x336124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336128: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x336128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33612c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x336130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336138: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x336138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33613c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33613cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336140: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x336140u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336144: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x336144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x336148: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x336148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33614c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x33614cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x336150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x336150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336154: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x336154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x336158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33615c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33615cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336160: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x336160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336164: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x336164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x336168: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x336168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x33616c: 0xc040a78  jal         func_1029E0
    ctx->pc = 0x33616Cu;
    SET_GPR_U32(ctx, 31, 0x336174u);
    ctx->pc = 0x336170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33616Cu;
    // 0x336170: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E0u, 0x33616Cu, 0x336174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336174u;
label_336174:
    // 0x336174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336178: 0xc0cd830  jal         func_3360C0
    ctx->pc = 0x336178u;
    SET_GPR_U32(ctx, 31, 0x336180u);
    ctx->pc = 0x33617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336178u;
    // 0x33617c: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3360C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3360C0u, 0x336178u, 0x336180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336180u;
label_336180:
    // 0x336180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x336184u;
}
