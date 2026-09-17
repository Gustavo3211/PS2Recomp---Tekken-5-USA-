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

// Function: sub_00288510
// Address: 0x288510 - 0x288aa0
void sub_00288510_0x288510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288510_0x288510");
#endif

    switch (ctx->pc) {
        case 0x28855cu: goto label_28855c;
        case 0x28893cu: goto label_28893c;
        case 0x288954u: goto label_288954;
        case 0x288964u: goto label_288964;
        case 0x28897cu: goto label_28897c;
        case 0x2889dcu: goto label_2889dc;
        case 0x288a4cu: goto label_288a4c;
        case 0x288a70u: goto label_288a70;
        default: break;
    }

    ctx->pc = 0x288510u;

    // 0x288510: 0x8f82b384  lw          $v0, -0x4C7C($gp)
    ctx->pc = 0x288510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947716)));
    // 0x288514: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x288514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
    // 0x288518: 0xffbe03f0  sd          $fp, 0x3F0($sp)
    ctx->pc = 0x288518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1008), GPR_U64(ctx, 30));
    // 0x28851c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x28851cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288520: 0xffb003b0  sd          $s0, 0x3B0($sp)
    ctx->pc = 0x288520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 16));
    // 0x288524: 0xffb103b8  sd          $s1, 0x3B8($sp)
    ctx->pc = 0x288524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 952), GPR_U64(ctx, 17));
    // 0x288528: 0xffb203c0  sd          $s2, 0x3C0($sp)
    ctx->pc = 0x288528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 960), GPR_U64(ctx, 18));
    // 0x28852c: 0xffb303c8  sd          $s3, 0x3C8($sp)
    ctx->pc = 0x28852cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 968), GPR_U64(ctx, 19));
    // 0x288530: 0xffb403d0  sd          $s4, 0x3D0($sp)
    ctx->pc = 0x288530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 976), GPR_U64(ctx, 20));
    // 0x288534: 0xffb503d8  sd          $s5, 0x3D8($sp)
    ctx->pc = 0x288534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 984), GPR_U64(ctx, 21));
    // 0x288538: 0xffb603e0  sd          $s6, 0x3E0($sp)
    ctx->pc = 0x288538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 992), GPR_U64(ctx, 22));
    // 0x28853c: 0xffb703e8  sd          $s7, 0x3E8($sp)
    ctx->pc = 0x28853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1000), GPR_U64(ctx, 23));
    // 0x288540: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x288540u;
    {
        const bool branch_taken_0x288540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288540u;
        // 0x288544: 0xffbf03f8  sd          $ra, 0x3F8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1016), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288540) {
            ctx->pc = 0x288A28u;
            goto label_288a28;
        }
    }
    ctx->pc = 0x288548u;
    // 0x288548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x288548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28854c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288550: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x288550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x288554: 0xc04a151  jal         func_128544
    ctx->pc = 0x288554u;
    SET_GPR_U32(ctx, 31, 0x28855Cu);
    ctx->pc = 0x288558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288554u;
    // 0x288558: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x288554u, 0x28855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28855Cu;
label_28855c:
    // 0x28855c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x28855cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288560: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x288560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288564: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x288564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x288568: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x288568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28856c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x28856cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x288570: 0x240b0007  addiu       $t3, $zero, 0x7
    ctx->pc = 0x288570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x288574: 0x24190006  addiu       $t9, $zero, 0x6
    ctx->pc = 0x288574u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x288578: 0x2418000e  addiu       $t8, $zero, 0xE
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x28857c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x28857cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288580: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x288580u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x288584: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x288584u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x288588: 0x240c0017  addiu       $t4, $zero, 0x17
    ctx->pc = 0x288588u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x28858c: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x288590: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x288590u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x288594: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x288594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x288598: 0xafa90034  sw          $t1, 0x34($sp)
    ctx->pc = 0x288598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
    // 0x28859c: 0x254a9830  addiu       $t2, $t2, -0x67D0
    ctx->pc = 0x28859cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294940720));
    // 0x2885a0: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x2885a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x2885a4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2885a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2885a8: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x2885a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x2885ac: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x2885acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2885b0: 0xafa9006c  sw          $t1, 0x6C($sp)
    ctx->pc = 0x2885b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 9));
    // 0x2885b4: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2885b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x2885b8: 0xafa90070  sw          $t1, 0x70($sp)
    ctx->pc = 0x2885b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 9));
    // 0x2885bc: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2885bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x2885c0: 0xafa80078  sw          $t0, 0x78($sp)
    ctx->pc = 0x2885c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 8));
    // 0x2885c4: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2885c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2885c8: 0xafa7009c  sw          $a3, 0x9C($sp)
    ctx->pc = 0x2885c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 7));
    // 0x2885cc: 0x26739858  addiu       $s3, $s3, -0x67A8
    ctx->pc = 0x2885ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940760));
    // 0x2885d0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2885d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x2885d4: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x2885d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    // 0x2885d8: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x2885d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x2885dc: 0x26949840  addiu       $s4, $s4, -0x67C0
    ctx->pc = 0x2885dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940736));
    // 0x2885e0: 0xafb10028  sw          $s1, 0x28($sp)
    ctx->pc = 0x2885e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 17));
    // 0x2885e4: 0x26b59870  addiu       $s5, $s5, -0x6790
    ctx->pc = 0x2885e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940784));
    // 0x2885e8: 0xafb9002c  sw          $t9, 0x2C($sp)
    ctx->pc = 0x2885e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 25));
    // 0x2885ec: 0x27a4033c  addiu       $a0, $sp, 0x33C
    ctx->pc = 0x2885ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
    // 0x2885f0: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x2885f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x2885f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2885f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885f8: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x2885f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x2885fc: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2885fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x288600: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x288600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x288604: 0x26f733c0  addiu       $s7, $s7, 0x33C0
    ctx->pc = 0x288604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 13248));
    // 0x288608: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x288608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x28860c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x28860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x288610: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x288610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x288614: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x288614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x288618: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x288618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x28861c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x28861cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x288620: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x288620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x288624: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x288624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x288628: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x288628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
    // 0x28862c: 0xafb20074  sw          $s2, 0x74($sp)
    ctx->pc = 0x28862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 18));
    // 0x288630: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x288630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x288634: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x288634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x288638: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x288638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x28863c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x28863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x288640: 0xafb0008c  sw          $s0, 0x8C($sp)
    ctx->pc = 0x288640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 16));
    // 0x288644: 0xafab0090  sw          $t3, 0x90($sp)
    ctx->pc = 0x288644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 11));
    // 0x288648: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x288648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
    // 0x28864c: 0xafb80098  sw          $t8, 0x98($sp)
    ctx->pc = 0x28864cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 24));
    // 0x288650: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x288650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x288654: 0xafa700b8  sw          $a3, 0xB8($sp)
    ctx->pc = 0x288654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
    // 0x288658: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x288658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28865c: 0xafa800bc  sw          $t0, 0xBC($sp)
    ctx->pc = 0x28865cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
    // 0x288660: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x288660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x288664: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x288664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x288668: 0xafaa0114  sw          $t2, 0x114($sp)
    ctx->pc = 0x288668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 10));
    // 0x28866c: 0x340ae400  ori         $t2, $zero, 0xE400
    ctx->pc = 0x28866cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x288670: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x288670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x288674: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x288674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x288678: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x288678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x28867c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x28867cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x288680: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x288680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x288684: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x288684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x288688: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x288688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x28868c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x28868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x288690: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x288690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x288694: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x288694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x288698: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x288698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x28869c: 0xafad00d8  sw          $t5, 0xD8($sp)
    ctx->pc = 0x28869cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 13));
    // 0x2886a0: 0xafab00e0  sw          $t3, 0xE0($sp)
    ctx->pc = 0x2886a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 11));
    // 0x2886a4: 0xafae00e4  sw          $t6, 0xE4($sp)
    ctx->pc = 0x2886a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 14));
    // 0x2886a8: 0xafac00e8  sw          $t4, 0xE8($sp)
    ctx->pc = 0x2886a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 12));
    // 0x2886ac: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x2886acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x2886b0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2886b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2886b4: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2886b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2886b8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x2886b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x2886bc: 0xafaf00fc  sw          $t7, 0xFC($sp)
    ctx->pc = 0x2886bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 15));
    // 0x2886c0: 0xafaf0104  sw          $t7, 0x104($sp)
    ctx->pc = 0x2886c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 15));
    // 0x2886c4: 0xafad0108  sw          $t5, 0x108($sp)
    ctx->pc = 0x2886c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 13));
    // 0x2886c8: 0xafac010c  sw          $t4, 0x10C($sp)
    ctx->pc = 0x2886c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 12));
    // 0x2886cc: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2886ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x2886d0: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2886d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x2886d4: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2886d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2886d8: 0xafb90124  sw          $t9, 0x124($sp)
    ctx->pc = 0x2886d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 25));
    // 0x2886dc: 0xafb00120  sw          $s0, 0x120($sp)
    ctx->pc = 0x2886dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 16));
    // 0x2886e0: 0xafa80128  sw          $t0, 0x128($sp)
    ctx->pc = 0x2886e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 8));
    // 0x2886e4: 0xafa7014c  sw          $a3, 0x14C($sp)
    ctx->pc = 0x2886e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 7));
    // 0x2886e8: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x2886e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2886ec: 0xafaa017c  sw          $t2, 0x17C($sp)
    ctx->pc = 0x2886ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 10));
    // 0x2886f0: 0x240a0011  addiu       $t2, $zero, 0x11
    ctx->pc = 0x2886f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2886f4: 0xafa70174  sw          $a3, 0x174($sp)
    ctx->pc = 0x2886f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 7));
    // 0x2886f8: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x2886f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2886fc: 0xafa90144  sw          $t1, 0x144($sp)
    ctx->pc = 0x2886fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 9));
    // 0x288700: 0xafa80150  sw          $t0, 0x150($sp)
    ctx->pc = 0x288700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 8));
    // 0x288704: 0xafa3016c  sw          $v1, 0x16C($sp)
    ctx->pc = 0x288704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 3));
    // 0x288708: 0xafa80194  sw          $t0, 0x194($sp)
    ctx->pc = 0x288708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 8));
    // 0x28870c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x28870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x288710: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x288710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x288714: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x288714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    // 0x288718: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x288718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
    // 0x28871c: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x28871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x288720: 0xafb00140  sw          $s0, 0x140($sp)
    ctx->pc = 0x288720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 16));
    // 0x288724: 0xafab0148  sw          $t3, 0x148($sp)
    ctx->pc = 0x288724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 11));
    // 0x288728: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x288728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x28872c: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x28872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x288730: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x288730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x288734: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x288734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x288738: 0xafb00164  sw          $s0, 0x164($sp)
    ctx->pc = 0x288738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 16));
    // 0x28873c: 0xafae0168  sw          $t6, 0x168($sp)
    ctx->pc = 0x28873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 14));
    // 0x288740: 0xafb60170  sw          $s6, 0x170($sp)
    ctx->pc = 0x288740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 22));
    // 0x288744: 0xafac0178  sw          $t4, 0x178($sp)
    ctx->pc = 0x288744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 12));
    // 0x288748: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x288748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
    // 0x28874c: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x28874cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
    // 0x288750: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x288750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x288754: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x288754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x288758: 0xafb0018c  sw          $s0, 0x18C($sp)
    ctx->pc = 0x288758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 16));
    // 0x28875c: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x28875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x288760: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x288760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x288764: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x288764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x288768: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x288768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x28876c: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x28876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x288770: 0xafb001ac  sw          $s0, 0x1AC($sp)
    ctx->pc = 0x288770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 16));
    // 0x288774: 0xafa901b0  sw          $t1, 0x1B0($sp)
    ctx->pc = 0x288774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 9));
    // 0x288778: 0xafa801bc  sw          $t0, 0x1BC($sp)
    ctx->pc = 0x288778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 8));
    // 0x28877c: 0xafaa01dc  sw          $t2, 0x1DC($sp)
    ctx->pc = 0x28877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 10));
    // 0x288780: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x288784: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x288784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
    // 0x288788: 0xafaf01b4  sw          $t7, 0x1B4($sp)
    ctx->pc = 0x288788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 15));
    // 0x28878c: 0xafb801b8  sw          $t8, 0x1B8($sp)
    ctx->pc = 0x28878cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 24));
    // 0x288790: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x288790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
    // 0x288794: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x288794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    // 0x288798: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x288798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x28879c: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x28879cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x2887a0: 0xafb001d0  sw          $s0, 0x1D0($sp)
    ctx->pc = 0x2887a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 16));
    // 0x2887a4: 0xafac01e0  sw          $t4, 0x1E0($sp)
    ctx->pc = 0x2887a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 12));
    // 0x2887a8: 0xafae01d8  sw          $t6, 0x1D8($sp)
    ctx->pc = 0x2887a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 14));
    // 0x2887ac: 0xafa001e4  sw          $zero, 0x1E4($sp)
    ctx->pc = 0x2887acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
    // 0x2887b0: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x2887b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
    // 0x2887b4: 0xafa001ec  sw          $zero, 0x1EC($sp)
    ctx->pc = 0x2887b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 0));
    // 0x2887b8: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x2887b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x2887bc: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x2887bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
    // 0x2887c0: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x2887c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
    // 0x2887c4: 0xafb101f8  sw          $s1, 0x1F8($sp)
    ctx->pc = 0x2887c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 17));
    // 0x2887c8: 0xafa70200  sw          $a3, 0x200($sp)
    ctx->pc = 0x2887c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 7));
    // 0x2887cc: 0x8fc70060  lw          $a3, 0x60($fp)
    ctx->pc = 0x2887ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x2887d0: 0x8fc9005c  lw          $t1, 0x5C($fp)
    ctx->pc = 0x2887d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x2887d4: 0xafaa0224  sw          $t2, 0x224($sp)
    ctx->pc = 0x2887d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 10));
    // 0x2887d8: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x2887d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2887dc: 0xafaa021c  sw          $t2, 0x21C($sp)
    ctx->pc = 0x2887dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 10));
    // 0x2887e0: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x2887e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2887e4: 0xafa30220  sw          $v1, 0x220($sp)
    ctx->pc = 0x2887e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 3));
    // 0x2887e8: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x2887e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x2887ec: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x2887ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x2887f0: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x2887f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
    // 0x2887f4: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x2887f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
    // 0x2887f8: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x2887f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x2887fc: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x2887fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x288800: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x288800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x288804: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x288804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x288808: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x288808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
    // 0x28880c: 0xafa70254  sw          $a3, 0x254($sp)
    ctx->pc = 0x28880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 7));
    // 0x288810: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x288810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x288814: 0xafa70248  sw          $a3, 0x248($sp)
    ctx->pc = 0x288814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 7));
    // 0x288818: 0xafa7026c  sw          $a3, 0x26C($sp)
    ctx->pc = 0x288818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 7));
    // 0x28881c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x28881cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x288820: 0xafaa0264  sw          $t2, 0x264($sp)
    ctx->pc = 0x288820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 10));
    // 0x288824: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x288824u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x288828: 0xafa70288  sw          $a3, 0x288($sp)
    ctx->pc = 0x288828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 7));
    // 0x28882c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x28882cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x288830: 0xafaa0290  sw          $t2, 0x290($sp)
    ctx->pc = 0x288830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 10));
    // 0x288834: 0x240a03c4  addiu       $t2, $zero, 0x3C4
    ctx->pc = 0x288834u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x288838: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x288838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x28883c: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x28883cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x288840: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x288840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x288844: 0xafa30268  sw          $v1, 0x268($sp)
    ctx->pc = 0x288844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
    // 0x288848: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x288848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x28884c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x28884cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
    // 0x288850: 0xafa3028c  sw          $v1, 0x28C($sp)
    ctx->pc = 0x288850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 3));
    // 0x288854: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x288854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x288858: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x288858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x28885c: 0xafa702b4  sw          $a3, 0x2B4($sp)
    ctx->pc = 0x28885cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 7));
    // 0x288860: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x288860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x288864: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x288864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x288868: 0xafaa02c0  sw          $t2, 0x2C0($sp)
    ctx->pc = 0x288868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 10));
    // 0x28886c: 0x240a012c  addiu       $t2, $zero, 0x12C
    ctx->pc = 0x28886cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x288870: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x288870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
    // 0x288874: 0xafa00238  sw          $zero, 0x238($sp)
    ctx->pc = 0x288874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
    // 0x288878: 0xafa0023c  sw          $zero, 0x23C($sp)
    ctx->pc = 0x288878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 0));
    // 0x28887c: 0xafb40258  sw          $s4, 0x258($sp)
    ctx->pc = 0x28887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 20));
    // 0x288880: 0xafa9025c  sw          $t1, 0x25C($sp)
    ctx->pc = 0x288880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 9));
    // 0x288884: 0xafb60240  sw          $s6, 0x240($sp)
    ctx->pc = 0x288884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 22));
    // 0x288888: 0xafa00260  sw          $zero, 0x260($sp)
    ctx->pc = 0x288888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 0));
    // 0x28888c: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x28888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
    // 0x288890: 0xafb3027c  sw          $s3, 0x27C($sp)
    ctx->pc = 0x288890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 19));
    // 0x288894: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x288894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x288898: 0xafa00284  sw          $zero, 0x284($sp)
    ctx->pc = 0x288898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 0));
    // 0x28889c: 0xafb502a0  sw          $s5, 0x2A0($sp)
    ctx->pc = 0x28889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 21));
    // 0x2888a0: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x2888a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
    // 0x2888a4: 0xafa002a4  sw          $zero, 0x2A4($sp)
    ctx->pc = 0x2888a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 0));
    // 0x2888a8: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x2888a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    // 0x2888ac: 0xafb302c4  sw          $s3, 0x2C4($sp)
    ctx->pc = 0x2888acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 19));
    // 0x2888b0: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x2888b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
    // 0x2888b4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2888b8: 0xafa802fc  sw          $t0, 0x2FC($sp)
    ctx->pc = 0x2888b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 8));
    // 0x2888bc: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2888bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2888c0: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x2888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
    // 0x2888c4: 0xafa302d4  sw          $v1, 0x2D4($sp)
    ctx->pc = 0x2888c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 3));
    // 0x2888c8: 0xafb702c8  sw          $s7, 0x2C8($sp)
    ctx->pc = 0x2888c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 23));
    // 0x2888cc: 0xafb602ac  sw          $s6, 0x2AC($sp)
    ctx->pc = 0x2888ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 22));
    // 0x2888d0: 0xafa002cc  sw          $zero, 0x2CC($sp)
    ctx->pc = 0x2888d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
    // 0x2888d4: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x2888d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x2888d8: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x2888d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x2888dc: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x2888dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x2888e0: 0xafa002e0  sw          $zero, 0x2E0($sp)
    ctx->pc = 0x2888e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 0));
    // 0x2888e4: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x2888e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
    // 0x2888e8: 0xafa002e8  sw          $zero, 0x2E8($sp)
    ctx->pc = 0x2888e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 0));
    // 0x2888ec: 0xafa002ec  sw          $zero, 0x2EC($sp)
    ctx->pc = 0x2888ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 0));
    // 0x2888f0: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x2888f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
    // 0x2888f4: 0xafa702f8  sw          $a3, 0x2F8($sp)
    ctx->pc = 0x2888f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 7));
    // 0x2888f8: 0xafb002f4  sw          $s0, 0x2F4($sp)
    ctx->pc = 0x2888f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 16));
    // 0x2888fc: 0xafa00300  sw          $zero, 0x300($sp)
    ctx->pc = 0x2888fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 0));
    // 0x288900: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x288900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
    // 0x288904: 0xafa00308  sw          $zero, 0x308($sp)
    ctx->pc = 0x288904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 0));
    // 0x288908: 0xafa0030c  sw          $zero, 0x30C($sp)
    ctx->pc = 0x288908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 0));
    // 0x28890c: 0xafa00310  sw          $zero, 0x310($sp)
    ctx->pc = 0x28890cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 0));
    // 0x288910: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x288910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
    // 0x288914: 0xafb6031c  sw          $s6, 0x31C($sp)
    ctx->pc = 0x288914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 22));
    // 0x288918: 0xafa80320  sw          $t0, 0x320($sp)
    ctx->pc = 0x288918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 8));
    // 0x28891c: 0xafaa0324  sw          $t2, 0x324($sp)
    ctx->pc = 0x28891cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 10));
    // 0x288920: 0xafb00318  sw          $s0, 0x318($sp)
    ctx->pc = 0x288920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 16));
    // 0x288924: 0xafa00328  sw          $zero, 0x328($sp)
    ctx->pc = 0x288924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 0));
    // 0x288928: 0xafa0032c  sw          $zero, 0x32C($sp)
    ctx->pc = 0x288928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 0));
    // 0x28892c: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x28892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    // 0x288930: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x288930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
    // 0x288934: 0xc04a151  jal         func_128544
    ctx->pc = 0x288934u;
    SET_GPR_U32(ctx, 31, 0x28893Cu);
    ctx->pc = 0x288938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288934u;
    // 0x288938: 0xafa00338  sw          $zero, 0x338($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x288934u, 0x28893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28893Cu;
label_28893c:
    // 0x28893c: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x288940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288944: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x288944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x288948: 0xafb1033c  sw          $s1, 0x33C($sp)
    ctx->pc = 0x288948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 17));
    // 0x28894c: 0xc04a151  jal         func_128544
    ctx->pc = 0x28894Cu;
    SET_GPR_U32(ctx, 31, 0x288954u);
    ctx->pc = 0x288950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28894Cu;
    // 0x288950: 0xafb00344  sw          $s0, 0x344($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x28894Cu, 0x288954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288954u;
label_288954:
    // 0x288954: 0x27a40384  addiu       $a0, $sp, 0x384
    ctx->pc = 0x288954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x288958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x288958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28895c: 0xc04a151  jal         func_128544
    ctx->pc = 0x28895Cu;
    SET_GPR_U32(ctx, 31, 0x288964u);
    ctx->pc = 0x288960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28895Cu;
    // 0x288960: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x28895Cu, 0x288964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288964u;
label_288964:
    // 0x288964: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x288964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x288968: 0x24845e20  addiu       $a0, $a0, 0x5E20
    ctx->pc = 0x288968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
    // 0x28896c: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x28896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x288970: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x288970u;
    {
        const bool branch_taken_0x288970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288970u;
        // 0x288974: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288970) {
            ctx->pc = 0x2889D8u;
            goto label_2889d8;
        }
    }
    ctx->pc = 0x288978u;
    // 0x288978: 0x27a203a0  addiu       $v0, $sp, 0x3A0
    ctx->pc = 0x288978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_28897c:
    // 0x28897c: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x28897cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x288980: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x288980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x288984: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x288984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x288988: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x288988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28898c: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x28898cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x288990: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x288990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x288994: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x288994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x288998: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x288998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28899c: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x28899cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889a0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x2889a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889a4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2889a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889a8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2889a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889ac: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2889acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889b0: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2889b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889b4: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x2889b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889b8: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x2889b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2889bc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2889bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2889c0: 0x0  nop
    ctx->pc = 0x2889c0u;
    // NOP
    // 0x2889c4: 0x0  nop
    ctx->pc = 0x2889c4u;
    // NOP
    // 0x2889c8: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2889C8u;
    {
        const bool branch_taken_0x2889c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2889CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2889C8u;
        // 0x2889cc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2889c8) {
            ctx->pc = 0x28897Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28897c;
        }
    }
    ctx->pc = 0x2889D0u;
    // 0x2889d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2889D0u;
    {
        const bool branch_taken_0x2889d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2889d0) {
            ctx->pc = 0x288A10u;
            goto label_288a10;
        }
    }
    ctx->pc = 0x2889D8u;
label_2889d8:
    // 0x2889d8: 0x27a203a0  addiu       $v0, $sp, 0x3A0
    ctx->pc = 0x2889d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_2889dc:
    // 0x2889dc: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x2889dcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2889e0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x2889e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2889e4: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2889e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2889e8: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2889e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2889ec: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x2889ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x2889f0: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x2889f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2889f4: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x2889f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2889f8: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x2889f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2889fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2889fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x288a00: 0x0  nop
    ctx->pc = 0x288a00u;
    // NOP
    // 0x288a04: 0x0  nop
    ctx->pc = 0x288a04u;
    // NOP
    // 0x288a08: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x288A08u;
    {
        const bool branch_taken_0x288a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A08u;
        // 0x288a0c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a08) {
            ctx->pc = 0x2889DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2889dc;
        }
    }
    ctx->pc = 0x288A10u;
label_288a10:
    // 0x288a10: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x288a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x288a14: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x288a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x288a18: 0xb0880007  sdl         $t0, 0x7($a0)
    ctx->pc = 0x288a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288a20: 0xb4880000  sdr         $t0, 0x0($a0)
    ctx->pc = 0x288a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x288a24: 0xaf82b384  sw          $v0, -0x4C7C($gp)
    ctx->pc = 0x288a24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947716), GPR_U32(ctx, 2));
label_288a28:
    // 0x288a28: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x288a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x288a2c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288A2Cu;
    {
        const bool branch_taken_0x288a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A2Cu;
        // 0x288a30: 0xdfb003b0  ld          $s0, 0x3B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a2c) {
            ctx->pc = 0x288A74u;
            goto label_288a74;
        }
    }
    ctx->pc = 0x288A34u;
    // 0x288a34: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x288a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x288a38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x288A38u;
    {
        const bool branch_taken_0x288a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A38u;
        // 0x288a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288a38) {
            ctx->pc = 0x288A74u;
            goto label_288a74;
        }
    }
    ctx->pc = 0x288A40u;
    // 0x288a40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x288a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a44: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x288A44u;
    SET_GPR_U32(ctx, 31, 0x288A4Cu);
    ctx->pc = 0x288A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A44u;
    // 0x288a48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2875E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2875E8u, 0x288A44u, 0x288A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A4Cu;
label_288a4c:
    // 0x288a4c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x288a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x288a50: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x288a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288a54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x288a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x288a58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x288a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x288a5c: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x288a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x288a60: 0x24215e20  addiu       $at, $at, 0x5E20
    ctx->pc = 0x288a60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 24096));
    // 0x288a64: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x288a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x288a68: 0xc0a1c7a  jal         func_2871E8
    ctx->pc = 0x288A68u;
    SET_GPR_U32(ctx, 31, 0x288A70u);
    ctx->pc = 0x288A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A68u;
    // 0x288a6c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2871E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2871E8u, 0x288A68u, 0x288A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A70u;
label_288a70:
    // 0x288a70: 0xdfb003b0  ld          $s0, 0x3B0($sp)
    ctx->pc = 0x288a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 944)));
label_288a74:
    // 0x288a74: 0xdfb103b8  ld          $s1, 0x3B8($sp)
    ctx->pc = 0x288a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x288a78: 0xdfb203c0  ld          $s2, 0x3C0($sp)
    ctx->pc = 0x288a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x288a7c: 0xdfb303c8  ld          $s3, 0x3C8($sp)
    ctx->pc = 0x288a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 968)));
    // 0x288a80: 0xdfb403d0  ld          $s4, 0x3D0($sp)
    ctx->pc = 0x288a80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x288a84: 0xdfb503d8  ld          $s5, 0x3D8($sp)
    ctx->pc = 0x288a84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 984)));
    // 0x288a88: 0xdfb603e0  ld          $s6, 0x3E0($sp)
    ctx->pc = 0x288a88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x288a8c: 0xdfb703e8  ld          $s7, 0x3E8($sp)
    ctx->pc = 0x288a8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1000)));
    // 0x288a90: 0xdfbe03f0  ld          $fp, 0x3F0($sp)
    ctx->pc = 0x288a90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x288a94: 0xdfbf03f8  ld          $ra, 0x3F8($sp)
    ctx->pc = 0x288a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x288a98: 0x3e00008  jr          $ra
    ctx->pc = 0x288A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A98u;
        // 0x288a9c: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288AA0u;
}
