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

// Function: sub_00360898
// Address: 0x360898 - 0x360950
void sub_00360898_0x360898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360898_0x360898");
#endif

    switch (ctx->pc) {
        case 0x3608c8u: goto label_3608c8;
        case 0x3608ecu: goto label_3608ec;
        case 0x360930u: goto label_360930;
        default: break;
    }

    ctx->pc = 0x360898u;

    // 0x360898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36089c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x36089cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3608a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3608a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3608a4: 0x48603  sra         $s0, $a0, 24
    ctx->pc = 0x3608a4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 24));
    // 0x3608a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3608a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3608ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3608acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3608b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3608b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3608b4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x3608b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3608b8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3608B8u;
    {
        const bool branch_taken_0x3608b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3608BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608B8u;
        // 0x3608bc: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608b8) {
            ctx->pc = 0x360930u;
            goto label_360930;
        }
    }
    ctx->pc = 0x3608C0u;
    // 0x3608c0: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x3608C0u;
    SET_GPR_U32(ctx, 31, 0x3608C8u);
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x3608C0u, 0x3608C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608C8u;
label_3608c8:
    // 0x3608c8: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x3608c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x3608cc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x3608ccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3608d0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3608D0u;
    {
        const bool branch_taken_0x3608d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3608d0) {
            ctx->pc = 0x3608D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3608D0u;
            // 0x3608d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3608D8u;
            goto label_3608d8;
        }
    }
    ctx->pc = 0x3608D8u;
label_3608d8:
    // 0x3608d8: 0x2010  mfhi        $a0
    ctx->pc = 0x3608d8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3608dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3608DCu;
    {
        const bool branch_taken_0x3608dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3608E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608DCu;
        // 0x3608e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608dc) {
            ctx->pc = 0x360908u;
            goto label_360908;
        }
    }
    ctx->pc = 0x3608E4u;
    // 0x3608e4: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x3608E4u;
    SET_GPR_U32(ctx, 31, 0x3608ECu);
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x3608E4u, 0x3608ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3608ECu;
label_3608ec:
    // 0x3608ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3608ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3608f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3608f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3608f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3608F4u;
    {
        const bool branch_taken_0x3608f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3608f4) {
            ctx->pc = 0x3608F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3608F4u;
            // 0x3608f8: 0x118823  negu        $s1, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36091Cu;
            goto label_36091c;
        }
    }
    ctx->pc = 0x3608FCu;
    // 0x3608fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3608FCu;
    {
        const bool branch_taken_0x3608fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3608FCu;
        // 0x360900: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3608fc) {
            ctx->pc = 0x360920u;
            goto label_360920;
        }
    }
    ctx->pc = 0x360904u;
    // 0x360904: 0x0  nop
    ctx->pc = 0x360904u;
    // NOP
label_360908:
    // 0x360908: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360908u;
    {
        const bool branch_taken_0x360908 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360908u;
        // 0x36090c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360908) {
            ctx->pc = 0x360920u;
            goto label_360920;
        }
    }
    ctx->pc = 0x360910u;
    // 0x360910: 0x111023  negu        $v0, $s1
    ctx->pc = 0x360910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x360914: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x360914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360918: 0x28c03  sra         $s1, $v0, 16
    ctx->pc = 0x360918u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
label_36091c:
    // 0x36091c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36091cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_360920:
    // 0x360920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x360920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360924: 0x24846cf8  addiu       $a0, $a0, 0x6CF8
    ctx->pc = 0x360924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27896));
    // 0x360928: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x360928u;
    SET_GPR_U32(ctx, 31, 0x360930u);
    ctx->pc = 0x36092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360928u;
    // 0x36092c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x360928u, 0x360930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360930u;
label_360930:
    // 0x360930: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x360930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36093c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36093cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360940: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x360940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360944: 0x3e00008  jr          $ra
    ctx->pc = 0x360944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360944u;
        // 0x360948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36094Cu;
    // 0x36094c: 0x0  nop
    ctx->pc = 0x36094cu;
    // NOP
    ctx->pc = 0x360950u;
}
