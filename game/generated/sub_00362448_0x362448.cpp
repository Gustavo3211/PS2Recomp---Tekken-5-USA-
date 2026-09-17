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

// Function: sub_00362448
// Address: 0x362448 - 0x3625c8
void sub_00362448_0x362448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362448_0x362448");
#endif

    switch (ctx->pc) {
        case 0x362474u: goto label_362474;
        case 0x3624b8u: goto label_3624b8;
        case 0x3624c0u: goto label_3624c0;
        case 0x3624e0u: goto label_3624e0;
        case 0x362510u: goto label_362510;
        case 0x362520u: goto label_362520;
        case 0x362574u: goto label_362574;
        case 0x36257cu: goto label_36257c;
        case 0x3625a0u: goto label_3625a0;
        case 0x3625b8u: goto label_3625b8;
        default: break;
    }

    ctx->pc = 0x362448u;

    // 0x362448: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x362448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36244c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x362454: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x362454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x362458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x362458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36245c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x36245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362460: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362460u;
    {
        const bool branch_taken_0x362460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362460u;
        // 0x362464: 0x28660018  slti        $a2, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362460) {
            ctx->pc = 0x362480u;
            goto label_362480;
        }
    }
    ctx->pc = 0x362468u;
    // 0x362468: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36246c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36246Cu;
    SET_GPR_U32(ctx, 31, 0x362474u);
    ctx->pc = 0x362470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36246Cu;
    // 0x362470: 0x248472f8  addiu       $a0, $a0, 0x72F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36246Cu, 0x362474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362474u;
label_362474:
    // 0x362474: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x362474u;
    {
        const bool branch_taken_0x362474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362474u;
        // 0x362478: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362474) {
            ctx->pc = 0x3624D0u;
            goto label_3624d0;
        }
    }
    ctx->pc = 0x36247Cu;
    // 0x36247c: 0x0  nop
    ctx->pc = 0x36247cu;
    // NOP
label_362480:
    // 0x362480: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x362480u;
    {
        const bool branch_taken_0x362480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x362480) {
            ctx->pc = 0x362484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362480u;
            // 0x362484: 0x2463ffe8  addiu       $v1, $v1, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3624A0u;
            goto label_3624a0;
        }
    }
    ctx->pc = 0x362488u;
    // 0x362488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36248c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36248cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x362490: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x362490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x362494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x362494u;
    {
        const bool branch_taken_0x362494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362494u;
        // 0x362498: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362494) {
            ctx->pc = 0x3624B0u;
            goto label_3624b0;
        }
    }
    ctx->pc = 0x36249Cu;
    // 0x36249c: 0x0  nop
    ctx->pc = 0x36249cu;
    // NOP
label_3624a0:
    // 0x3624a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3624a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3624a4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3624a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3624a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3624a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3624ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3624acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3624b0:
    // 0x3624b0: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x3624B0u;
    SET_GPR_U32(ctx, 31, 0x3624B8u);
    ctx->pc = 0x3624B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3624B0u;
    // 0x3624b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x3624B0u, 0x3624B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3624B8u;
label_3624b8:
    // 0x3624b8: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x3624B8u;
    SET_GPR_U32(ctx, 31, 0x3624C0u);
    ctx->pc = 0x3624BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3624B8u;
    // 0x3624bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x3624B8u, 0x3624C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3624C0u;
label_3624c0:
    // 0x3624c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3624c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3624c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3624c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3624c8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3624c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x3624cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3624ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3624d0:
    // 0x3624d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3624d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3624d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3624D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3624D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624D4u;
        // 0x3624d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3624D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3624DCu;
    // 0x3624dc: 0x0  nop
    ctx->pc = 0x3624dcu;
    // NOP
label_3624e0:
    // 0x3624e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3624e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3624e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3624e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3624e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3624e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3624ec: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x3624ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3624f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3624f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3624f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3624f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3624f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3624f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3624fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3624FCu;
    {
        const bool branch_taken_0x3624fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624FCu;
        // 0x362500: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3624fc) {
            ctx->pc = 0x362518u;
            goto label_362518;
        }
    }
    ctx->pc = 0x362504u;
    // 0x362504: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362508: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362508u;
    SET_GPR_U32(ctx, 31, 0x362510u);
    ctx->pc = 0x36250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362508u;
    // 0x36250c: 0x24847338  addiu       $a0, $a0, 0x7338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362508u, 0x362510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362510u;
label_362510:
    // 0x362510: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x362510u;
    {
        const bool branch_taken_0x362510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362510u;
        // 0x362514: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362510) {
            ctx->pc = 0x362588u;
            goto label_362588;
        }
    }
    ctx->pc = 0x362518u;
label_362518:
    // 0x362518: 0xc0d8aba  jal         func_362AE8
    ctx->pc = 0x362518u;
    SET_GPR_U32(ctx, 31, 0x362520u);
    ctx->pc = 0x362AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362AE8u, 0x362518u, 0x362520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362520u;
label_362520:
    // 0x362520: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x362520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362524: 0xc7819698  lwc1        $f1, -0x6968($gp)
    ctx->pc = 0x362524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362528: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x362528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36252c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x36252cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x362530: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x362530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x362534: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x362534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x362538: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x362538u;
    {
        const bool branch_taken_0x362538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362538u;
        // 0x36253c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362538) {
            ctx->pc = 0x362550u;
            goto label_362550;
        }
    }
    ctx->pc = 0x362540u;
    // 0x362540: 0xc780969c  lwc1        $f0, -0x6964($gp)
    ctx->pc = 0x362540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x362544u;
    {
        const bool branch_taken_0x362544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362544u;
        // 0x362548: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362544) {
            ctx->pc = 0x36255Cu;
            goto label_36255c;
        }
    }
    ctx->pc = 0x36254Cu;
    // 0x36254c: 0x0  nop
    ctx->pc = 0x36254cu;
    // NOP
label_362550:
    // 0x362550: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x362550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x362554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x362554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x362558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_36255c:
    // 0x36255c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36255cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x362560: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x362560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x362564: 0xa3b00004  sb          $s0, 0x4($sp)
    ctx->pc = 0x362564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 16));
    // 0x362568: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x362568u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x36256c: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x36256Cu;
    SET_GPR_U32(ctx, 31, 0x362574u);
    ctx->pc = 0x362570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36256Cu;
    // 0x362570: 0xa7a20006  sh          $v0, 0x6($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x36256Cu, 0x362574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362574u;
label_362574:
    // 0x362574: 0xc0d6df0  jal         func_35B7C0
    ctx->pc = 0x362574u;
    SET_GPR_U32(ctx, 31, 0x36257Cu);
    ctx->pc = 0x362578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362574u;
    // 0x362578: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B7C0u, 0x362574u, 0x36257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36257Cu;
label_36257c:
    // 0x36257c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x362580: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x362580u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x362584: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x362584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_362588:
    // 0x362588: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x362588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36258c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36258cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362590: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x362590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x362594: 0x3e00008  jr          $ra
    ctx->pc = 0x362594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362594u;
        // 0x362598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36259Cu;
    // 0x36259c: 0x0  nop
    ctx->pc = 0x36259cu;
    // NOP
label_3625a0:
    // 0x3625a0: 0x8f84c7f8  lw          $a0, -0x3808($gp)
    ctx->pc = 0x3625a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952952)));
    // 0x3625a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3625a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3625a8: 0x8f86c7f4  lw          $a2, -0x380C($gp)
    ctx->pc = 0x3625a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952948)));
    // 0x3625ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3625acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3625b0: 0xc0d6d30  jal         func_35B4C0
    ctx->pc = 0x3625B0u;
    SET_GPR_U32(ctx, 31, 0x3625B8u);
    ctx->pc = 0x3625B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625B0u;
    // 0x3625b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B4C0u, 0x3625B0u, 0x3625B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625B8u;
label_3625b8:
    // 0x3625b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3625b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3625bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3625c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3625C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3625C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3625C0u;
        // 0x3625c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3625C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3625C8u;
}
