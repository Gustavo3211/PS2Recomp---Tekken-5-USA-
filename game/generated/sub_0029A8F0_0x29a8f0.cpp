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

// Function: sub_0029A8F0
// Address: 0x29a8f0 - 0x29aa78
void sub_0029A8F0_0x29a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A8F0_0x29a8f0");
#endif

    switch (ctx->pc) {
        case 0x29a99cu: goto label_29a99c;
        case 0x29a9b0u: goto label_29a9b0;
        case 0x29a9c8u: goto label_29a9c8;
        case 0x29a9d8u: goto label_29a9d8;
        case 0x29aa00u: goto label_29aa00;
        case 0x29aa14u: goto label_29aa14;
        case 0x29aa34u: goto label_29aa34;
        default: break;
    }

    ctx->pc = 0x29a8f0u;

    // 0x29a8f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29a8f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29a8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a8f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29a8fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29a8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29a904: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29a904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a908: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29a90c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x29a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29a910: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29a914: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x29a914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a918: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29a91c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a920: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x29a920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x29a924: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x29a924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29a928: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29a928u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29a92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a930: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29a930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29a938: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29a93c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x29a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x29a940: 0x8e640150  lw          $a0, 0x150($s3)
    ctx->pc = 0x29a940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x29a944: 0x8e630154  lw          $v1, 0x154($s3)
    ctx->pc = 0x29a944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x29a948: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a94c: 0x8c54ffec  lw          $s4, -0x14($v0)
    ctx->pc = 0x29a94cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967276)));
    // 0x29a950: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x29a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x29a954: 0x247700b8  addiu       $s7, $v1, 0xB8
    ctx->pc = 0x29a954u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x29a958: 0x247e0068  addiu       $fp, $v1, 0x68
    ctx->pc = 0x29a958u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x29a95c: 0x24750098  addiu       $s5, $v1, 0x98
    ctx->pc = 0x29a95cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x29a960: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x29A960u;
    {
        const bool branch_taken_0x29a960 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A960u;
        // 0x29a964: 0x247600a8  addiu       $s6, $v1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a960) {
            ctx->pc = 0x29A97Cu;
            goto label_29a97c;
        }
    }
    ctx->pc = 0x29A968u;
    // 0x29a968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29a96c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29a96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a970: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x29a970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a974: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29A974u;
    {
        const bool branch_taken_0x29a974 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A974u;
        // 0x29a978: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a974) {
            ctx->pc = 0x29A984u;
            goto label_29a984;
        }
    }
    ctx->pc = 0x29A97Cu;
label_29a97c:
    // 0x29a97c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x29a97cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x29a980: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_29a984:
    // 0x29a984: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29a988: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x29a988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29a98c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29a98cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29a990: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29a990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a994: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A994u;
    SET_GPR_U32(ctx, 31, 0x29A99Cu);
    ctx->pc = 0x29A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A994u;
    // 0x29a998: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A994u, 0x29A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A99Cu;
label_29a99c:
    // 0x29a99c: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x29a9a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a9a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29a9a8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A9A8u;
    SET_GPR_U32(ctx, 31, 0x29A9B0u);
    ctx->pc = 0x29A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9A8u;
    // 0x29a9ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A9A8u, 0x29A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9B0u;
label_29a9b0:
    // 0x29a9b0: 0x2171021  addu        $v0, $s0, $s7
    ctx->pc = 0x29a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x29a9b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a9b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29a9bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29a9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29a9c0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A9C0u;
    SET_GPR_U32(ctx, 31, 0x29A9C8u);
    ctx->pc = 0x29A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9C0u;
    // 0x29a9c4: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A9C0u, 0x29A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9C8u;
label_29a9c8:
    // 0x29a9c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a9cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29a9d0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29A9D0u;
    SET_GPR_U32(ctx, 31, 0x29A9D8u);
    ctx->pc = 0x29A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9D0u;
    // 0x29a9d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29A9D0u, 0x29A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9D8u;
label_29a9d8:
    // 0x29a9d8: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x29a9dc: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x29a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29a9e0: 0x8e620154  lw          $v0, 0x154($s3)
    ctx->pc = 0x29a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 340)));
    // 0x29a9e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29a9e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a9ec: 0x1a800014  blez        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x29A9ECu;
    {
        const bool branch_taken_0x29a9ec = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x29A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A9ECu;
        // 0x29a9f0: 0x24520028  addiu       $s2, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9ec) {
            ctx->pc = 0x29AA40u;
            goto label_29aa40;
        }
    }
    ctx->pc = 0x29A9F4u;
    // 0x29a9f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29a9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9f8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x29a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29a9fc: 0x0  nop
    ctx->pc = 0x29a9fcu;
    // NOP
label_29aa00:
    // 0x29aa00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29aa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29aa04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x29aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x29aa08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29aa08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29aa0c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29AA0Cu;
    SET_GPR_U32(ctx, 31, 0x29AA14u);
    ctx->pc = 0x29AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA0Cu;
    // 0x29aa10: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29AA0Cu, 0x29AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA14u;
label_29aa14:
    // 0x29aa14: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x29aa18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29aa1c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x29aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29aa20: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x29aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x29aa24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29aa24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29aa28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29aa2c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x29AA2Cu;
    SET_GPR_U32(ctx, 31, 0x29AA34u);
    ctx->pc = 0x29AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA2Cu;
    // 0x29aa30: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x29AA2Cu, 0x29AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA34u;
label_29aa34:
    // 0x29aa34: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x29aa34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29aa38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x29AA38u;
    {
        const bool branch_taken_0x29aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA38u;
        // 0x29aa3c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa38) {
            ctx->pc = 0x29AA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29aa00;
        }
    }
    ctx->pc = 0x29AA40u;
label_29aa40:
    // 0x29aa40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29aa40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29aa44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29aa44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29aa48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29aa48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29aa4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29aa4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29aa50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29aa50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29aa54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29aa54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29aa58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29aa58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29aa5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29aa5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29aa60: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x29aa60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29aa64: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x29aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x29aa68: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x29aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29aa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x29AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA6Cu;
        // 0x29aa70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AA74u;
    // 0x29aa74: 0x0  nop
    ctx->pc = 0x29aa74u;
    // NOP
    ctx->pc = 0x29aa78u;
}
