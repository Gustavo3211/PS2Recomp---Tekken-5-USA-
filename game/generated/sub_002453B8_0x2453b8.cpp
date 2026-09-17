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

// Function: sub_002453B8
// Address: 0x2453b8 - 0x245630
void sub_002453B8_0x2453b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002453B8_0x2453b8");
#endif

    switch (ctx->pc) {
        case 0x2453e4u: goto label_2453e4;
        case 0x2453ecu: goto label_2453ec;
        case 0x24541cu: goto label_24541c;
        case 0x245438u: goto label_245438;
        case 0x24546cu: goto label_24546c;
        case 0x2454dcu: goto label_2454dc;
        case 0x245508u: goto label_245508;
        case 0x24553cu: goto label_24553c;
        case 0x245560u: goto label_245560;
        case 0x245584u: goto label_245584;
        case 0x2455a8u: goto label_2455a8;
        case 0x2455ccu: goto label_2455cc;
        case 0x2455dcu: goto label_2455dc;
        case 0x245604u: goto label_245604;
        case 0x24560cu: goto label_24560c;
        case 0x245614u: goto label_245614;
        default: break;
    }

    ctx->pc = 0x2453b8u;

    // 0x2453b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2453b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2453bc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2453bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2453c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2453c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2453c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2453c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2453c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2453cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2453ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2453d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2453d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2453d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2453d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2453dc: 0xc04a151  jal         func_128544
    ctx->pc = 0x2453DCu;
    SET_GPR_U32(ctx, 31, 0x2453E4u);
    ctx->pc = 0x2453E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453DCu;
    // 0x2453e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2453DCu, 0x2453E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453E4u;
label_2453e4:
    // 0x2453e4: 0xc090344  jal         func_240D10
    ctx->pc = 0x2453E4u;
    SET_GPR_U32(ctx, 31, 0x2453ECu);
    ctx->pc = 0x240D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240D10u, 0x2453E4u, 0x2453ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453ECu;
label_2453ec:
    // 0x2453ec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2453ECu;
    {
        const bool branch_taken_0x2453ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453ECu;
        // 0x2453f0: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453ec) {
            ctx->pc = 0x245400u;
            goto label_245400;
        }
    }
    ctx->pc = 0x2453F4u;
    // 0x2453f4: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2453F4u;
    {
        const bool branch_taken_0x2453f4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2453F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453F4u;
        // 0x2453f8: 0x3c120016  lui         $s2, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453f4) {
            ctx->pc = 0x245408u;
            goto label_245408;
        }
    }
    ctx->pc = 0x2453FCu;
    // 0x2453fc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x2453fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_245400:
    // 0x245400: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x245400u;
    {
        const bool branch_taken_0x245400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245400u;
        // 0x245404: 0xac406690  sw          $zero, 0x6690($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 26256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245400) {
            ctx->pc = 0x245614u;
            goto label_245614;
        }
    }
    ctx->pc = 0x245408u;
label_245408:
    // 0x245408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24540c: 0x26506690  addiu       $s0, $s2, 0x6690
    ctx->pc = 0x24540cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 26256));
    // 0x245410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x245410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245414: 0xc090d5e  jal         func_243578
    ctx->pc = 0x245414u;
    SET_GPR_U32(ctx, 31, 0x24541Cu);
    ctx->pc = 0x245418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245414u;
    // 0x245418: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x245414u, 0x24541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24541Cu;
label_24541c:
    // 0x24541c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245420: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x245420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245424: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245428: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x245428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24542c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245430: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x245430u;
    {
        const bool branch_taken_0x245430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245430u;
        // 0x245434: 0x8ce50008  lw          $a1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245430) {
            ctx->pc = 0x24546Cu;
            goto label_24546c;
        }
    }
    ctx->pc = 0x245438u;
label_245438:
    // 0x245438: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x245438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x24543c: 0x26446690  addiu       $a0, $s2, 0x6690
    ctx->pc = 0x24543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26256));
    // 0x245440: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x245440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x245444: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x245444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x245448: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x245448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24544c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245458: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x245458u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x24545c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x245460: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x245460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x245464: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x245464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x245468: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x245468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_24546c:
    // 0x24546c: 0x105102b  sltu        $v0, $t0, $a1
    ctx->pc = 0x24546cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x245470: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x245470u;
    {
        const bool branch_taken_0x245470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245470u;
        // 0x245474: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245470) {
            ctx->pc = 0x2454BCu;
            goto label_2454bc;
        }
    }
    ctx->pc = 0x245478u;
    // 0x245478: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x245478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x24547c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245480: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x245480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x245484: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x245484u;
    {
        const bool branch_taken_0x245484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x245488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245484u;
        // 0x245488: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245484) {
            ctx->pc = 0x2454A0u;
            goto label_2454a0;
        }
    }
    ctx->pc = 0x24548Cu;
    // 0x24548c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24548Cu;
    {
        const bool branch_taken_0x24548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x245490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24548Cu;
        // 0x245490: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24548c) {
            ctx->pc = 0x2454A4u;
            goto label_2454a4;
        }
    }
    ctx->pc = 0x245494u;
    // 0x245494: 0x0  nop
    ctx->pc = 0x245494u;
    // NOP
    // 0x245498: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x245498u;
    {
        const bool branch_taken_0x245498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245498u;
        // 0x24549c: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245498) {
            ctx->pc = 0x24546Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24546c;
        }
    }
    ctx->pc = 0x2454A0u;
label_2454a0:
    // 0x2454a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2454a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2454a4:
    // 0x2454a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2454a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2454a8: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2454a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2454ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2454acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2454b0: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x2454b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2454b4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2454B4u;
    {
        const bool branch_taken_0x2454b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2454b4) {
            ctx->pc = 0x2454B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2454B4u;
            // 0x2454b8: 0xc4c0001c  lwc1        $f0, 0x1C($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x245438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245438;
        }
    }
    ctx->pc = 0x2454BCu;
label_2454bc:
    // 0x2454bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2454bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2454c0: 0x26506690  addiu       $s0, $s2, 0x6690
    ctx->pc = 0x2454c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 26256));
    // 0x2454c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2454c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2454c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2454c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2454cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2454ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2454d0: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x2454d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
    // 0x2454d4: 0xc090d5e  jal         func_243578
    ctx->pc = 0x2454D4u;
    SET_GPR_U32(ctx, 31, 0x2454DCu);
    ctx->pc = 0x2454D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454D4u;
    // 0x2454d8: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x2454D4u, 0x2454DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454DCu;
label_2454dc:
    // 0x2454dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2454dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2454e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2454e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2454e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2454e8: 0xae05019c  sw          $a1, 0x19C($s0)
    ctx->pc = 0x2454e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 5));
    // 0x2454ec: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2454ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2454f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2454f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2454f4: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2454F4u;
    {
        const bool branch_taken_0x2454f4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2454F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454F4u;
        // 0x2454f8: 0xae030104  sw          $v1, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454f4) {
            ctx->pc = 0x24552Cu;
            goto label_24552c;
        }
    }
    ctx->pc = 0x2454FCu;
    // 0x2454fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2454fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245500: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x245500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x245504: 0x0  nop
    ctx->pc = 0x245504u;
    // NOP
label_245508:
    // 0x245508: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x245508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x24550c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245510: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x245510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x245514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x245514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x245518: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x245518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x24551c: 0x8c82019c  lw          $v0, 0x19C($a0)
    ctx->pc = 0x24551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x245520: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x245520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x245524: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x245524u;
    {
        const bool branch_taken_0x245524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245524) {
            ctx->pc = 0x245528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245524u;
            // 0x245528: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245508;
        }
    }
    ctx->pc = 0x24552Cu;
label_24552c:
    // 0x24552c: 0x26506690  addiu       $s0, $s2, 0x6690
    ctx->pc = 0x24552cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 26256));
    // 0x245530: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x245530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245534: 0xc090d5e  jal         func_243578
    ctx->pc = 0x245534u;
    SET_GPR_U32(ctx, 31, 0x24553Cu);
    ctx->pc = 0x245538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245534u;
    // 0x245538: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x245534u, 0x24553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24553Cu;
label_24553c:
    // 0x24553c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x24553cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245540: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x245540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x245544: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x245544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245548: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x245548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24554c: 0xae0701a0  sw          $a3, 0x1A0($s0)
    ctx->pc = 0x24554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 7));
    // 0x245550: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x245550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x245554: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x245554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x245558: 0xc090d5e  jal         func_243578
    ctx->pc = 0x245558u;
    SET_GPR_U32(ctx, 31, 0x245560u);
    ctx->pc = 0x24555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245558u;
    // 0x24555c: 0xae060108  sw          $a2, 0x108($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x245558u, 0x245560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245560u;
label_245560:
    // 0x245560: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x245560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x245564: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x245564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x245568: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x245568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24556c: 0xae0401a8  sw          $a0, 0x1A8($s0)
    ctx->pc = 0x24556cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 4));
    // 0x245570: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x245570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245574: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x245574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x245578: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x245578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24557c: 0xc090d5e  jal         func_243578
    ctx->pc = 0x24557Cu;
    SET_GPR_U32(ctx, 31, 0x245584u);
    ctx->pc = 0x245580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24557Cu;
    // 0x245580: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x24557Cu, 0x245584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245584u;
label_245584:
    // 0x245584: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x245588: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x245588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24558c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24558cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x245590: 0xae0401a4  sw          $a0, 0x1A4($s0)
    ctx->pc = 0x245590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 4));
    // 0x245594: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x245594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245598: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x245598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24559c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2455a0: 0xc090d5e  jal         func_243578
    ctx->pc = 0x2455A0u;
    SET_GPR_U32(ctx, 31, 0x2455A8u);
    ctx->pc = 0x2455A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455A0u;
    // 0x2455a4: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x2455A0u, 0x2455A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455A8u;
label_2455a8:
    // 0x2455a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2455A8u;
    {
        const bool branch_taken_0x2455a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2455a8) {
            ctx->pc = 0x2455ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2455A8u;
            // 0x2455ac: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2455B8u;
            goto label_2455b8;
        }
    }
    ctx->pc = 0x2455B0u;
    // 0x2455b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2455B0u;
    {
        const bool branch_taken_0x2455b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455B0u;
        // 0x2455b4: 0xae000118  sw          $zero, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455b0) {
            ctx->pc = 0x2455CCu;
            goto label_2455cc;
        }
    }
    ctx->pc = 0x2455B8u;
label_2455b8:
    // 0x2455b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2455b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2455bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2455bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2455c0: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x2455c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x2455c4: 0xc090fc0  jal         func_243F00
    ctx->pc = 0x2455C4u;
    SET_GPR_U32(ctx, 31, 0x2455CCu);
    ctx->pc = 0x2455C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455C4u;
    // 0x2455c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F00u, 0x2455C4u, 0x2455CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455CCu;
label_2455cc:
    // 0x2455cc: 0x26506690  addiu       $s0, $s2, 0x6690
    ctx->pc = 0x2455ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 26256));
    // 0x2455d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2455d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2455d4: 0xc090d5e  jal         func_243578
    ctx->pc = 0x2455D4u;
    SET_GPR_U32(ctx, 31, 0x2455DCu);
    ctx->pc = 0x2455D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455D4u;
    // 0x2455d8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243578u, 0x2455D4u, 0x2455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455DCu;
label_2455dc:
    // 0x2455dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2455DCu;
    {
        const bool branch_taken_0x2455dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2455dc) {
            ctx->pc = 0x2455E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2455DCu;
            // 0x2455e0: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2455F0u;
            goto label_2455f0;
        }
    }
    ctx->pc = 0x2455E4u;
    // 0x2455e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2455E4u;
    {
        const bool branch_taken_0x2455e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2455E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455E4u;
        // 0x2455e8: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455e4) {
            ctx->pc = 0x245604u;
            goto label_245604;
        }
    }
    ctx->pc = 0x2455ECu;
    // 0x2455ec: 0x0  nop
    ctx->pc = 0x2455ecu;
    // NOP
label_2455f0:
    // 0x2455f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2455f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2455f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2455f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2455f8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2455f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2455fc: 0xc090fea  jal         func_243FA8
    ctx->pc = 0x2455FCu;
    SET_GPR_U32(ctx, 31, 0x245604u);
    ctx->pc = 0x245600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455FCu;
    // 0x245600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243FA8u, 0x2455FCu, 0x245604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245604u;
label_245604:
    // 0x245604: 0xc09148e  jal         func_245238
    ctx->pc = 0x245604u;
    SET_GPR_U32(ctx, 31, 0x24560Cu);
    ctx->pc = 0x245238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245238u, 0x245604u, 0x24560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24560Cu;
label_24560c:
    // 0x24560c: 0xc091438  jal         func_2450E0
    ctx->pc = 0x24560Cu;
    SET_GPR_U32(ctx, 31, 0x245614u);
    ctx->pc = 0x2450E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2450E0u, 0x24560Cu, 0x245614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245614u;
label_245614:
    // 0x245614: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x245614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245618: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x245618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24561c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24561cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245620: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x245620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245624: 0x3e00008  jr          $ra
    ctx->pc = 0x245624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245624u;
        // 0x245628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24562Cu;
    // 0x24562c: 0x0  nop
    ctx->pc = 0x24562cu;
    // NOP
    ctx->pc = 0x245630u;
}
