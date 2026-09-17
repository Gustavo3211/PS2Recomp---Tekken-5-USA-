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

// Function: sub_002486C8
// Address: 0x2486c8 - 0x248740
void sub_002486C8_0x2486c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002486C8_0x2486c8");
#endif

    switch (ctx->pc) {
        case 0x2486f4u: goto label_2486f4;
        case 0x248700u: goto label_248700;
        case 0x248710u: goto label_248710;
        default: break;
    }

    ctx->pc = 0x2486c8u;

    // 0x2486c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2486c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2486cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2486ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2486d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2486d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2486d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2486d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2486d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2486dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2486dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2486e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2486e4: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2486e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2486e8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2486e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2486ec: 0xc09211c  jal         func_248470
    ctx->pc = 0x2486ECu;
    SET_GPR_U32(ctx, 31, 0x2486F4u);
    ctx->pc = 0x2486F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486ECu;
    // 0x2486f0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x248470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248470u, 0x2486ECu, 0x2486F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486F4u;
label_2486f4:
    // 0x2486f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2486f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486f8: 0xc092198  jal         func_248660
    ctx->pc = 0x2486F8u;
    SET_GPR_U32(ctx, 31, 0x248700u);
    ctx->pc = 0x2486FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486F8u;
    // 0x2486fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248660u, 0x2486F8u, 0x248700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248700u;
label_248700:
    // 0x248700: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x248700u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x248704: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x248704u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x248708: 0xc092138  jal         func_2484E0
    ctx->pc = 0x248708u;
    SET_GPR_U32(ctx, 31, 0x248710u);
    ctx->pc = 0x24870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248708u;
    // 0x24870c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2484E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2484E0u, 0x248708u, 0x248710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248710u;
label_248710:
    // 0x248710: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x248710u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x248714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x248714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x248718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24871c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24871cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248720: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x248720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248728: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x248728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24872c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x24872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x248730: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x248730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x248734: 0x80d601e  j           func_358078
    ctx->pc = 0x248734u;
    ctx->pc = 0x248738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248734u;
    // 0x248738: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358078u;
    sub_00358078_0x358078(rdram, ctx, runtime); return;
    ctx->pc = 0x24873Cu;
    // 0x24873c: 0x0  nop
    ctx->pc = 0x24873cu;
    // NOP
    ctx->pc = 0x248740u;
}
