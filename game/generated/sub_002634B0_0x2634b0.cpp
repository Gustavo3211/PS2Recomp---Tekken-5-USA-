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

// Function: sub_002634B0
// Address: 0x2634b0 - 0x263558
void sub_002634B0_0x2634b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002634B0_0x2634b0");
#endif

    switch (ctx->pc) {
        case 0x2634f0u: goto label_2634f0;
        default: break;
    }

    ctx->pc = 0x2634b0u;

    // 0x2634b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2634b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2634b4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2634b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2634b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2634b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2634bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2634bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2634c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2634c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2634c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2634c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2634c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2634c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2634cc: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x2634ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2634d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2634d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2634d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2634d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2634d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2634d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2634dc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2634dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2634e0: 0x24c4dda0  addiu       $a0, $a2, -0x2260
    ctx->pc = 0x2634e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958496));
    // 0x2634e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2634e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2634e8: 0xc08daae  jal         func_236AB8
    ctx->pc = 0x2634E8u;
    SET_GPR_U32(ctx, 31, 0x2634F0u);
    ctx->pc = 0x2634ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2634E8u;
    // 0x2634ec: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AB8u, 0x2634E8u, 0x2634F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2634F0u;
label_2634f0:
    // 0x2634f0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2634f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2634f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2634f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2634f8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2634f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2634fc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2634fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x263500: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x263500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x263504: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x263504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x263508: 0x96230166  lhu         $v1, 0x166($s1)
    ctx->pc = 0x263508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 358)));
    // 0x26350c: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x26350cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x263510: 0x962202d0  lhu         $v0, 0x2D0($s1)
    ctx->pc = 0x263510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x263514: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x263514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x263518: 0x962302bc  lhu         $v1, 0x2BC($s1)
    ctx->pc = 0x263518u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x26351c: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x26351cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x263520: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x263520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x263524: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x263524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x263528: 0x962302be  lhu         $v1, 0x2BE($s1)
    ctx->pc = 0x263528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 702)));
    // 0x26352c: 0xa603001c  sh          $v1, 0x1C($s0)
    ctx->pc = 0x26352cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x263530: 0x922201ee  lbu         $v0, 0x1EE($s1)
    ctx->pc = 0x263530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 494)));
    // 0x263534: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x263534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x263538: 0x96230148  lhu         $v1, 0x148($s1)
    ctx->pc = 0x263538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x26353c: 0xa6030020  sh          $v1, 0x20($s0)
    ctx->pc = 0x26353cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x263540: 0x96220180  lhu         $v0, 0x180($s1)
    ctx->pc = 0x263540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x263544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x263544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x263548: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x263548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x26354c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26354cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263550: 0x3e00008  jr          $ra
    ctx->pc = 0x263550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263550u;
        // 0x263554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263558u;
}
