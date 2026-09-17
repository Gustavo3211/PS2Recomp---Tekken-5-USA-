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

// Function: sub_0027F4E8
// Address: 0x27f4e8 - 0x27f5d8
void sub_0027F4E8_0x27f4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F4E8_0x27f4e8");
#endif

    switch (ctx->pc) {
        case 0x27f530u: goto label_27f530;
        case 0x27f540u: goto label_27f540;
        case 0x27f550u: goto label_27f550;
        case 0x27f560u: goto label_27f560;
        case 0x27f570u: goto label_27f570;
        case 0x27f58cu: goto label_27f58c;
        case 0x27f5acu: goto label_27f5ac;
        case 0x27f5b8u: goto label_27f5b8;
        default: break;
    }

    ctx->pc = 0x27f4e8u;

    // 0x27f4e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f4ec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x27f4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x27f4f0: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27f4f4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x27f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x27f4f8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x27f4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f4fc: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x27f4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x27f500: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x27f500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27f504: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x27f504u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27f508: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x27f508u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x27f50c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x27f50cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27f510: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27f510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f514: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x27f514u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x27f518: 0xc7948e64  lwc1        $f20, -0x719C($gp)
    ctx->pc = 0x27f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f520: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x27f520u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27f524: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x27f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x27f528: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x27F528u;
    SET_GPR_U32(ctx, 31, 0x27F530u);
    ctx->pc = 0x27F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F528u;
    // 0x27f52c: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x27F528u, 0x27F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F530u;
label_27f530:
    // 0x27f530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f534: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f538: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x27F538u;
    SET_GPR_U32(ctx, 31, 0x27F540u);
    ctx->pc = 0x27F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F538u;
    // 0x27f53c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x27F538u, 0x27F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F540u;
label_27f540:
    // 0x27f540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f548: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x27F548u;
    SET_GPR_U32(ctx, 31, 0x27F550u);
    ctx->pc = 0x27F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F548u;
    // 0x27f54c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x27F548u, 0x27F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F550u;
label_27f550:
    // 0x27f550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f554: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27f558: 0xc084a62  jal         func_212988
    ctx->pc = 0x27F558u;
    SET_GPR_U32(ctx, 31, 0x27F560u);
    ctx->pc = 0x27F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F558u;
    // 0x27f55c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x27F558u, 0x27F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F560u;
label_27f560:
    // 0x27f560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f568: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x27F568u;
    SET_GPR_U32(ctx, 31, 0x27F570u);
    ctx->pc = 0x27F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F568u;
    // 0x27f56c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x27F568u, 0x27F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F570u;
label_27f570:
    // 0x27f570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27f570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f574: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x27f574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27f578: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x27f578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x27f57c: 0x242139d0  addiu       $at, $at, 0x39D0
    ctx->pc = 0x27f57cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 14800));
    // 0x27f580: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x27f580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x27f584: 0xc0971b6  jal         func_25C6D8
    ctx->pc = 0x27F584u;
    SET_GPR_U32(ctx, 31, 0x27F58Cu);
    ctx->pc = 0x27F588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F584u;
    // 0x27f588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6D8u, 0x27F584u, 0x27F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F58Cu;
label_27f58c:
    // 0x27f58c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x27f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27f590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27f594: 0xc78c8e68  lwc1        $f12, -0x7198($gp)
    ctx->pc = 0x27f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f59c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27f5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5a4: 0xc097110  jal         func_25C440
    ctx->pc = 0x27F5A4u;
    SET_GPR_U32(ctx, 31, 0x27F5ACu);
    ctx->pc = 0x27F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5A4u;
    // 0x27f5a8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x27F5A4u, 0x27F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5ACu;
label_27f5ac:
    // 0x27f5ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5b0: 0xc097084  jal         func_25C210
    ctx->pc = 0x27F5B0u;
    SET_GPR_U32(ctx, 31, 0x27F5B8u);
    ctx->pc = 0x27F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5B0u;
    // 0x27f5b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x27F5B0u, 0x27F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5B8u;
label_27f5b8:
    // 0x27f5b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x27f5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f5bc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x27f5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27f5c0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x27f5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f5c4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x27f5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x27f5c8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x27f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f5cc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5D0u;
        // 0x27f5d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F5D8u;
}
