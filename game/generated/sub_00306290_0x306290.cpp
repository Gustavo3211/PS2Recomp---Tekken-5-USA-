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

// Function: sub_00306290
// Address: 0x306290 - 0x306378
void sub_00306290_0x306290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306290_0x306290");
#endif

    switch (ctx->pc) {
        case 0x3062a8u: goto label_3062a8;
        case 0x3062dcu: goto label_3062dc;
        case 0x306308u: goto label_306308;
        case 0x306330u: goto label_306330;
        case 0x306340u: goto label_306340;
        case 0x306360u: goto label_306360;
        default: break;
    }

    ctx->pc = 0x306290u;

    // 0x306290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x306294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x306298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30629c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3062a0: 0xc0b2d0c  jal         func_2CB430
    ctx->pc = 0x3062A0u;
    SET_GPR_U32(ctx, 31, 0x3062A8u);
    ctx->pc = 0x3062A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062A0u;
    // 0x3062a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB430u, 0x3062A0u, 0x3062A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062A8u;
label_3062a8:
    // 0x3062a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3062a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3062ac: 0x5c8821  addu        $s1, $v0, $gp
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x3062b0: 0x8e31a850  lw          $s1, -0x57B0($s1)
    ctx->pc = 0x3062b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294944848)));
    // 0x3062b4: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x3062b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x3062b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3062B8u;
    {
        const bool branch_taken_0x3062b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062B8u;
        // 0x3062bc: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062b8) {
            ctx->pc = 0x3062E8u;
            goto label_3062e8;
        }
    }
    ctx->pc = 0x3062C0u;
    // 0x3062c0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3062c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3062c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3062C4u;
    {
        const bool branch_taken_0x3062c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3062C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062C4u;
        // 0x3062c8: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062c4) {
            ctx->pc = 0x3062E8u;
            goto label_3062e8;
        }
    }
    ctx->pc = 0x3062CCu;
    // 0x3062cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3062d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3062d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3062d4: 0xc092940  jal         func_24A500
    ctx->pc = 0x3062D4u;
    SET_GPR_U32(ctx, 31, 0x3062DCu);
    ctx->pc = 0x3062D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062D4u;
    // 0x3062d8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x3062D4u, 0x3062DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062DCu;
label_3062dc:
    // 0x3062dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3062DCu;
    {
        const bool branch_taken_0x3062dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062DCu;
        // 0x3062e0: 0x32220060  andi        $v0, $s1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062dc) {
            ctx->pc = 0x30630Cu;
            goto label_30630c;
        }
    }
    ctx->pc = 0x3062E4u;
    // 0x3062e4: 0x0  nop
    ctx->pc = 0x3062e4u;
    // NOP
label_3062e8:
    // 0x3062e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3062E8u;
    {
        const bool branch_taken_0x3062e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062E8u;
        // 0x3062ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062e8) {
            ctx->pc = 0x306308u;
            goto label_306308;
        }
    }
    ctx->pc = 0x3062F0u;
    // 0x3062f0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3062f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3062f4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3062F4u;
    {
        const bool branch_taken_0x3062f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3062f4) {
            ctx->pc = 0x3062F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3062F4u;
            // 0x3062f8: 0x32220060  andi        $v0, $s1, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30630Cu;
            goto label_30630c;
        }
    }
    ctx->pc = 0x3062FCu;
    // 0x3062fc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3062fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x306300: 0xc092940  jal         func_24A500
    ctx->pc = 0x306300u;
    SET_GPR_U32(ctx, 31, 0x306308u);
    ctx->pc = 0x306304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306300u;
    // 0x306304: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306300u, 0x306308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306308u;
label_306308:
    // 0x306308: 0x32220060  andi        $v0, $s1, 0x60
    ctx->pc = 0x306308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)96);
label_30630c:
    // 0x30630c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30630Cu;
    {
        const bool branch_taken_0x30630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30630Cu;
        // 0x306310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30630c) {
            ctx->pc = 0x306348u;
            goto label_306348;
        }
    }
    ctx->pc = 0x306314u;
    // 0x306314: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x306314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x306318: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x306318u;
    {
        const bool branch_taken_0x306318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306318) {
            ctx->pc = 0x30631Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306318u;
            // 0x30631c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306338u;
            goto label_306338;
        }
    }
    ctx->pc = 0x306320u;
    // 0x306320: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x306320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x306324: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x306324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x306328: 0xc092940  jal         func_24A500
    ctx->pc = 0x306328u;
    SET_GPR_U32(ctx, 31, 0x306330u);
    ctx->pc = 0x30632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306328u;
    // 0x30632c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306328u, 0x306330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306330u;
label_306330:
    // 0x306330: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x306330u;
    {
        const bool branch_taken_0x306330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306330u;
        // 0x306334: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306330) {
            ctx->pc = 0x306364u;
            goto label_306364;
        }
    }
    ctx->pc = 0x306338u;
label_306338:
    // 0x306338: 0xc092940  jal         func_24A500
    ctx->pc = 0x306338u;
    SET_GPR_U32(ctx, 31, 0x306340u);
    ctx->pc = 0x30633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306338u;
    // 0x30633c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306338u, 0x306340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306340u;
label_306340:
    // 0x306340: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x306340u;
    {
        const bool branch_taken_0x306340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306340u;
        // 0x306344: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306340) {
            ctx->pc = 0x306364u;
            goto label_306364;
        }
    }
    ctx->pc = 0x306348u;
label_306348:
    // 0x306348: 0x32220090  andi        $v0, $s1, 0x90
    ctx->pc = 0x306348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)144);
    // 0x30634c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30634Cu;
    {
        const bool branch_taken_0x30634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30634Cu;
        // 0x306350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30634c) {
            ctx->pc = 0x306360u;
            goto label_306360;
        }
    }
    ctx->pc = 0x306354u;
    // 0x306354: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x306354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306358: 0xc092940  jal         func_24A500
    ctx->pc = 0x306358u;
    SET_GPR_U32(ctx, 31, 0x306360u);
    ctx->pc = 0x30635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306358u;
    // 0x30635c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x306358u, 0x306360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306360u;
label_306360:
    // 0x306360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x306360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306364:
    // 0x306364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x306368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30636c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30636cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306370: 0x3e00008  jr          $ra
    ctx->pc = 0x306370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306370u;
        // 0x306374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306378u;
}
