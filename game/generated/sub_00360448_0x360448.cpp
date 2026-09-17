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

// Function: sub_00360448
// Address: 0x360448 - 0x360508
void sub_00360448_0x360448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360448_0x360448");
#endif

    switch (ctx->pc) {
        case 0x360478u: goto label_360478;
        case 0x3604a4u: goto label_3604a4;
        case 0x3604e8u: goto label_3604e8;
        default: break;
    }

    ctx->pc = 0x360448u;

    // 0x360448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36044c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36044cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x360450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x360450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360454: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x360454u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    // 0x360458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36045c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36045cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360460: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x360460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x360464: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x360464u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x360468: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x360468u;
    {
        const bool branch_taken_0x360468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360468u;
        // 0x36046c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360468) {
            ctx->pc = 0x3604E8u;
            goto label_3604e8;
        }
    }
    ctx->pc = 0x360470u;
    // 0x360470: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x360470u;
    SET_GPR_U32(ctx, 31, 0x360478u);
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x360470u, 0x360478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360478u;
label_360478:
    // 0x360478: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x360478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x36047c: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x36047cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x360480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x360480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x360484: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x360484u;
    {
        const bool branch_taken_0x360484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x360484) {
            ctx->pc = 0x360488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360484u;
            // 0x360488: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36048Cu;
            goto label_36048c;
        }
    }
    ctx->pc = 0x36048Cu;
label_36048c:
    // 0x36048c: 0x2010  mfhi        $a0
    ctx->pc = 0x36048cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x360490: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x360490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x360494: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x360494u;
    {
        const bool branch_taken_0x360494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x360498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360494u;
        // 0x360498: 0x48403  sra         $s0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360494) {
            ctx->pc = 0x3604C0u;
            goto label_3604c0;
        }
    }
    ctx->pc = 0x36049Cu;
    // 0x36049c: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x36049Cu;
    SET_GPR_U32(ctx, 31, 0x3604A4u);
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x36049Cu, 0x3604A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604A4u;
label_3604a4:
    // 0x3604a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3604a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3604a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3604a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3604ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3604ACu;
    {
        const bool branch_taken_0x3604ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3604B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604ACu;
        // 0x3604b0: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3604ac) {
            ctx->pc = 0x3604D8u;
            goto label_3604d8;
        }
    }
    ctx->pc = 0x3604B4u;
    // 0x3604b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3604B4u;
    {
        const bool branch_taken_0x3604b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3604B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604B4u;
        // 0x3604b8: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3604b4) {
            ctx->pc = 0x3604CCu;
            goto label_3604cc;
        }
    }
    ctx->pc = 0x3604BCu;
    // 0x3604bc: 0x0  nop
    ctx->pc = 0x3604bcu;
    // NOP
label_3604c0:
    // 0x3604c0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3604C0u;
    {
        const bool branch_taken_0x3604c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3604C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604C0u;
        // 0x3604c4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3604c0) {
            ctx->pc = 0x3604D8u;
            goto label_3604d8;
        }
    }
    ctx->pc = 0x3604C8u;
    // 0x3604c8: 0x101023  negu        $v0, $s0
    ctx->pc = 0x3604c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_3604cc:
    // 0x3604cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3604ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3604d0: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3604d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3604d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3604d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3604d8:
    // 0x3604d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3604d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3604dc: 0x24846cd0  addiu       $a0, $a0, 0x6CD0
    ctx->pc = 0x3604dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27856));
    // 0x3604e0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3604E0u;
    SET_GPR_U32(ctx, 31, 0x3604E8u);
    ctx->pc = 0x3604E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604E0u;
    // 0x3604e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3604E0u, 0x3604E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3604E8u;
label_3604e8:
    // 0x3604e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3604e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3604ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3604ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3604f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3604f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3604f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3604f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3604f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3604f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3604fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3604FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604FCu;
        // 0x360500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3604FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360504u;
    // 0x360504: 0x0  nop
    ctx->pc = 0x360504u;
    // NOP
    ctx->pc = 0x360508u;
}
