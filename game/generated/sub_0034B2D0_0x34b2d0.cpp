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

// Function: sub_0034B2D0
// Address: 0x34b2d0 - 0x34b4a0
void sub_0034B2D0_0x34b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B2D0_0x34b2d0");
#endif

    switch (ctx->pc) {
        case 0x34b354u: goto label_34b354;
        case 0x34b470u: goto label_34b470;
        default: break;
    }

    ctx->pc = 0x34b2d0u;

    // 0x34b2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34b2d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34b2d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34b2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34b2dc: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x34b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x34b2e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34b2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34b2e4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x34b2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x34b2e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34b2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34b2ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x34b2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34b2f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34b2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x34b2fc: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x34b2fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b300: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x34b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x34b304: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x34b304u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b308: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x34b30c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x34b30cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b310: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34b314: 0xf28023  subu        $s0, $a3, $s2
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x34b318: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34b31c: 0x263103c0  addiu       $s1, $s1, 0x3C0
    ctx->pc = 0x34b31cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x34b320: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x34b324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b328: 0x314a0004  andi        $t2, $t2, 0x4
    ctx->pc = 0x34b328u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4);
    // 0x34b32c: 0x8c750014  lw          $s5, 0x14($v1)
    ctx->pc = 0x34b32cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x34b330: 0x95620016  lhu         $v0, 0x16($t3)
    ctx->pc = 0x34b330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x34b334: 0x2b03821  addu        $a3, $s5, $s0
    ctx->pc = 0x34b334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x34b338: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x34b338u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x34b33c: 0x8d74000c  lw          $s4, 0xC($t3)
    ctx->pc = 0x34b33cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x34b340: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x34b344: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x34b344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x34b348: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x34b348u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34b34c: 0xc0ce218  jal         func_338860
    ctx->pc = 0x34B34Cu;
    SET_GPR_U32(ctx, 31, 0x34B354u);
    ctx->pc = 0x34B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B34Cu;
    // 0x34b350: 0xafaa0000  sw          $t2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x34B34Cu, 0x34B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B354u;
label_34b354:
    // 0x34b354: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34b354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34b358: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x34b358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x34b35c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x34b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x34b360: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x34b360u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x1000d020
    // 0x34b364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34b368: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x34b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x34b36c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x34b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x34b370: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x34b370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x34b374: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x34b374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34b378: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34b378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34b37c: 0x32423fff  andi        $v0, $s2, 0x3FFF
    ctx->pc = 0x34b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16383);
    // 0x34b380: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x34b380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x34b384: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x34b384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x34b388: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x34b388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
    // 0x34b38c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x34b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b390: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x34b390u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 2)); // MMIO: 0x1000d080
    // 0x34b394: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34b398: 0x3484e010  ori         $a0, $a0, 0xE010
    ctx->pc = 0x34b398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57360);
    // 0x34b39c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x34b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b3a0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x34b3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000D080u)); // MMIO: 0x1000d080
    // 0x34b3a4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x34b3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x34b3a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x34b3a8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x34b3ac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x34b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x34b3b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34b3b0u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x34b3b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x34b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x34b3b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x34b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x34b3bc: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x34b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x34b3c0: 0x2729023  subu        $s2, $s3, $s2
    ctx->pc = 0x34b3c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x34b3c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b3c8: 0x26820048  addiu       $v0, $s4, 0x48
    ctx->pc = 0x34b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    // 0x34b3cc: 0x26880040  addiu       $t0, $s4, 0x40
    ctx->pc = 0x34b3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x34b3d0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34b3d4: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x34b3d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x34b3d8: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x34b3d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x34b3dc: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x34b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x34b3e0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x34b3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b3e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34b3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b3e8: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x34b3e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b3f0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x34B3F0u;
    {
        const bool branch_taken_0x34b3f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3F0u;
        // 0x34b3f4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3f0) {
            ctx->pc = 0x34B408u;
            goto label_34b408;
        }
    }
    ctx->pc = 0x34B3F8u;
    // 0x34b3f8: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34B3F8u;
    {
        const bool branch_taken_0x34b3f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x34B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3F8u;
        // 0x34b3fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b3f8) {
            ctx->pc = 0x34B440u;
            goto label_34b440;
        }
    }
    ctx->pc = 0x34B400u;
    // 0x34b400: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34B400u;
    {
        const bool branch_taken_0x34b400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B400u;
        // 0x34b404: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b400) {
            ctx->pc = 0x34B478u;
            goto label_34b478;
        }
    }
    ctx->pc = 0x34B408u;
label_34b408:
    // 0x34b408: 0xdd080000  ld          $t0, 0x0($t0)
    ctx->pc = 0x34b408u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34b40c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34b40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b410: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34b410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b414: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34b414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b418: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34b418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b41c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34b41cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b420: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34b420u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b424: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34b424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b428: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34b428u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34b42c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34b42cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34b430: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34b430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34b434: 0x80c81e2  j           func_320788
    ctx->pc = 0x34B434u;
    ctx->pc = 0x34B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B434u;
    // 0x34b438: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    sub_00320788_0x320788(rdram, ctx, runtime); return;
    ctx->pc = 0x34B43Cu;
    // 0x34b43c: 0x0  nop
    ctx->pc = 0x34b43cu;
    // NOP
label_34b440:
    // 0x34b440: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x34b440u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b444: 0x26820058  addiu       $v0, $s4, 0x58
    ctx->pc = 0x34b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
    // 0x34b448: 0x26830050  addiu       $v1, $s4, 0x50
    ctx->pc = 0x34b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x34b44c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34b450: 0x48180b  movn        $v1, $v0, $t0
    ctx->pc = 0x34b450u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x34b454: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x34b454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b458: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x34b458u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b45c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x34b45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b460: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x34b460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b464: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x34b464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b468: 0xc0c81e2  jal         func_320788
    ctx->pc = 0x34B468u;
    SET_GPR_U32(ctx, 31, 0x34B470u);
    ctx->pc = 0x34B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B468u;
    // 0x34b46c: 0x24841180  addiu       $a0, $a0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320788u, 0x34B468u, 0x34B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B470u;
label_34b470:
    // 0x34b470: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34b470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b474: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34b474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34b478:
    // 0x34b478: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34b478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b47c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34b47cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b480: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34b480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b484: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34b484u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b488: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34b488u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b48c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34b48cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34b490: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34b490u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34b494: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34b494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34b498: 0x3e00008  jr          $ra
    ctx->pc = 0x34B498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B498u;
        // 0x34b49c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B4A0u;
}
