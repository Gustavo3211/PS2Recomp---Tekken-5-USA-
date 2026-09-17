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

// Function: sub_00360990
// Address: 0x360990 - 0x360a10
void sub_00360990_0x360990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360990_0x360990");
#endif

    switch (ctx->pc) {
        case 0x3609b8u: goto label_3609b8;
        case 0x3609d0u: goto label_3609d0;
        case 0x3609f8u: goto label_3609f8;
        default: break;
    }

    ctx->pc = 0x360990u;

    // 0x360990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360994: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x360994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x360998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36099c: 0x48603  sra         $s0, $a0, 24
    ctx->pc = 0x36099cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 24));
    // 0x3609a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3609a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3609a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3609a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609a8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3609A8u;
    {
        const bool branch_taken_0x3609a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3609ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3609A8u;
        // 0x3609ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609a8) {
            ctx->pc = 0x3609F8u;
            goto label_3609f8;
        }
    }
    ctx->pc = 0x3609B0u;
    // 0x3609b0: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x3609B0u;
    SET_GPR_U32(ctx, 31, 0x3609B8u);
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x3609B0u, 0x3609B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609B8u;
label_3609b8:
    // 0x3609b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3609B8u;
    {
        const bool branch_taken_0x3609b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3609b8) {
            ctx->pc = 0x3609BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3609B8u;
            // 0x3609bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3609C0u;
            goto label_3609c0;
        }
    }
    ctx->pc = 0x3609C0u;
label_3609c0:
    // 0x3609c0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x3609c0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3609c4: 0x1810  mfhi        $v1
    ctx->pc = 0x3609c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3609c8: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x3609C8u;
    SET_GPR_U32(ctx, 31, 0x3609D0u);
    ctx->pc = 0x3609CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609C8u;
    // 0x3609cc: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x3609C8u, 0x3609D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609D0u;
label_3609d0:
    // 0x3609d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3609d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3609d4: 0x111823  negu        $v1, $s1
    ctx->pc = 0x3609d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x3609d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3609d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3609dc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3609dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3609e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3609e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3609e4: 0x24846d18  addiu       $a0, $a0, 0x6D18
    ctx->pc = 0x3609e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27928));
    // 0x3609e8: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x3609e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x3609ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3609ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609f0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3609F0u;
    SET_GPR_U32(ctx, 31, 0x3609F8u);
    ctx->pc = 0x3609F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609F0u;
    // 0x3609f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3609F0u, 0x3609F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609F8u;
label_3609f8:
    // 0x3609f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3609f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3609fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360a08: 0x3e00008  jr          $ra
    ctx->pc = 0x360A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360A08u;
        // 0x360a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360A10u;
}
