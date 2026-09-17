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

// Function: sub_001FE3A0
// Address: 0x1fe3a0 - 0x1fe460
void sub_001FE3A0_0x1fe3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE3A0_0x1fe3a0");
#endif

    ctx->pc = 0x1fe3a0u;

    // 0x1fe3a0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fe3a4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fe3a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1fe3a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fe3ac: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1fe3b0: 0x28490000  slti        $t1, $v0, 0x0
    ctx->pc = 0x1fe3b0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fe3b4: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1fe3b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fe3b8: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1fe3b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1fe3bc: 0x28870000  slti        $a3, $a0, 0x0
    ctx->pc = 0x1fe3bcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fe3c0: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x1fe3c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fe3c4: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1fe3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1fe3c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1fe3ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3d0: 0x149280b  movn        $a1, $t2, $t1
    ctx->pc = 0x1fe3d0u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 10));
    // 0x1fe3d4: 0x107180b  movn        $v1, $t0, $a3
    ctx->pc = 0x1fe3d4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x1fe3d8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1fe3dc: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x1fe3dcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fe3e0: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1fe3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1fe3e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1fe3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1fe3e8: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x1fe3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1fe3ec: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1fe3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe3f0: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x1fe3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1fe3f4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1fe3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1fe3f8: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x1fe3f8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fe3fc: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x1fe3fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fe400: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x1fe404: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x1fe404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1fe408: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x1fe40c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1fe410: 0x127180b  movn        $v1, $t1, $a3
    ctx->pc = 0x1fe410u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x1fe414: 0x104280b  movn        $a1, $t0, $a0
    ctx->pc = 0x1fe414u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x1fe418: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE418u;
    {
        const bool branch_taken_0x1fe418 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE418u;
        // 0x1fe41c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe418) {
            ctx->pc = 0x1FE424u;
            goto label_1fe424;
        }
    }
    ctx->pc = 0x1FE420u;
    // 0x1fe420: 0x73823  negu        $a3, $a3
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_1fe424:
    // 0x1fe424: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE424u;
    {
        const bool branch_taken_0x1fe424 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FE428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE424u;
        // 0x1fe428: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe424) {
            ctx->pc = 0x1FE430u;
            goto label_1fe430;
        }
    }
    ctx->pc = 0x1FE42Cu;
    // 0x1fe42c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1fe430:
    // 0x1fe430: 0xe4382a  slt         $a3, $a3, $a0
    ctx->pc = 0x1fe430u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe434: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1fe434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1fe438: 0x52823  negu        $a1, $a1
    ctx->pc = 0x1fe438u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1fe43c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1fe43cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1fe440: 0xa7180a  movz        $v1, $a1, $a3
    ctx->pc = 0x1fe440u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1fe444: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1fe444u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fe448: 0x1812  mflo        $v1
    ctx->pc = 0x1fe448u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1fe44c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe450: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fe454: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE45Cu;
    // 0x1fe45c: 0x0  nop
    ctx->pc = 0x1fe45cu;
    // NOP
    ctx->pc = 0x1fe460u;
}
